#include<iostream>
#include<conio.h>
#include"CDiem3D.h"
using namespace std;
void main()
{
	//CDiem3D* A = new CDiem3D();
	//cout << "Nhap diem A" << endl;
	//A->Nhap();

	//CDiem3D* B = new CDiem3D();
	//cout << "Nhap diem B" << endl;
	//B->Nhap();

	CDiem3D* A = new CDiem3D(0, 0, 0);
	CDiem3D* B = new CDiem3D(0, 0, 0);

	cout << "\nKhoang cach AB = " << A->TinhKhoangCach(B);
	
	CDiem3D* M = A->TimTrungDiem(B);
	cout << "\nTrung diem M";
	M->Xuat();

	delete A;
	delete B;
	delete M;

	_getch();
}