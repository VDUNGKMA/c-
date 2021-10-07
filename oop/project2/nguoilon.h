#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "docgia.h"

class nguoilon :public docgia
{
    private:
    string CMND;
    public :
    void nhapdulieu();
    void xuatdulieu();
    int tinhtienlamthe();
};