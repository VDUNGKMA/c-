#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int arr[]={1,3,4,5,6,7};
   for(auto item :arr) //foreach (chỉ dùng khi mảng đã gán hết giá trị) được dùng để gán liên tục arr vào biến item
   {
       cout <<item<<" "; //khi đã gán từng arr vào item liên tục thì bây giờ chỉ in ra thôi 
   }
    return 0;
}
