#pragma once
#include"treem.h"
#include"nguoilon.h"
#include<vector>

class CThuVien
{
private:
	vector<treem> ds_docgiatreem; // mảng 1 chiều(danh sách) chứa các độc giả trẻ em
	vector<nguoilon> ds_docgianguoilon; // mảng 1 chiều(danh sách) chứa các độc giả người lớn
public:

	void nhapdulieu();
	void xuatdulieu();
};