#include <iostream>
using namespace std;
void nhapmang(int *arr,int &length)
{
    for(int i=0;i<length;i++)
    {
        cout <<"nhap arr["<<i<<"]"<<endl;
        cin >>*(arr+i);
    }
}
void xuatmang(int *arr,int &length)
{
      for(int i=0;i<length;i++)
    {
        cout <<*(arr+i)<<" ";
    }
}
void change(int &a,int &b)
{
    int c=a;
        a=b;
        b=c;
}
void select_sort(int *arr,int &length)
{
     for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(*(arr+j)>*(arr+i))
            {
                change(*(arr+i),*(arr+j));
            }        
        }
    }
    xuatmang(arr,length);
}
int main(int argc, char const *argv[])
{
    int length;
    cout <<"nhap vao do dai mang "<<endl;
    cin>>length;
    int *arr=new int(length); //cấp phát động cho con trỏ 
    nhapmang(arr,length);
    xuatmang(arr,length);
    cout<<"\nmang sau khi da sap xep la\n";
    select_sort(arr,length);
    delete arr;
    return 0;
}
