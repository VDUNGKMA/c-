#include<iostream>
using namespace std;
#include <string.h >
class xe
{
    protected:
    string hoten;
    float sogio;
    public :
    void nhap()
    {
        fflush(stdin);
        cout <<"\nnhap ho ten\n";
        getline(cin,hoten);
        cout <<"\nnhap so gio\n";
        cin>>sogio;
    }
    void xuat()
    {
        cout <<"\nhoten "<<hoten<<endl;
        cout <<"so h "<<sogio<<endl;
    }
};
class xedap :public xe
{
    public :
    double sotienthue()
    {
        return 10000+(sogio-1)*8000;
    }
    void xuat1()
    {
        cout<<"\nso tien thue xe dap :"<<sotienthue()<<endl;
    }
};
class xemay :public xe
{
    private:
    int phankhoi;
    string bienso;
    public :
    void nhap2()
    {
            cout <<"\nnhap thong tin loai xe(100 or 150)\n";
            cin>>phankhoi;
            cout <<"\nnhap bien so xe";
            fflush(stdin);
            getline(cin,bienso);
    }
    double tienthuexemay()
    {
        if(phankhoi==100)
            {
                return 150000+(sogio-1)*100000;
            }
        else if(phankhoi==150)
            {
                 return 200000+(sogio-1)*100000;
            }
    }
    void xuat2()
    {
        if(phankhoi==100)
            {
               cout <<"\ntien thue xe may(100cc) "<<150000+(sogio-1)*100000<<endl;
            }
        else if(phankhoi==150)
            {
                  cout <<"\ntien thue xe may(150cc) "<<200000+(sogio-1)*100000<<endl;
            } 
        cout <<"bien so xe :"<<bienso;
    }
};
double danhsachthuexedap() 
{
    int n;
    double sumthuexedap=0;
    cout<<"\nnhap vao so luong xe dap"<<endl;
    cin>>n;
    xedap *danhsachxedap=new xedap[n];
    for(int i=0;i<n;i++)
    {
        danhsachxedap->nhap();
        danhsachxedap->xuat();
        danhsachxedap->xuat1();
        sumthuexedap+= danhsachxedap->sotienthue();
    }
    cout<<"\ntong so tien thue xe dap la\n"<<(double)sumthuexedap;
    delete danhsachxedap;
    return sumthuexedap;
}
double danhsachthuexemay() 
{
    int n;
    double sumthuexemay=0;
    cout<<"\nnhap vao so luong xe may"<<endl;
    cin>>n;
    xemay *danhsachxemay=new xemay();
    for(int i=0;i<n;i++)
    {
        danhsachxemay->nhap();
        danhsachxemay->nhap2();
        danhsachxemay->xuat();
        danhsachxemay->xuat2();
        sumthuexemay+= danhsachxemay->tienthuexemay();
    }   
     cout<<"\ntong so tien thue xe may la\n"<<(double)sumthuexemay;
     delete danhsachxemay;
     return sumthuexemay;
}
void tong_tien_thue_2xe()
{
    double all_sum_price=danhsachthuexemay() +danhsachthuexedap() ;
    cout <<"\n\ntong tat ca tien thue ca xe dap lan xe may la "<<all_sum_price;
}
int main(int argc, char const *argv[])
{
    tong_tien_thue_2xe();
    return 0;
}
