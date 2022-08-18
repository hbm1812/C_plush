#include<iostream>
using namespace std;
class MONHOC{
	private:
		string ma;
		string ten;
	    int sotin;

	public:
	    MONHOC();
		void nhap();
		void xuat();
		friend int operator < (MONHOC &a, MONHOC &b){
			return a.sotin<b.sotin;
		}
};
 MONHOC::MONHOC(){
	ma="";
	ten="";
	sotin=0;
}
void MONHOC::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma mon hoc: ";getline(cin,ma);
	fflush(stdin);
	cout<<"\n Nhap ten mon hoc: ";getline(cin,ten);
	cout<<"\n Nhap sotin: ";cin>>sotin;
}
void MONHOC::xuat(){
	cout<<"\n"<<ma<<"\t"<<ten<<"\t"<<sotin<<"\t";
}
int MONHOC::sotiet

main(){
	MONHOC *mh;
	int n;
	cout<<"\nNhap so mon hoc: ";
	cin>>n;
	mh=new MONHOC[n];
	cout<<"\nNhap thong tin cho tung mon hoc";
	for(int i=0; i<n; i++) 
	       mh[i].nhap();
	cout<<"\nIn danh sach";
	for(int i=0; i<n; i++)
	       mh[i].xuat();
	       int x;
	       cout<<"Nhap so mon hoc co nhieu tiet nhat: ";
	       cin>>x;
	       MONHOC t;
	       for(int i=0; i<n-1; i++)
	          for(int j=i+1; j<n; j++)
	            if(a[i].sotiet()<a[j].sotiet()){
	            	t=a[i];
	            	a[i]=a[j];
	            	a[j]=t;
	            }
	        for(int i=0; i<x;i++){
	        	a[i].xuat();
	        	cout<<"so tiet hoc: "<<
			}




	
}
