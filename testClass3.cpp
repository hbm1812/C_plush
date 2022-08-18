#include<iostream>
#include<stdio.h>
using namespace std;
class SV{
	private:
		string maSV;
		string hoten;
	public:
		SV(){
			maSV="";
			hoten="";				
		}
		
		//Ham Huy
		~SV(){
		
		}
		void nhap(){
			cout<<"\n Nhap thong tin sinh vien: ";
			fflush(stdin);
			cout<<"\n Ho ten sinh vien: ";
			getline(cin,hoten);
			cout<<" Ma sinh vien: ";
			cin>>maSV;
		}
		void xuat();
};

void SV::xuat(){
	cout<<" Thong tin sinh vien vua nhap la: "<<hoten<<"\t"<<maSV<<endl;
}
main(){
	SV s;
	s.nhap();
	s.xuat();
	return 0;
}
