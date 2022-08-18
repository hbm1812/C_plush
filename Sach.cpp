#include<iostream>
#include<string>

using namespace std;
class Sach{
	private: 
	  string masach,tensach,tacgia;
	  float tiencuoc;
	public:
		Sach();
		void nhap();
		void xuat();
};
Sach::Sach(){
	masach="";
	tensach="";
	tacgia="";
	tiencuoc=0;
}
void Sach::nhap(){
	fflush(stdin);
	cout<<"Nhap ma sach : ";
	getline(cin,masach);
	fflush(stdin);
	cout<<"Nhap ten sach : ";
	getline(cin,tensach);
	cout<<"Nhap tac gia: ";
	fflush(stdin);
    getline(cin,tacgia);
    cout<<"Nhap tien cuoc :";
    cin>>tiencuoc;
}
void Sach::xuat(){
	cout<<"Masach: "<<masach<<"		Ten sach: "<<tensach<<"		Tac gia: "<<tacgia<<"		tien cuoc: "<<tiencuoc<<endl;
}
int main(){
	Sach s;
	s.nhap();
	s.xuat(); 
	
	// thong tin n sach
	 int n;
	cout<<"Nhap so luong sach: ";
	cin>>n;
	Sach *a=new Sach[n];
	for(int i=0;i<n;i++)
	 {
	 	cout<<"Nhap thong tin sach "<<i+1<<endl;
	 	a[i].nhap();
	 }
	 cout<<"		Danh sach sach vua nhap: "<<endl;
	 for(int i=0;i<n;i++)
	  a[i].xuat(); 
};
