#include <iostream>
#include<stdio.h>
using namespace std;

class Nguoi{
	private:
		string MaDinhDanh, HoTen;
	protected:
		int NamSinh;
	public:
		Nguoi();
		~Nguoi();
		void Nhap();
		void Xuat() const;
};

Nguoi::Nguoi(){
	MaDinhDanh="";
	HoTen="";
	NamSinh=0;
}

Nguoi::~Nguoi(){
}

void Nguoi::Nhap(){
	fflush(stdin);
	cout<<"\n Ho ten: ";
	getline(cin,HoTen);
	fflush(stdin);
	cout<<"\n Nhap ma dinh danh: ";
	getline(cin,MaDinhDanh);
	cout<<"\n Nhap nam sinh: ";
	cin>>NamSinh;
}

void Nguoi::Xuat() const{
	cout<<"\n --->Ho ten: "<<HoTen<<"\t"<<"Ma dinh danh: "<<MaDinhDanh<<"\t"<<" nam sinh: "<<NamSinh;
}

class NhanVien:public Nguoi{
	private:
		float HeSoLuong;
		int TienPhuCap;
	public:
		static float MucLuong;
	public:
		NhanVien();
		~NhanVien();
		void Nhap();
		void Xuat() const;
		float TinhLuong() const;		
};

NhanVien::NhanVien(){
	HeSoLuong=0;
	TienPhuCap=0;
}

NhanVien::~NhanVien(){
}

float NhanVien::MucLuong=2000;

void NhanVien::Nhap(){
	Nguoi::Nhap();
	cout<<"\n He so luong: ";
	cin>>HeSoLuong;
	cout<<"\n Nhap tien phu cap ";
	cin>>TienPhuCap;
}

void NhanVien::Xuat() const{
	Nguoi::Xuat();
	cout<<"\t"<<"-->luong cua nhan vien: "<<TinhLuong()<<endl;
}

float NhanVien::TinhLuong() const{
    return HeSoLuong * MucLuong + TienPhuCap;
}

float MinLuong(NhanVien*nv, int n){
	float min=nv[0].TinhLuong();
	for(int i=0; i<n; i++)
	{
		if(min>nv[i].TinhLuong()) min=nv[i].TinhLuong();
	}
	return min;
}

main(){
	int n;
	cout<<"\n Nhap vao so nhan vien: ";
	cin>>n;
	NhanVien *nv=new NhanVien[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\n Nhap thong tin cho nhan vien thu:"<<i;
		nv[i].Nhap();
	}
	cout<<"\n------------------------------------------------------------";
	for(int i=0; i<n; i++)
	   nv[i].Xuat();
	cout<<"\n Luong thap nhat ma doanh nghiep phai tra la:"<<MinLuong(nv, n);
}
