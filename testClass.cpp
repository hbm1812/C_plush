#include<iostream>
#include"string.h"
#include"cmath"
#include"conio.h"
using namespace std;

class thiSinh{
	   private:
	   	        string sbd;
	   	        string hoTen;
	   	        float toan, ly, hoa;
	   	public:
	   		    void nhap(){
	   		    	cout << "\n Nhap so bao danh: ";
	   		    	getline(cin,sbd);
					cout << "\n Nhap ho ten: ";
	   		    	getline(cin,hoTen);
	   		        cout << "\n Nhap diem toan: ";
	   		    	cin >> toan;
	   		    	cout << "\n Nhap diem ly: ";
	   		    	cin >> ly;
	   		        cout << "\n Nhap diem hoa: ";
	   		    	cin >> hoa;
				   };
	   		    hienThi(){
	   		    	cout << sbd << "\t" << hoTen << "\t" << toan << "\t" << ly << "\t" << "hoa" << endl;
				   }
	   		    float tinhTongDiem(){
	   		    	
	   		    	return toan+ly+hoa;
				   }
};

main(){
	thiSinh ts;
	ts.nhap();
	cout << "\n In thong tin cua thi sinh: ";
	ts.hienThi();
	cout << "\n Tong diem cua thi sinh la: " << ts.tinhTongDiem();
	


}

