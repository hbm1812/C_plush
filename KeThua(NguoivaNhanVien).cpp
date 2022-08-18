#include"iostream"
using namespace std;

class Nguoi{
	private:
		string hoten;
		string gioitinh;
		int namsinh;
	public:
		Nguoi();
		~Nguoi();
		void nhap();
		void hienthi();
		int Tuoi();
};

class Nhanvien:public Nguoi{
	private:
		int mucluong;
		float hsthamnien;
	public:
		Nhanvien();
		~Nhanvien();
		void nhap();
		void hienthi();
		int Tuoi();
		float luongdanghihuu();
		float luongchuanghihuu();
		friend bool operator>=(Nhanvien &a, Nhanvien &b){
			if(a.Tuoi()>=b.Tuoi()) return true;
			return false;
		}
		
};

Nguoi::Nguoi(){
	hoten="";
	gioitinh="";
	namsinh=0;
}

Nguoi::~Nguoi(){
}

void Nguoi::nhap(){
	cout<<"\n Nhap thong tin: ";
	fflush(stdin);
	cout<<"\n Ho ten: ";
	getline(cin,hoten);
	fflush(stdin);
	cout<<"\n Nhap gioi tinh: ";
	getline(cin,gioitinh);
	cout<<"\n Nhap nam sinh: ";
	cin>>namsinh;
}

void Nguoi::hienthi(){
	cout<<"\n Ho ten: "<<hoten<<"\t"<<"\n gioi tinh: "<<gioitinh<<"\t"<<" nam sinh: "<<namsinh;
}

int Nguoi::Tuoi(){
	return 2020-namsinh;

}



Nhanvien::Nhanvien():Nguoi(){
	mucluong=0;
	hsthamnien=0;	
}

Nhanvien::~Nhanvien(){
}

void Nhanvien::nhap(){
	Nguoi::nhap();
	cout<<"\n Nhap muc luong: ";
	cin>>mucluong;
	cout<<"\n Nhap he so tham nien: ";
	cin>>hsthamnien;
}

void Nhanvien::hienthi(){
	Nguoi::hienthi();
	cout<<"\t"<<"he so tham nien: "<<hsthamnien<<endl;
}

float Nhanvien::luongdanghihuu(){
	return 0.75*mucluong*hsthamnien;
}

float Nhanvien::luongchuanghihuu(){
	return mucluong*hsthamnien;
}


main(){
	Nguoi a;
	cout<<"\n Nhap thong tin cua mot nguoi: ";
	a.nhap();
	cout<<"\n Thong tin vua nhap: ";
	a.hienthi();
	
	int n;
	cout<<"\n Nhap so nhan vien: ";
	cin>>n;
	Nhanvien *ng=new Nhanvien[n];
		for(int i=0; i<n; i++)
	  ng[i].nhap();
	for(int i=0; i<n; i++)
	   {ng[i].hienthi();
	   cout<<"\t tuoi: "<<ng[i].Tuoi();
	   if(ng[i].Tuoi()<60) cout<<"\t Muc luong: "<<ng[i].luongchuanghihuu();
	   else cout<<"\t Muc luong: "<<ng[i].luongdanghihuu();
       }
    

    
}
