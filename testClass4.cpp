#include<iostream>
#include<stdio.h>
using namespace std;
class PhuongTienGiaoThong{
	private:
		string hangSX;
		string ten;
		float vanToc;
	public:
		PhuongTienGiaoThong();
		void nhap();
		void xuat();
};
PhuongTienGiaoThong::PhuongTienGiaoThong(){
	hangSX="";
	ten="";
	vanToc=0;
}

void PhuongTienGiaoThong::nhap(){
	fflush(stdin);
	cout<<"Nhap hang san xuat:";
	getline(cin,hangSX);
	fflush(stdin);
	cout<<"Nhap ten:";
	getline(cin,ten);
	cout<<"Van toc:";
	cin>>vanToc;
}

void PhuongTienGiaoThong::xuat(){
	cout<<"\n In thong tin \n";
	cout<<hangSX<<"\t"<<ten<<"\t"<<vanToc;
}
main(){
	PhuongTienGiaoThong p;
	p.nhap();
	p.xuat();
	cout<<"\nNhap so phuong tien: ";
	int n;
	cin>>n;
	PhuongTienGiaoThong *a=new PhuongTienGiaoThong[n];
	for(int i=0; i<n; i++)
	    a[i].nhap();
	for(int i=0; i<n; i++)
	    a[i].xuat();
}
