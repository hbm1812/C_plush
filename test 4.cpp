#include<iostream>
#include<stdio.h>
using namespace std;
class sanPham{
        private:
       	    string masp;
       	    string tensp;
       	    int sl;
       	    float dg;
       	public:
       		int getSL(){
       			return sl;
			   }
			int getDG(){
       			return dg;
			   }
			   void nhap(){
       			fflush (stdin);
				cout << "\n Nhap ma san pham: ";
       			getline(cin,masp);
       			fflush (stdin);
       		    cout << "\n Nhap ten san pham: ";
       			getline(cin,tensp);
       			cout << "\n Nhap so luong: ";
       			cin >> sl;
       			cout << "\n Nhap don gia: ";
       			cin >> dg;
			   };
			hienThi(){
				cout << masp << "\t" << tensp << "\t" << sl << "\t" << dg << endl;
			}

};
main(){
	sanPham sp;
	sp.nhap();
	cout << "\n In thong tin cua san pham: ";
	sp.hienThi();
	cout << "\n Tien cua san pham la: " << sp.getSL()*sp.getDG();
	int n;
	cout << "\n Nhap so san pham: "; cin >> n;
	sanPham *sp = new sanPham[n];
	cout << "\n Nhap thong tin cho tung san pham: ";
	for(int i=0; i<n; i++)
	      sp[i].nhap();
	cout << "\n Danh sach san pham vua nhap: ";
	for(int i=0; i<n; i++)
	     sp[i].hienThi();
	
}
