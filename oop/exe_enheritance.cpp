#include <iostream>
using namespace std;
class libraty_x
{
    protected :
    string hoten;
    string setupday;
    int number_of_monthfinal;
    public :
    void  nhap()
    {
        fflush(stdin);
        cout<<"\nnhap ho va ten"<<endl;
        getline(cin,hoten);
        cout <<"\nnhap ngay bat dau lam the\n ";
        getline(cin,setupday);
        cout <<"\nnhap so thang ket thuc the\n";
        cin>>number_of_monthfinal;
    }
    void xuat()
    {
        cout <<"\nho va ten"<<hoten;
        cout <<"\ngay bat dau lam the "<<setupday;
        cout<<"\nso thang ket thuc the"<<number_of_monthfinal<<endl;
    }
};
class child : public libraty_x
{
    private:
    string headpeople;
    public :
     void  nhap1()
     {
         fflush(stdin);
         cout <<"\nnhap ho ten nguoi dai dien\n";
         getline(cin,headpeople);
     }
    void xuat1()
    {
        cout <<"\nho ten nguoi dai dien "<<headpeople;
        cout <<"\nso tien thue sach cho tre em "<<moneyofchild();
    }
    int moneyofchild()
    {
        return number_of_monthfinal*5000;
    }
};
class adult : public libraty_x
{
    private:
    string cmnd;
    public:
    void  nhap2()
    {
        fflush(stdin);
        cout <<"\nnhap so chung minh nhan dan ";
        getline(cin,cmnd);
    }
    int money_of_adult()
    {
        return number_of_monthfinal *10000;
    }
    void xuat2()
    {
        cout <<"\nso chung minh nhan dan "<<cmnd<<endl;
        cout <<"so tien thue sach cua nguoi lon la"<<money_of_adult()<<endl;
    }
};
void dsnhaptreem(child *arr[100])
{
    child *child1=new child();
    int n;
    int sum1=0;         
    cout <<"\nnhap vao so luong the tre em\n";
    cin>>n;
    for(int i=0;i<n;i++)
        {
            arr[i]-> child1->nhap();
            arr[i]= child1->nhap1();
             sum1+= child1->moneyofchild();
        }
}
void dsnhapnguoilon()
{
     int n2,sum2=0;
    adult *adult1=new adult();
     cout <<"\nnhap vao so luong the nguoi lon\n";
     cin>>n2;
    for(int i=0;i<n2;i++)
        {
            adult1->nhap();
            adult1->nhap2();
            sum2+= adult1->money_of_adult();
        }
}
void dsintrem()
{
    child *child1=new child();
    child1->xuat();
    child1->xuat1();
}
void dsinnguoilon()
{
    adult *adult1=new adult();
    adult1->xuat();
    adult1->xuat2();

}
void menu()
{
    cout <<"\n1.nhap thong tin tre em "<<endl;
    cout <<"2.nhap thong tin nguoi lon "<<endl;
    cout <<"3.xuat thong tin tre em "<<endl;
    cout <<"4.xuat thong tin nguoi lon"<<endl;
    cout <<"tong tien thu cua tre em va nguoi lon\n";
}
int main(int argc, char const *argv[])
{
    int choose=1;
    do
    {
        menu();
        cout <<"\nnhap lua chon ";
        cin >>choose;
        switch (choose)
        {
            case 1:
              
                break;
            case 2:
               
                break;
            case 3:
                   
                break;
            case 4:
                    
                break;
            case 5:
                
                break;
            default :
                break;
        }
    } while (choose<6&&choose>0);
    return 0;
}
