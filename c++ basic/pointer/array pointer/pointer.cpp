#include <iostream>
using namespace std;
void InputArray(int *arr,int &n) //khai báo con trỏ arr
{
    for(int i=0;i<n;i++ )        //biến chạy
    {
        cout <<"input array["<<i<<"]"<<endl;
        cin >> *(arr +i);//cố định phần con trỏ trỏ về ô nhớ đầu tiên các ô nhớ tiếp theo ta sử dụng toán tử dịch bit: arr[1]=arr[0]+1,arr[3]=arr[0]+3...
    }                    //mỗi một i tương ứng với 4 bit
}
void Output(int *arr,int &n)
{
    for(int i=0;i<n;i++)
    {
        cout <<*(arr+i)<<" ";//xuất ra giá trị tại ô nhớ thứ i mà con trỏ trỏ tới
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout <<"nhap vao n"<<endl;
    cin>>n;
    InputArray(arr,n);
    Output(arr,n);
    return 0;
}
