#include<iostream>
#include<stdio.h>
using namespace std;

class GiangVien{
	private:
		string MaGiangVien, TenGiangVien;
	protected:
		string BoMon;
	public:
		GiangVien();
		~GiangVien();
		void Nhap();
		void Xuat() const;
};

GiangVien::GiangVien(){
	MaGiangVien="";
	TenGiangVien="";
	BoMon="";
}
GiangVien::~GiangVien(){
}

void GiangVien::Nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma giang vien:";
	getline(cin,MaGiangVien);
	fflush(stdin);
	cout<<"\n Nhap ten giang vien:";
	getline(cin,TenGiangVien);
	fflush(stdin);
	cout<<"\n Nhap bo mon:";
	getline(cin,BoMon);
}

void GiangVien::Xuat() const{
	cout<<MaGiangVien<<"\t"<<TenGiangVien<<"\t"<<BoMon<<endl;
}

class GiangDay:public GiangVien{
	private:
		string MaMon, MaLop;
	    int SoTinChi;
	public:
		GiangDay(){
		   MaMon="";
		   MaLop="";
		   SoTinChi=0;
		}
		~GiangDay(){
		}
		friend void operator>> (istream&is, GiangDay &s){
			s.Nhap();
			fflush(stdin);
			cout<<"\n Nhap ma mon";
			getline(is,s.MaMon);
			fflush(stdin);
			cout<<"\n Nhap ma lop";
			getline(is,s.MaLop);
			cout<<"\n Nhap so tin chi";
			is>>s.SoTinChi;			
		}
		friend void operator<< (ostream&os, const GiangDay &s){
			s.Xuat();
			os<<s.MaMon<<"\t"<<s.MaLop<<"\t"<<s.SoTinChi<<endl;
		}
		bool KiemTra (string BoMon_SoSanh) const{
			if(BoMon==BoMon_SoSanh)
			   return true;
		return false;
		}
};


main(){
	GiangVien gv;
	cout<<"\n Nhap thong tin:";
	gv.Nhap();
	cout<<"\n Hien thi thong tin:";
	gv.Xuat();
	int n;
	cout<<"\n Nhap n giang vien:";
	cin>>n;
	GiangDay *a=new GiangDay[n];
	cout<<"\n Nhap thong tin Giang day:";
	for(int i=0; i<n; i++)
	   cin>>a[i];
	cout<<"\n Hien Thi thong tin Giang day:";	
	for(int i=0; i<n; i++)
	   cout<<a[i];
	for(int i=0; i<n; i++)
	  if(a[i].KiemTra("Hoang Binh Minh")==true)
	    {
	    	cout<<"\n Giang vien:";
	    	cout<<a[i];
		}
	  
	
	
}

