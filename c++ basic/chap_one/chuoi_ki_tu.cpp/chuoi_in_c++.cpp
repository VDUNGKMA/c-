#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    char name[100]="Hello Word ";
    char student[100]="in c";
    char copy1[100];
    strupr(name);        //uppercase: chữ hoa
    cout <<name<<endl;
    strlwr(name);        // lowercase: chữ thường
    cout <<name<<endl;
    strcat(name,student);//concat:nối chuỗi, kết hợp  
    cout <<name<<endl;
    strcpy(copy1,name);  //copy: sao chép
    cout <<name<<endl;
    int resulf=strcmp(name,student); //compare: so sánh trả về >< or ==
    cout <<resulf<<endl;
    cout <<strlen(student)<<endl; //length: độ dài 

    return 0;
}
