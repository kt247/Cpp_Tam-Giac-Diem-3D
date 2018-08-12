#include<iostream>
#include"CDiem3D.h"
using namespace std;
CDiem3D::CDiem3D()
{
	x = y = z = 0;
}
CDiem3D::CDiem3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
CDiem3D::~CDiem3D() {}
void CDiem3D::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
void CDiem3D::Xuat()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}
double CDiem3D::TinhKhoangCach(CDiem3D* B)
{
	return sqrt(pow(this->x - B->x, 2) + pow(this->y - B->y, 2) + pow(this->z - B->z, 2));
}
CDiem3D* CDiem3D::TimTrungDiem(CDiem3D* B)
{
	CDiem3D* M = new CDiem3D();
	M->x = (this->x + B->x) / 2;
	M->y = (this->y + B->y) / 2;
	M->z = (this->z + B->z) / 2;
	return M;
}