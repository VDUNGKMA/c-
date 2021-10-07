#include "treem.h"

void treem :: nhapdulieu()
{
    docgia::nhapdulieu();
    fflush(stdin);
    cout <<"\nnhap ho ten nguoi dai dien ";
    getline(cin,hotennguoidaidien);
}
void treem :: xuatdulieu()
{
    docgia::xuatdulieu();
    cout <<"\nHo va ten nguoi dai dien "<<hotennguoidaidien<<endl;
}
int treem :: tinhtienlamthe()
{
    return thanghieuluc *5000;
}
