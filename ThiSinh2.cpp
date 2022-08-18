#include<iostream>
#include<stdio.h>
using namespace std;
class ThiSinh{
	private:
		string SoBaoDanh, HoTen;
	protected:
		float DiemUuTien;
	public:
		ThiSinh(string SoBaoDanh="", string HoTen="", float DiemUuTien=0);
		~ThiSinh();
		void nhap();
		void xuat() const;
		
};
ThiSinh::ThiSinh(string SoBaoDanh, string Hoten, float DiemUuTien){
	this->SoBaoDanh;
	this->HoTen;
	this->DiemUuTien;
}

ThiSinh::~ThiSinh(){
}

void ThiSinh::nhap(){
	fflush(stdin);
	cout << "\n Nhap so bao danh: ";
	getline(cin,SoBaoDanh);
	fflush(stdin);
	cout << "\n Nhap ho ten: ";
	getline(cin,HoTen);
	cout << "\n Nhap diem uu tien: ";
	cin >> DiemUuTien;
}

void ThiSinh::xuat() const{
	cout << "\n --->So bao Danh: "<<SoBaoDanh << "\t" <<"Ho ten: " <<HoTen << "\t" <<"Diem uu tien: "<<DiemUuTien;
}

class ThiSinhKhoiC:public ThiSinh{
	private:
		float DiemVan, DiemSu, DiemDia;
	public:
			ThiSinhKhoiC();
			~ThiSinhKhoiC();
			float TongDiem() const;
			//Dung de nhap(isstream chua toan tu nhap, dung friend vi 2 doi tuong truyen vao va them this nhung khi ra ngoai lai khong co this)
			friend void operator>>(istream &is, ThiSinhKhoiC &s);
			//Dung de xuat(osstream chua toan tu xuat)	
			friend void operator<<(ostream &os, ThiSinhKhoiC &s);
};
ThiSinhKhoiC::ThiSinhKhoiC():ThiSinh(){
	DiemVan=0;
	DiemSu=0;
	DiemDia=0;
}

ThiSinhKhoiC::~ThiSinhKhoiC(){
}

float ThiSinhKhoiC::TongDiem() const{
       return DiemVan+DiemSu+DiemDia+DiemUuTien;
}

void operator>>(istream &is, ThiSinhKhoiC &s){
    s.nhap();
    cout<<"\n Nhap diem van, su, dia:";
    is>>s.DiemVan>>s.DiemSu>>s.DiemDia;
}

void operator<<(ostream &os, ThiSinhKhoiC &s){
	s.xuat();
	os<<"\t"<<"Diem van:"<<s.DiemVan<<"\t"<<"Diem su:"<<s.DiemSu<<"\t"<<"Diem dia:"<<s.DiemDia<<"\t"<<"-> Tong Diem:"<<s.TongDiem()<<endl;
}

float max_tongdiem(ThiSinhKhoiC *a, int n){
	float max=a[0].TongDiem();
	for(int i=0; i<n; i++)
	    if(max<a[i].TongDiem()) max=a[i].TongDiem();
	return max;
}

main(){
	int n;
	ThiSinh t("M12", "Hoa Hong", 2);
	t.xuat();
	cout<<"\n Nhap so sinh vien khoi c:";
	cin>>n;
	ThiSinhKhoiC *a=new ThiSinhKhoiC[n];
	for(int i=0; i<n; i++)
	    cin>>a[i];
	cout<<"\n In thong tin:";
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<"\n Thi sinh co diem cao nhat: "<<max_tongdiem(a,n);
}
