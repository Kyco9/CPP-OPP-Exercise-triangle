#pragma once
class TamGiac
{
private:
	int a, b, c;

public:
	//Khởi tạo tam giác mặc định
	TamGiac();
	//Khởi tạo tam giác từ các tham số cho trước
	TamGiac(int a, int b, int c);
	//Nhập 3 cạnh tam giác
	void Nhap();
	//Xuất 3 cạnh tam giác
	void Xuat();
	//Tính chu vi tam giác
	float ChuVi();
	//Tính diện tích tam giác
	float DienTich();
	//Phân loại tam giác thường, cân hay vuông
	void DaylaTamGiacgi();
};

