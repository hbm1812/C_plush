#include<iostream>
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
        void nhap();
	    void xuat() const;

};

Nguoi::Nguoi(){
	HoTen="";
	MaDinhDanh="";
	NamSinh=0;
}

Nguoi::~Nguoi(){
}

void Nguoi::nhap(){
	fflush(stdin);
	cout<<"\n Ho ten: ";
	getline(cin,HoTen);
	fflush(stdin);
	cout<<"\n Nhap ma dinh danh: ";
	getline(cin,MaDinhDanh);
	cout<<"\n Nhap nam sinh: ";
	cin>>NamSinh;
}

void Nguoi::xuat() const{
	cout<<"\n --->Ho ten: "<<HoTen<<"\t"<<"Ma dinh danh: "<<MaDinhDanh<<"\t"<<" nam sinh: "<<NamSinh;
}


class Nhanvien:public Nguoi{
	private:
		float HeSoLuong;
		int TienPhuCap;

    public:       
		static float MucLuong;


    public:
        Nhanvien();
       ~Nhanvien();
        void nhap();
        void xuat() const;
        float TinhLuong() const;
};

Nhanvien::Nhanvien():Nguoi(){
	HeSoLuong=0;
	TienPhuCap=0;
}

Nhanvien::~Nhanvien(){
}


float Nhanvien::MucLuong=2000;

void Nhanvien::nhap(){
	Nguoi::nhap();
	cout<<"\n He so luong: ";
	cin>>HeSoLuong;
	cout<<"\n Nhap tien phu cap ";
	cin>>TienPhuCap;
}

void Nhanvien::xuat() const{
	Nguoi::xuat();
	cout<<"\t"<<"-->luong cua nhan vien: "<<TinhLuong()<<endl;
}

float Nhanvien::TinhLuong() const{
	 return HeSoLuong * MucLuong + TienPhuCap;

}

float minluong(Nhanvien*nv, int n){
	float min=nv[0].TinhLuong();
	for(int i=0; i<n; i++)
	{
		if(min>nv[i].TinhLuong()) min=nv[i].TinhLuong();
	}
	return min;
}



main(){
	int n;
	cout<<"\n Nhap so nhan vien: ";
	cin>>n;
	Nhanvien *nv=new Nhanvien[n];
	for(int i=0; i<n; i++)
	  {
	  	cout<<"\n -->Nhap thong tin cho nhan vien thu: "<<i;
	  	nv[i].nhap();
	  }
	cout<<"\n------------------------------------------------------------";
	for(int i=0; i<n; i++)
	   nv[i].xuat();
	   
	cout<<"\n Luong thap nhat ma doanh nghiep phai tra la:"<<minluong(nv, n);
	
}
