#include <iostream>
using namespace std;
//#include <string.h>
int backcount(int a,int b,int &sum)//funtion sử dụng tham chiếu biễn sum
{
    cout <<"gia tri cua Sum_Head= "<<sum<<endl;
    sum =a+b;
    return sum;
}
int main(int argc, char const *argv[])
{
    int a=6;
    int b=5;
    int sum=1;
    cout <<static_cast<float>(a)/b<<endl;//ép kiểu trong c++
    cout <<backcount(a,b,sum)<<endl; //gọi hàm backcount đã creater ở trên
    cout <<sum;//biến sum mới sau khi đã tham chiếu đã thay đổi theo &sum ở hàm backcount trên
    string name; //khai báo kiểu chuỗi cho biến name
    cout <<"nhap vao name"<<endl; 
    getline(cin,name); //getline được dùng trong chuỗi có thể nhập và để in ra chuỗi
    fflush(stdin);
    cout <<name<<endl;
    //getline(cout,name);

   


   


    return 0;
}
