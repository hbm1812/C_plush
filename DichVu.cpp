#include<iostream>
using namespace std;
class DichVu{
	private:
		string madv;
		string tendv;
		float phidv;
	public:
		DichVu();
		~DichVu();
		void nhap();
		void xuat();
		float Phidv(){
			return phidv;
		}
};

DichVu::DichVu(){
	madv="";
	tendv="";
	phidv=0;
}

DichVu::~DichVu(){
}

void DichVu::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma dich vu:";
	getline(cin,madv);
	fflush(stdin);
	cout<<"\n Nhap ten dich vu:";
	getline(cin,tendv);
	cout<<"\n Nhap phi dv:";
	cin>>phidv;
}

void DichVu::xuat(){
    cout<<"\n\t-->> Ma dich vu: "<<madv<<"\t"<<"Ten dich vu: "<<tendv<<"\t"<<"phi dich vu: "<<phidv<<endl;
}

class KhachHang{
	private:
		string makh;
		string tenkh;
		int sldv;
		DichVu arr[100];
	public:
		KhachHang();
		~KhachHang();
		void nhap();
		void xuat();
		float tongtiendv();	
		float tinhtongtiendvall();
};


KhachHang::KhachHang(){
	makh="";
	tenkh="";
	sldv=0;
	arr[sldv];
}
KhachHang::~KhachHang(){
}

void KhachHang::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma khach hang:";
	getline(cin,makh);
	fflush(stdin);
	cout<<"\n Nhap ten khach hang:";
	getline(cin,tenkh);
	cout<<"\n Nhap so luong dich vu:";
	cin>>sldv;
	for(int i=0; i<sldv; i++)
	    arr[i].nhap();	
}

void KhachHang::xuat(){
    cout<<"\n------> Ma khach hang: "<<makh<<"\t"<<"Ten khach hang: "<<tenkh<<"\t"<<"so luong dich vu: "<<sldv<<"\t"<<"Tong tien phi dich vu:"<<tongtiendv();
	for(int i=0; i<sldv; i++)
	    arr[i].xuat();

}

float KhachHang::tongtiendv(){
	float tong=0;
	for(int i=0; i<sldv; i++){
		tong=tong+arr[i].Phidv();
	}
	return tong;
}

float tinhtongtiendvall(KhachHang *a, int n){
	float tongtien=0;
		for(int i=0; i<n; i++)
	  {
			tongtien=tongtien+a[i].tongtiendv();
		}
	return tongtien;
}



main(){
	DichVu dv;
	cout<<"\n Nhap thong tin cho mot dich vu: ";
	dv.nhap();
	cout<<"\ In thong tin dich vu da nhap: ";
	dv.xuat();
	cout<<"\n-----------------------------------------------------------------------";
	int n;
	cout<<"\n Nhap so khach hang: ";
	cin>>n;
	KhachHang *a=new KhachHang[n];
	for(int i=0; i<n; i++)
	     {
	     	cout<<"\n Nhap thong tin cho khach hang thu "<<i;
	     	a[i].nhap();
		 }
	cout<<"\n Hien thi thong tin:";
	for(int i=0; i<n; i++)
	{
		cout<<"\n Khach hang thu "<<i;
		 a[i].xuat();
	}
	cout<<"\n Tong tien dich vu cua tat ca khach hang la: "<<tinhtongtiendvall(a, n);

}


