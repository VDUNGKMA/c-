#include <iostream>
using namespace std;
/*Nhận biết method & properties
    method là các động từ 
    properties là các tính từ, danh từ
*/
class student
{
    private: //với những biến nằm trong private chúng bị khóa lại(bảo mật) 
    string name;//đây thường là những thuộc tính(properties):là những tính từ
    int age;
    string telephone_number;
    string address;
    string job;
    public://được hiểu như là 1 method(phương thức) là các động từ
    void nhapinfo(); //khai báo có sự xuất hiện của 2 hàm nhapinfo va xuatinfo trong public 
    void xuatinfo();
    //setter and getter dùng để phá khóa private để thay đổi data trong private 
     void setter_hoten(string hoten);
     string getter_hoten();

 };
void student::nhapinfo() //để lấy data trong private thì ta cần truy cập vào trong class chứa trong private trước đã
    {
        cout <<"nhap ho ten"<<endl;
        getline(cin,name);
        cout <<"nhap age"<<endl;
        cin>>age;
        fflush(stdin);
        cout <<"nhap so dien thoai "<<endl;
        getline(cin,telephone_number);
        cout <<"nhap address"<<endl;
        getline(cin,address);
        cout <<"nhap job"<<endl;
        getline(cin,job);
    }
void student::xuatinfo() //truy cập lấy data trong private thì ta truy cập vào trong class của nó
{
    cout<<"Ho Ten: "<<name<<endl;
    cout<<"Tuoi: "<<age<<endl;
    cout<<"So dien thoai: "<<telephone_number<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Job: "<<job<<endl;
}
string student::getter_hoten() //getter dùng để hiển thị thông tin vừa mới sửa ở settersetter
{
    return name;
}
void student::setter_hoten(string hoten)// hàm setter có thể bẻ khóa private và thay đổi data trong đó
    {
        name=hoten;
    }
int main(int argc, char const *argv[])
{
    student st1; //coi class như 1 struct có thể tạo nhiều đối tượng khác nhau trong 1 lớp 
    st1.nhapinfo();
    st1.setter_hoten("nguyen va c");
    st1.getter_hoten();
    cout <<"\n\n\n\n";
    st1.xuatinfo();
    return 0;
}
