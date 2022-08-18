#include<iostream>
#include<stdio.h>
using namespace std;
class NGUOI{
	private:
		string maDinhDanh;
		string hoTen;
	public:
		NGUOI();
		void nhap();
		void xuat();
};
NGUOI::NGUOI(){
	maDinhDanh="";
	hoTen="";
}

void NGUOI::nhap(){
	cout<<"Nhap thong tin:";
	fflush(stdin);
	cout<<"\n Nhap ma dinh danh:";
	cin>>maDinhDanh;
	cout<<"\n Nhap ho ten: ";
	fflush(stdin);
	getline(cin,hoTen);
}

void NGUOI::xuat(){
	cout<<"Thong tin da nhap:";
	cout<<maDinhDanh<<"\t"<<hoTen<<endl;
}
main(){
	NGUOI nguoi1;
	nguoi1.nhap();
	nguoi1.xuat();
	int n;
	cin>>n;
	NGUOI *a=new NGUOI[n];
	for(int i=0; i<n; i++)
	    a[i].nhap();
	for(int i=0; i<n; i++)
	    a[i].xuat();
}
