#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "docgia.h"

class treem :public docgia
{
    private :
    string hotennguoidaidien;
    public :
    void nhapdulieu();
    void xuatdulieu();
    int tinhtienlamthe();
};