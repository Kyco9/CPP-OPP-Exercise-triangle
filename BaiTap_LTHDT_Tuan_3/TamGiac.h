#pragma once
class TamGiac
{
private:
	int a, b, c;
	int hehe = 0;
	float p;

public:
	//Khởi tạo tam giác mặc định
	TamGiac();
	//Khởi tạo tam giác từ các tham số cho trước
	TamGiac(int _a, int _b, int _c);
	//Nhập 3 cạnh tam giác
	void Nhap();
	//Xuất 3 cạnh tam giác
	void Xuat();
	//Tính chu vi tam giác
	void ChuVi();
	//Tính diện tích tam giác
//	void DienTich();
	//Phân loại tam giác thường, cân hay vuông
	void DaylaTamGiacgi();
};

