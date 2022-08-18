#include <iostream>
using namespace std;

class MONHOC {
	private:
		string mamh;
		string tenmh;
		int sotin;

	public:
		MONHOC(){
			mamh = "";
			tenmh = "";
			sotin=0;
		}
		
		void nhap(){
			fflush(stdin);
			cout<<"Nhap ma mon hoc :";
			getline(cin,mamh);
			fflush(stdin);
			cout<<"Nhap ten mon hoc :";
			getline(cin,tenmh);
			cout<<"Nhap so tin chi :";
			cin>>sotin;
		}
		
		void xuat(){
			cout<<"Ma mon hoc :"<<mamh<<"\tTen mon hoc :"<<tenmh<<"\tSo tin chi :"<<sotin<<"\tSo tiet :"<<soTiet()<<endl;
		}
		
		int soTiet(){
			return sotin*15;
		}
		
		bool operator < (MONHOC &a){
			return this->soTiet() < a.soTiet();
		};
		
		
};


int main(){
	MONHOC *mh,tg;
	int n;
	do{
		cout<<"\nNhap so mon hoc:";
		cout<<"\nNhap n=";
		cin>>n;
	}while(n<=0);
	
	mh= new MONHOC[n] ;
	
	for(int i=0;i<n;i++){
		cout<<"\nNhap thong tin cho mon hoc thu: "<<i+1<<endl;
		mh[i].nhap();
	}
	
	for(int i=0;i<n;i++){
		cout<<"\nThong tin mon hoc thu: "<<i+1<<endl;
		mh[i].xuat();
	}
	
	int x;
	do{
		cout<<"\nNhap x=";
		cin>>x;
	}while(x<=0);
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	    if(mh[i]<mh[j])
		{
		tg=mh[i];
		mh[i]=mh[j];
		mh[j]=tg;
     	}
	
	cout <<"\nMon hoc co so tiet nhieu nhat :";
	for(int i=0;i<x;i++)
		mh[i].xuat();
	
}
