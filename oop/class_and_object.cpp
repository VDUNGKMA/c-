#include <iostream>
#include <string>
using namespace std;
class sinhvien
{
    private:                // private chỉ truy cập đc trong class đấy thôi ra khỏi hàm là bị khóa 
        string name;
        int age;
        string dateofbirth;
        int heigth;
    public:                 //pulbic truy xuất thoải mái cả ngoài lẫn trong hàm
    void nhapinfo()
    {
        fflush(stdin);
        cout <<"nhap ho ten"<<endl;
        getline(cin,name);//muốn truy cập vào private để lấy data cần truy cập vào class chứa private trước đã
        cout <<"nhap tuoi "<<endl;
        fflush(stdin);
        cin>>age;
        cout <<"nhap ngay/thang/nam sinh "<<endl;
        fflush(stdin);
        getline(cin,dateofbirth);
        cout<<"nhap chieu cao"<<endl;
        fflush(stdin);
        cin>>heigth;

    }
    void xuatinfo()
    {
        cout <<"\n\t\t\t\n";
        cout <<"Name "<<name<<endl;
        cout <<"Age "<<age<<endl;
        cout <<"Date of birth "<<dateofbirth<<endl;
        cout <<"height " <<heigth<<endl;
    }
};
int main(int argc, char const *argv[])
{
    sinhvien sv1;
    sv1.nhapinfo();
    sv1.xuatinfo();
    return 0;
}
