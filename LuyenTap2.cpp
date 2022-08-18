#include<iostream>
#include<stdio.h>
using namespace std;

class DaPhuongTien{
	private:
		string TenGoi;
		int GiaBan;
	public:
		DaPhuongTien(string TenGoi="", int GiaBan=0);
		~DaPhuongTien();
		void Nhap();
		void Xuat() const;
};

DaPhuongTien::DaPhuongTien(string TenGoi, int GiaBan){
	this->TenGoi=TenGoi;
	this->GiaBan=GiaBan;
}

DaPhuongTien::~DaPhuongTien(){
}

void DaPhuongTien::Nhap(){
	cout<<"\n Nhap ten goi:";
	fflush(stdin);
	getline(cin,TenGoi);
	cout<<"\n Nhap gia ban:";
	cin>>GiaBan;
}

void DaPhuongTien::Xuat() const{
	cout<<"\n ten goi:"<<TenGoi<<"\t"<<"Gia ban:"<<GiaBan<<endl;
}

class Video:public DaPhuongTien{
	private:
		string DaoDien;
		int ThoiLuong;
	public:
		Video(){
			DaoDien="";
			ThoiLuong=0;
		}
		~Video();
		friend void operator>>(istream &is, Video &s){
			s.Nhap();
			cout<<"\n Nhap dao dien:";
			fflush(stdin);
			getline(is, s.DaoDien);
			cout<<"\n Nhap thoi luong:";
			is>>s.ThoiLuong;
		}
		friend void operator<<(ostream &os, Video &s){
			s.Xuat();
			os<<s.DaoDien<<"\t"<<s.ThoiLuong<<endl;
		}
		bool KiemTra (string DaoDien_SoSanh) const{
		if(DaoDien==DaoDien_SoSanh)
		    return true;
		return false;
		}	
};
Video::~Video(){
}

main(){
	DaPhuongTien d("Phim ABC",90);
    d.Nhap();
    cout<<"\n Hien Thi thong tin";
    d.Xuat();
    int n;
    cout<<"\n Nhap n video:";
    cin>>n;
    Video *a=new Video[n];
    cout<<"\n Nhap thong tin video";
    for(int i=0; i<n; i++)
       cin>>a[i];
    cout<<"\n Hien thi thong tin";
    for(int i=0; i<n; i++)
        cout<<a[i];
    for(int i=0; i<n; i++)
       if(a[i].KiemTra("Nguyen Quang Dung")==true)
         {
         	cout<<"\n Phim Dao dien: ";
         	cout<<a[i];
		 }
}
