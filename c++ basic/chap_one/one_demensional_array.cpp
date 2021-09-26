#include <iostream>
using namespace std;
void InputArray(int arr[],int n)// hàm nhập mảng 
{
    for(int i=0;i<n;i++)
    {
        cout <<"input array["<<i<<"]\n";
        cin >>arr[i];
    }
}
void OutputArray(int arr[],int n)// hàm xuất mảng 
{
    cout <<"\noutput array\n";
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<"\t";
    }
}
void Hoan_Doi(int &a,int &b)// truyền tham chiếu cho 2 biến a và b
{
    int c=a;
        a=b;
        b=c;
}
void Select_Short(int arr[],int n) //hàm sắp xếp tăng dần theo kiểu Select sort
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                Hoan_Doi(arr[i],arr[j]);
            }
        }
    }
}
void Find_Index_Element(int arr[],int n)//hàm  tìm kiếm vị trí biến nhập từ bàn phím
{
    int x;
    int count=0;
    cout <<"\ninput the findcount\n";
    cin>>x;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count ++;
        }
    }
    if(count ==0)
    {
        cout <<"no findindex the count"<<endl;
    }
    else
    {
        cout <<"\nindex the findcount ";
         for(int i=0;i<n;i++)
        {
                if(arr[i]==x)
                {
                cout <<i<<"\t";
                }
        }
    }
}
void Max_Element_Array(int arr[],int n)// hàm tìm max trong mảng
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout <<"\nmax="<<arr[i]<<endl;
            break;
        }
    }
}
int Min_Element_Array(int arr[],int n)//hàm tìm min trong mảng vừa khởi tạo
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
void Index_Min_Element_Array(int arr[],int n)//hàm tìm vị trí min trong mảng
{
   int  min=Min_Element_Array(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            cout<<"\nbien min nam o vi tri thu "<<i<<"\t";
        }   
     }
}
void add_element_in_array(int arr[],int n)//thêm 1 phần tử vào 1 vị trí của mảng
{
    int x,index;
    cout <<"\nnhap vao so can them va vi tri can them";
    cin >>x>>index;
    for(int i=n;i>index;i--)
    {
        arr[i]=arr[i-1];    //thuật toán dịch mảng về phía sau
    }
        arr[index]=x;       //gán giá trị x tại vị trí    
        cout <<"\nMang sau khi them phan tu la ";
    OutputArray(arr,n+1);
}
void delete_element_array(int arr[],int n)//xóa 1 phần tử tại 1 vị trí 
{
    int index;
    cout <<"\nnhap vao vi tri can xoa";
    cin >>index;
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];        // thuật toán dịch mảng sang trái
    }
        cout <<"\nMang sau khi xoa phan tu la ";
        OutputArray(arr,n-1);
}
void add_element_at_the_position(int arr[],int n,int x,int index)
{
    for(int i=n;i>index;i--)
    {
        arr[i]=arr[i-1];   //thuật toán dịch mảng sang phải
    }
        arr[index]=x;      //gán giá trị x tại vị trí  
}
void add_element_nodesort(int arr[],int n) //hàm thêm phần tử không cần sắp xếp lại dãy
{
    int x,count=0;
    cout <<"\nnhap gia tri bien can them ";
    cin >>x;
    for(int i=0;i<n;i++) //duyệt mảng từ đầu đến cuối 
    {
        if(arr[i]>x)       //nếu có giá trị nào lớn hơn biến x
        {
          add_element_at_the_position(arr,n,x,i);//gọi hàm thêm phần tử vào vị trí 
          break;                                 //thoát khỏi vòng lặp
        }
        else if(arr[n-1]<x) //nếu mà rơi vào trường hợp trong mảng không có giá trị nào lớn hơn x thì thêm vào vị trí cuối
        {
            add_element_at_the_position(arr,n,x,n); //gọi hàm thêm vào vị trí cuối
            break;
        }
    }
    cout <<"\nthem phan tu khong sap xep ";
    OutputArray(arr,n+1);

}
int main(int argc, char const *argv[])
{
    int arr[100];
    int n; 
    int min;
    cout <<"input the quantity phan tu"<<endl;
    cin >>n;
    InputArray(arr,n);
    OutputArray(arr,n);
     Select_Short(arr,n);
     OutputArray(arr,n);
    // Find_Index_Element(arr,n);
    // Max_Element_Array(arr,n);
    // min=Min_Element_Array( arr, n);
    // cout<<"min="<<min<<endl;
    // Index_Min_Element_Array(arr,n);
    // add_element_in_array(arr,n);
    // delete_element_array( arr, n);
    add_element_nodesort( arr, n);
    return 0;
}
