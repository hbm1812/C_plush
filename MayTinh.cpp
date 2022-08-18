#include<iostream>
#include<stdio.h>
using namespace std;
class MAYTINH{
	private:
		string maMay;
		string tenMay;
		int giaBanNiemYet;
		float tiLeKhuyenMai;
	public:
		MAYTINH();
		void nhap();
		void xuat();
		int giaBanThucTe();
};
MAYTINH::MAYTINH(){
	maMay="";
	tenMay="";
	giaBanNiemYet=0;
	tiLeKhuyenMai=0;
}

void MAYTINH::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma may tinh:";
	cin>>maMay;
	cout<<"\n Nhap ten may tinh: ";
	fflush(stdin);
	getline(cin,tenMay);
	cout<<"\n Nhap gia ban niem yet: ";
	cin>>giaBanNiemYet;
	cout<<"\n Nhap ti le khuyen mai: ";
	cin>>tiLeKhuyenMai;
}
int MAYTINH::giaBanThucTe(){
	float giaBanThucTe;
	return giaBanThucTe=giaBanNiemYet*tiLeKhuyenMai;
}

void MAYTINH::xuat(){
	cout<<"Thong tin da nhap:";
	cout<<maMay<<"\t"<<tenMay<<"\t"<<giaBanThucTe<<endl;
}

main(){
	MAYTINH mt;
	mt.nhap();
	mt.xuat();
	int n;
	cin>>n;
	MAYTINH *a=new MAYTINH[n];
	for(int i=0; i<n; i++)
	    a[i].nhap();
	for(int i=0; i<n; i++)
	    a[i].xuat();
}
