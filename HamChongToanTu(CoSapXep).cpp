#include<iostream>
using namespace std;
class MAYTINH{
	private:
		string ma;
		string ten;
		float gia;
		static float km;
	public:
		MAYTINH();
		void nhap();
		void xuat();
		float giaban();
		friend int operator < (MAYTINH &a, MAYTINH &b){
			return a.giaban()<b.giaban();
		}
};
 MAYTINH::MAYTINH(){
	ma="";
	ten="";
	gia=0;
}
void MAYTINH::nhap(){
	fflush(stdin);
	cout<<"\n Nhap ma: ";getline(cin,ma);
	fflush(stdin);
	cout<<"\n Nhap ten: ";getline(cin,ten);
	cout<<"\n Nhap gia: ";cin>>gia;
}
void MAYTINH::xuat(){
	cout<<"\n"<<ma<<"\t"<<ten<<"\t"<<gia<<"\t";
}
float MAYTINH::km=0.1;
float MAYTINH::giaban(){
	return gia-gia*km;
}
float minGia(MAYTINH *mt, int n){
	float min=mt[0].giaban();
	for(int i=0; i<n; i++)
	   if(min>mt[i].giaban()) min=mt[i].giaban();
	return min;
}
main(){
	MAYTINH *mt;
	int n;
	cout<<"\nNhap so may tinh: ";
	cin>>n;
	mt=new MAYTINH[n];
	cout<<"\nNhap thong tin cho tung may";
	for(int i=0; i<n; i++) 
	       mt[i].nhap();
	cout<<"\nIn danh sach";
	for(int i=0; i<n; i++)
	       mt[i].xuat();

    cout<<"\nIn danh sach co gia ban thuc te";	
	for(int i=0; i<n; i++)
	    {  mt[i].xuat();
		   cout<<"\n->Gia ban thuc te: "<<mt[i].giaban();
	    }
	
	cout<<"\n Danh sach may tinh co gia nho nhat: ";
	for(int i=0; i<n; i++)
	   if(minGia(mt, n)==mt[i].giaban())  
	      {  
	        mt[i].xuat();
		    cout<<"\n->Gia ban thuc te: "<<mt[i].giaban();
	      }
	
	cout<<"\n _________Sap xep theo thu tu giam dan cua gia ban:";
	MAYTINH tmp;
	for(int i=0; i<n-1; i++)
	  for(int j=i+1; j<n; j++)
	       if(mt[i]<mt[j])
	       {
	       	tmp=mt[i];
	       	mt[i]=mt[j];
	       	mt[j]=tmp;
		   }
	
	for(int i=0; i<n; i++)
	    {  mt[i].xuat();
		   cout<<"\n->Gia ban thuc te: "<<mt[i].giaban();
	    }
}
