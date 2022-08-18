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
       		void nhap(){
       			cout << "\n Nhap ma san pham: ";
       			cin >> masp;
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
			float tinhTien(){
				return sl*dg;
			}
};
main(){
	sanPham sp;
	sp.nhap();
	cout << "\n In thong tin cua san pham: ";
	sp.hienThi();
	cout << "\n Tien cua san pham la: " << sp.tinhTien();
	
}
