#include <iostream>
using namespace std;
void phuongthuc()
{
    cout <<"phuong thuc thu nhat"<<endl;
}
void phuongthuc(int a,int b)
{
    cout <<"phuong thuc thu 2"<<endl;
}
int phuongthuc(int a,int b,int c)
{
    return a+b+c;
}
int main(int argc, char const *argv[])
{
    //OVERLODING cho phép chúng ta gọi được hàm có cùng tên nhưng khác các parameter(tham số truyền vào)
    int a=5,b=6,c=1;// như vd trên là cùng tên hàm là phuongthuc
    phuongthuc();
    phuongthuc(a,b);
    cout <<phuongthuc(a,b,c)<<endl;
    return 0;
}
