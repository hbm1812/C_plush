#include<iostream>
using namespace std;
class SV{
	private:
		string masv;
		string hoten;
	public:
		SV();
		~SV();
		void nhap();
		void hienthi();
};

//xay dung lop ke thua
class SVCNPM:public SV{
	private:
		float dtb;
		public:
			SVCNPM();
			~SVCNPM();
			void nhap();
			void hienthi();
			friend bool operator<(SVCNPM &a, SVCNPM &b){
				if(a.dtb<b.dtb) return true;
				return false;
			}
};

SV::SV(){
	masv="";
	hoten="";
}

SV::~SV(){
	cout<<"\n Doi tuong da duoc huy!";
}

void SV::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma sinh vien: ";
	getline(cin,masv);
	fflush(stdin);
	cout<<"\n Nhap ho ten sinh vien: ";
	getline(cin,hoten);
	
}

void SV::hienthi(){
	cout<<"\n Ma sinh vien: "<<masv<<"\t"<<" Ho ten sinh vien:"<<hoten<<"\t";
}
//ke  thua ham khoi tao
SVCNPM::SVCNPM():SV(){
	dtb=0;
}

void SVCNPM::nhap(){
	SV::nhap();
	cout<<" Nhap diem trung binh:";
	cin>>dtb;
}

void SVCNPM::hienthi(){
	SV::hienthi();
	cout<<dtb<<endl;
}

SVCNPM::~SVCNPM(){
	cout<<"\n Huy bo doi tuong";
}

void sapxep(SVCNPM *a, int n){
	SVCNPM t;
	for(int i=0; i<n; i++)
	    for(int j=i+1; j<n; j++)
	    if(a[i]<a[j]){
	    	t=a[i];
	    	a[i]=a[j];
	    	a[j]=t;
		}
}

main(){
	SV a;
	cout<<" Nhap thong tin cho 1 sinh vien: ";
	a.nhap();
	cout<<"\n In thong tin";
	a.hienthi();
	
	int n;
	cout<<"\n Nhap so sv chuyen nganh CNPM: ";
	cin>>n;
	SVCNPM *s=new SVCNPM[n];
	for(int i=0; i<n; i++)
	  s[i].nhap();
	for(int i=0; i<n; i++)
	   s[i].hienthi();
	
	cout<<"\n Danh sach sau khi sap xep theo diem la: ";
	sapxep(s, n);
	for(int i=0; i<n; i++)
	   s[i].hienthi();
}
