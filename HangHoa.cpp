#include<iostream>
#include<string>
using namespace std;
class HANGHOA{
    private:
		string maHang;
		string tenHang;
		int soLuong;
	public:
		HANGHOA();
		void nhap();
		void xuat();
};
void HANGHOA::HANGHOA()
{
	maHang="";
	tenHang="";
	soLuong=0;
}
void HANGHOA::nhap(){
    fflush(stdin);
    cout<<"\nNhap ma hang hoa: ";
    getline(cin,maHang);
    fflush(stdin);
    cout<<"\nNhap ten hang hoa: ";
    getline(cin,tenHang);
    cout<<"\nNhap so luong: ";
    cin>>soLuong;
}


void HANGHOA::xuat()
{
    cout<<"\nHien thi thong tin: ";
    cout<<maHang<<"\t"<<tenHang<<"\t"<<soLuong;
}


main()
{

    HANGHOA h;
    h.nhap();
    h.xuat();
    int n;
    cout<<"Nhap n = ";cin>>n;
    HANGHOA *hh= new HANGHOA[n];
    for(int i=0;i<n;i++)
     {
      cout<<"Nhap thong tin hang hoa thu: "<<i+1<<"\n";
      hh[i].nhap();
     }


}
