#include "nguoilon.h"

void nguoilon ::nhapdulieu()
{
    docgia ::nhapdulieu();
    cout <<"nhap so CMND ";
    fflush(stdin);
    getline(cin,CMND);
}
void nguoilon ::xuatdulieu()
{
    docgia ::xuatdulieu();
    cout <<"SO CMND: "<<CMND<<endl;
}
int nguoilon ::tinhtienlamthe()
{
    return docgia ::thanghieuluc*10000;
}