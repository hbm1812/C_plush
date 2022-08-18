#include"iostream"

using namespace std;
class MonHoc{
	private:
		string maMH, tenMH;
		float dtb;
		int soTC;
	public:
		MonHoc();
		~MonHoc();
		void nhap();
		void xuat();
		int tinchi(){
			return soTC;
		}
		float diem(){
			return dtb;
		}
};

MonHoc::MonHoc(){
	maMH="";tenMH="";
	dtb=0;soTC=0;
}

MonHoc::~MonHoc(){
}

void MonHoc::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma mon hoc:";
	getline(cin,maMH);
	fflush(stdin);
	cout<<"\n Nhap ten mon hoc:";
	getline(cin,tenMH);
	cout<<"\n Nhap diem:";
	cin>>dtb;
	cout<<"\n So tin chi:";
	cin>>soTC;
}

void MonHoc::xuat(){
	cout<<"\n\t-->> Ma mon hoc: "<<maMH<<"\t"<<"Ten mon hoc:"<<tenMH<<"\t"<<"diem:"<<dtb<<"\t"<<"So tin chi:"<<soTC;
}

class SinhVien{
	private:
		string masv,tensv;
		int somh;
		MonHoc arr[100];
	public:
		SinhVien();
		~SinhVien();
		void nhap();
		void xuat();
		float diemtk();
};

SinhVien::SinhVien(){
	masv="";
	tensv="";
	somh=0;
	arr[somh];
}

SinhVien::~SinhVien(){
}

void SinhVien::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma sinh vien:";
	getline(cin,masv);
	fflush(stdin);
	cout<<"\n Nhap ten sinh vien:";
	getline(cin,tensv);
	cout<<"\n Nhap so mon hoc:";
	cin>>somh;
	for(int i=0; i<somh; i++)
	     arr[i].nhap();
	
}

void SinhVien::xuat(){
	cout<<"\n----------> Ma sinh vien: "<<masv<<"\t"<<"Ten sinh vien:"<<tensv<<"\t"<<"so mon hoc:"<<somh<<" Diem tong ket:"<<diemtk()<<endl;
	for(int i=0; i<somh; i++)
		 arr[i].xuat();
}

float SinhVien::diemtk(){
	float tong=0;
	int tongtc=0;
	for(int i=0; i<somh; i++)
	{
		tong=tong+arr[i].diem()*arr[i].tinchi();
		tongtc=tongtc+arr[i].tinchi();
	}
	return tong/tongtc;
}

void hocbong(SinhVien *a, int n){
    int dem=0;
	for(int i=0; i<n; i++)
	   if(a[i].diemtk()>=8.5)
	        {
	         a[i].xuat();	
	         dem++;
			 }
	if(dem==0) cout<<"\n Khong co sinh vien nao duoc hoc bong!";
}

main(){
	MonHoc m;
	m.nhap();
	cout<<"\n In thong tin: ";
	m.xuat();
	cout<<"\n-----------------------------------------------------------------------";
	int n;
	cout<<"\n Nhap so sinh vien: ";
	cin>>n;
	SinhVien *a=new SinhVien[n];
	for(int i=0; i<n; i++)
	     a[i].nhap();
	for(int i=0; i<n; i++)
	    {
		 a[i].xuat();
	hocbong(a,n);
}
}
