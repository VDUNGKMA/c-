#include <iostream>
using namespace std;
/* trong 1 truong co 3 khu sau:
khu giang duong:(ten khu,so luong den,so luong sinh vien )
khu hoi dong:(ten khu ,so luong den ,so luong giao vien)
khu the thao:(ten khu,so luong den, so dung cu) 
==> TA SẼ SỬ DỤNG ENHERITANCE(TÍNH KẾ THỪA-những phần tử chung) để tối ưu hóa code và biên dịch(complete)*/
class khu_o_truong
{
    protected:
    string tenkhu;
    int so_luong_den;
    public:
    void nhapdulieuchung()
    {
        fflush(stdin);
        cout <<"nhap ten khu:"<<endl;
        getline(cin,tenkhu);
        cout <<"nhap so luong den: "<<endl;
        cin>>so_luong_den;
    }
    void xuatdulieuchung()
    {
        cout <<tenkhu<<"\t\t";
        cout <<so_luong_den<<"\t\t";
    }
};
class khu_giang_duong :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluongsinhvien;
    public:
    void nhapdulieu1()
    {
        cout<<"\nnhap so luong sinh vien \n";
        cin >>soluongsinhvien;
    }
    void xuatdulieu1()
    {
        cout<<soluongsinhvien<<endl;
    }
};
class khu_hoi_dong :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluonggiaovien;
    public:
    void nhapdulieu2()
    {
        cout <<"\nnhap so luong giao vien \n";
        cin>>soluonggiaovien;
    }
    void xuatdulieu2()
    {
        cout <<soluonggiaovien<<endl;
    }
};
class khu_the_thao :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluongdungcu;
    public:
    void nhapdulieu3()
    {
        cout <<"so luong dung cu ";
        cin>>soluongdungcu;
    }
    void xuatdulieu3()
    {
        cout <<soluongdungcu<<endl;
    }
};
int main(int argc, char const *argv[])
{ 
    khu_giang_duong kgd1;
    khu_hoi_dong khd1;
    khu_the_thao ktt1;
    kgd1.nhapdulieuchung();
    kgd1.nhapdulieu1();
    khd1.nhapdulieuchung();
    khd1.nhapdulieu2();
    ktt1.nhapdulieuchung();
    ktt1.nhapdulieu3();
    cout <<"TEN KHU\t\tSO LUONG DEN\t\tSO LUONG KHAC\n";
     kgd1.xuatdulieuchung();
    kgd1.xuatdulieu1();
    khd1.xuatdulieuchung();
    khd1.xuatdulieu2();
    ktt1.xuatdulieuchung();
    ktt1.xuatdulieu3();




    
    return 0;
}
