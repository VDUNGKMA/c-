#include<iostream>
using namespace std;
class ctv
{
   private :
   string name;
   int age;
   string address;
   string gender;
   string telephone;
   int number_of_post;
   public:
   void nhapthongtin();
   void xuatthongtin();
   float salary();
   void sumsalary(ctv *ctv1 ,int &n);
   void nhapdanhsach(ctv *ctv1,int &n);
   void xuatdanhsach(ctv *ctv1,int &n);
   void change(ctv &a,ctv &b);
   void select_sort(ctv *ctv1 ,int &n);
   
};
void ctv::nhapthongtin()
{
    fflush(stdin);
    cout <<"nhap ten "<<endl;
    getline(cin,name);
    cout <<"nhap tuoi\n";
    cin>>age;
    cout <<"nhap dia chi\n";
    fflush(stdin);
    getline(cin,address);
    cout <<"nhap gioi tinh\n";
    getline(cin,gender);
    cout <<"nhap so dien thoai lien he\n";
    getline(cin,telephone);
    cout <<"nhap so bai dang\n";
    cin>>number_of_post;
}
void ctv::xuatthongtin()
{
    cout<<name<<"\t\t";
    cout<<age<<"\t\t";
    cout<<address<<"\t\t";
    cout<<gender<<"\t\t";
    cout<<telephone<<"\t\t";
    cout<<number_of_post<<endl;
}
float ctv::salary()
{
    return number_of_post*20000;
}
void nhapdanhsach(ctv *ctv1,int &n)
{
    for(int i=0;i<n;i++)
     {
        (ctv1+i)->nhapthongtin();
     }   
}
void xuatdanhsach(ctv *ctv1,int &n)
{
    cout <<"\nHO TEN\t\tTUOI\t\tDIA CHI\t\t GIOI TINH\tSO DIEN THOAI\tSO BAI DANG\t"<<endl;
    for(int i=0;i<n;i++)
     {
        (ctv1+i)->xuatthongtin();
        cout<<"so tien luong "<<((ctv1+i))->salary()<<"\n\n\n";
     }   
}
void sumsalary(ctv *ctv1 ,int &n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=((ctv1+i))->salary();
    }
    cout <<"\n\nallsum salary of employee "<<sum;
}
void change(ctv &a,ctv &b)
{
    ctv c=a;
        a=b;
        b=c;
}
void select_sort(ctv *ctv1 ,int &n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((ctv1+j)->salary()>(ctv1+i)->salary())
            {
              change(*(ctv1+i),*(ctv1+j));
            }
        }
    }
    xuatdanhsach(ctv1,n);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Nhap vao so luong ctv"<<endl;
    cin>>n;
    ctv *ctv1=new ctv[n];
    nhapdanhsach(ctv1,n);
    sumsalary(ctv1,n);
    xuatdanhsach(ctv1,n);
    cout<<"\n\n\n\n LIST OF EMPLOOYEE decreaes\n\n";
    select_sort(ctv1 ,n);
    delete(ctv1);
    return 0;
}
