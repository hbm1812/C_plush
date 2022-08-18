#include<iostream>
#include<stdio.h>
using namespace std;

class ThiSinh{
	private:
		string SoBaoDanh, HoTen;
	protected:
	    float DiemUuTien;
	public:
	    ThiSinh();
		~ThiSinh();
		void Nhap();
		void Xuat() const;	
};

ThiSinh::ThiSinh(){
	SoBaoDanh="";
	HoTen="";
	DiemUuTien=0;
}

ThiSinh::~ThiSinh(){
}

void ThiSinh::Nhap(){
    fflush(stdin);
	cout<<"\n Nhap so bao danh:";
	getline(cin,SoBaoDanh);
	fflush(stdin);
	cout<<"\n Nhap ho ten:";
	getline(cin,HoTen);	
	cout<<"\n Nhap diem uu tien:";
	cin>>DiemUuTien;
}

void ThiSinh::Xuat() const{
	cout<<SoBaoDanh<<"\t"<<HoTen<<"\t"<<DiemUuTien<<endl;
}

class ThiSinhKhoiA:public ThiSinh{
	private:
		float DiemToan, DiemLy, DiemHoa;
	public:
		ThiSinhKhoiA();
		~ThiSinhKhoiA();
		void Nhap();
		void Xuat();
		void TongDiem() const{
			float tongdiem=0;
			tongdiem=DiemToan+DiemLy+DiemHoa;
		}
		bool XetTuyen(string tongdiem_SoSanh) const{
			if(tongdiem==tongdiem_SoSanh)			
			   return true;
		return false;
		}
};

ThiSinhKhoiA::ThiSinhKhoiA(){
	DiemToan=0;
	DiemLy=0;
	DiemHoa=0;
}
ThiSinhKhoiA::~ThiSinhKhoiA(){
}

void ThiSinhKhoiA::Nhap(){
	ThiSinh::Nhap();
	cout<<"\n Nhap diem toan:";
	cin>>DiemToan;
	cout<<"\n Nhap diem ly:";
	cin>>DiemLy;
	cout<<"\n Nhap diem hoa:";
	cin>>DiemHoa;	
}

void ThiSinhKhoiA::Xuat(){
	ThiSinh::Xuat();
	cout<<DiemToan<<"\t"<<DiemLy<<"\t"<<DiemHoa<<endl;
}





main(){
	ThiSinh ts;
	cout<<"\n Nhap thong tin cho thi sinh:";
	ts.Nhap();
	cout<<"\n Hien thi thong tin:";
	ts.Xuat();
	int n;
	cout<<"\n Nhap so thi sinh khoi A:";
	cin>>n;
	ThiSinhKhoiA *a=new ThiSinhKhoiA[n];
	cout<<"\n nhap thong tin:";
	for(int i=0; i<n; i++)
	   a[i].Nhap();
	for(int i=0; i<n; i++)
	 {
	 	cout<<"\n Thong tin sinh vien thu"<<i;
	    a[i].Xuat();
	   a[i].TongDiem();
      }
   	for(int i=0; i<n; i++)
	 
	   if(a[i].XetTuyen("24.25")==true)
	   {
	   	cout<<"\n Thi sinh trung tuyen:";
	   	cout<<a[i].Xuat();
	   }
    
	
}
