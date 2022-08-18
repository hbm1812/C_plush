#include<iostream>
using namespace std;

class tailieu{
	private:
		string matailieu;
		string tentailieu;
	public:
		tailieu();
		void nhap();
		void hienthi();
};

class muontra:public tailieu{
	private:
		string madocgia;
		int soluong;
		static float phicuocmuontra;
	public:
		muontra();
		void nhap();
		void hienthi();
		float tinhsotien();
		friend bool operator>(muontra &a, muontra &b){
			if(a.tinhsotien()>b.tinhsotien()) return true;
			return false;
		}
		
};

tailieu::tailieu(){
	matailieu="";
	tentailieu="";
}

void tailieu::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma tai lieu: ";
	getline(cin,matailieu);
	fflush(stdin);
	cout<<"\n Nhap ten tai lieu: ";
	getline(cin,tentailieu);
}

void tailieu::hienthi(){
	cout<<"\n ---->Ma tai lieu: "<<matailieu<<"\t"<<" Ten tai lieu: "<<tentailieu;
}

muontra::muontra():tailieu(){
	madocgia="";
	soluong=0;	
}

void muontra::nhap(){
	tailieu::nhap();
	fflush(stdin);
	cout<<"\n Nhap ma doc gia: ";
	getline(cin,madocgia);
	cout<<"\n Nhap so luong: ";
	cin>>soluong;
}

void muontra::hienthi(){
	tailieu::hienthi();
	cout<<"\t"<<" Ma doc gia: "<<madocgia<<"\t"<<"So luong: "<<soluong;
}

float muontra::phicuocmuontra=10;

float muontra::tinhsotien(){
	return soluong*phicuocmuontra;
}

float maxtien(muontra* mt, int n){
	float max= mt[0].tinhsotien();
	for(int i=0; i<n; i++)
	   if(max<mt[i].tinhsotien())max=mt[i].tinhsotien();
	return max;
}
main(){
	tailieu a;
	cout<<"\n Nhap thong tin cho mot tai lieu: ";
	a.nhap();
	cout<<"\n in thong tin: ";
	a.hienthi();
	int n;
	cout<<"\n Nhap so doi tuong muon tra: ";
	cin>>n;
	muontra *mt=new muontra[n];
	for(int i=0; i<n; i++)
		mt[i].nhap();
	for(int i=0; i<n; i++)
	{
		mt[i].hienthi();
		cout<<"\t So tien cuoc: "<<mt->tinhsotien();
    }
    cout<<"\n Danh sach doc gia co tien cuoc nhieu nhat la: ";
    for(int i=0; i<n; i++)
       if(maxtien(mt, n)==mt[i].tinhsotien())mt[i].hienthi();

	
	
}
