#include<iostream>
using namespace std;
class mydate{
	private:
		int day, month, year;
	public:
		mydate(int dd=1, int mm=1, int yy=1000){
			day=dd;
			month=mm;
			year=yy;
		}
		
	void nhap(){
		cout<<"\n Nhap ngay: ";cin>>day;
		cout<<"\n Nhap thang: ";cin>>month;
		cout<<"\n Nhap nam: ";cin>>year;
	}
	
	void hienthi(){
		cout<<day<<"-"<<month<<"-"<<year;
	}
	
	int operator>=(mydate&a){
		if(year>a.year) return 1;
		if((year==a.year) && (month>a.month))return 1;
		if((year==a.year)&&(month=a.month)&&(day>a.day)) return 1;
		else return 0;
	}
	
};


main(){
	mydate *md;
	int n;
	cout<<"\nNhap so luong ngay: ";
	cin>>n;
	md= new mydate[n];
	for(int i=0; i<n; i++)
	 {
	   cout<<"\nNhap ngay thu: "<<i;
	   md->nhap();
     }
}

