class CDiem3D
{
private:
	double x, y, z;
public:
	CDiem3D();
	CDiem3D(double x, double y, double z);
	~CDiem3D();
	void Nhap();
	void Xuat();
	double TinhKhoangCach(CDiem3D* B);
	CDiem3D* TimTrungDiem(CDiem3D* B);
};