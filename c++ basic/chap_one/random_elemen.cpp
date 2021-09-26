#include <iostream>
#include <cstdlib> // thu vien su dung ham srand 
#include <ctime>   //thu vien ham time 
using namespace std;
int main(int argc, char const *argv[])
{
    
    srand(time(NULL)); //hàm time đăt trong giá trị NULL;
/* loi dung tinh chat chia du nam trong khoang 
vd: 2 số 15 và 4 thì 15 % 4 khoảng giá trị {0,1,2,3}.Lợi dụng tính chất này 
ta có thể tạo được số ngẫu nhiên trong khoảng được. */
    int a=rand()%10+1; // bien a nam trong khoang tu 1 den 10 vì số rand()%10=[0;9]
    int b=rand()%100+5;//bien b nam trong khoang tu 5 den 104 vì số rand(%100)=[0;99]
    cout <<a<<endl;
    cout <<b<<endl;
    

    return 0;
}