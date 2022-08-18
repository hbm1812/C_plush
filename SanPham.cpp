#include"iostream"
using namespace std;

class SANPHAM{
	private:
		string ma;
		string ten;
		float gia;
		static float km;
	public:
		SANPHAM();
		void nhap();
		void xuat();
		float giabanthucte();
		
};

SANPHAM::SANPHAM(){
	ma="";
	ten="";
	gia=0;
}

void SANPHAM::nhap(){
	fflush(stdin);
	cout<<"\nNhap ma san pham: ";
	getline(cin,ma);
	fflush(stdin);
	cout<<"\nNhap ten san pham: ";
	getline(cin,ten);
	cout<<"\nNhap gia niem yet: ";
	cin>>gia;
}

void SANPHAM::xuat(){
	cout<<"\n\tMa san pham:"<<ma<<"\tTen san pham:"<<ten<<"\tGia ban thuc te:"<<giabanthucte()<<endl;
}

float SANPHAM::km=0.2;

float SANPHAM::giabanthucte(){
	return gia-gia*km;
}

float minGia(SANPHAM *sp, int n){
	float min=sp[0].giabanthucte();
	for(int i=0; i<n; i++)
		if(min>sp[i].giabanthucte()) min=sp[i].giabanthucte();
	return min;
}

main(){
	SANPHAM *sp;
	int n;
	cout<<"\nNhap so san pham: ";
	cin>>n;
	sp= new SANPHAM[n];
	cout<<"\nNhap thong tin cho tung may: ";
	for(int i=0; i<n; i++)
	   {
	   cout<<"\n--->Thong tin cua may thu "<<i<<" la: ";
	   sp[i].nhap();
	   }
	cout<<"\n------->In danh sach: ";
	for(int i=0; i<n; i++)
	   sp[i].xuat();
	   
	cout<<"\n------->Danh sach san pham co gia ban thuc te nho nhat la: ";
	for(int i=0; i<n; i++)
	   if(minGia(sp, n)==sp[i].giabanthucte()) sp[i].xuat();
}
