#include<iostream>

using namespace std;

class thiSinh{
	   private:
	   	    string sbd;
	   	    string hoTen;
	   	    	
	   	protected:
	   		float diemut;
		   public:
	   		thiSinh();
	   		void nhap();
	   		void hienthi();

};


class thisinhkhoiD:public thiSinh{
	private:
		float van, toan, anh;
	public:
		thisinhkhoiD();
		void nhap();
		void hienthi();
		float tinhtongdiem();
		friend bool operator>=(thisinhkhoiD &a, thisinhkhoiD &b){
			if(a.tinhtongdiem()>=b.tinhtongdiem()) return true;
			return false;
		}
		
		friend float operator < (thisinhkhoiD &a, thisinhkhoiD &b){
	         	return a.tinhtongdiem()<b.tinhtongdiem();
		}
	
};


 thiSinh::thiSinh(){
	sbd="";
	hoTen="";
	diemut=0;

}

void thiSinh::nhap(){
	fflush(stdin);
	cout << "\n Nhap so bao danh: ";
	getline(cin,sbd);
	fflush(stdin);
	cout << "\n Nhap ho ten: ";
	getline(cin,hoTen);
	cout << "\n Nhap diem uu tien: ";
	cin >> diemut;
}
	
void thiSinh::hienthi(){
	cout << "\n --->So bao Danh: "<<sbd << "\t" <<"Ho ten: " <<hoTen << "\t" <<"Diem uu tien: "<<diemut;
}

thisinhkhoiD::thisinhkhoiD():thiSinh(){
	van=0;
	toan=0;
	anh=0;
}

void thisinhkhoiD::nhap(){
	thiSinh::nhap();
	cout<<"\n Nhap diem van: ";
	cin>>van;
	cout<<"\n Nhap diem toan: ";
	cin>>toan;	
	cout<<"\n Nhap diem anh: ";
	cin>>anh;	
}

void thisinhkhoiD::hienthi(){
	thiSinh::hienthi();
	cout<<"\t"<<" Diem van: "<<van<<"\t"<<" Diem toan: "<<toan<<"\t"<<" Diem anh: "<<anh;
}

float thisinhkhoiD::tinhtongdiem(){
	return van+toan+anh+diemut;
}


main(){
	thiSinh a;
	cout<"\n Nhap thong tin cho mot thi sinh:";
	a.nhap();
	cout<<"\n Thong tin vua nhap: ";
	a.hienthi();
	
	int n;
	cout<<"\n Nhap so thi sinh: ";
	cin>>n;
	thisinhkhoiD *ts=new thisinhkhoiD[n];
	for(int i=0; i<n; i++)
	   {
	     cout<<"\n Nhap thong tin cho thi sinh thu: "<<i;
         ts[i].nhap();
	   }
	cout << "\n  thong tin danh sach thi sinh da nhap: ";
	for(int i=0; i<n; i++)
	   {
	    ts[i].hienthi();
	    cout<<"\t"<<" Tong diem: "<<ts[i].tinhtongdiem();
	   }
	cout<<"\n===============================================\n";
	
	float diemchuan;
	cout<<"\n Nhap diem trung tuyen: ";
	cin>>diemchuan;
	int dem=0;
	cout<<"\n Danh sach thi sinh khoi D da do la: ";
	for(int i=0; i<n; i++)
	{
		if(ts[i].tinhtongdiem()>=diemchuan){
			ts->hienthi();
			dem++;
		}
		if(dem==0) cout<<"\n Khong co thi sinh nao!";
	}	
	
	cout<<"\n===============================================\n";
	cout<<"\n Sap xep theo thu tu giam dan cua tong diem la:";
	thisinhkhoiD tg;	
	for(int i=0; i<n-1; i++)
	  for(int j=i+1; j<n; j++)
	       if(ts[i]<ts[j])
	       {
	       	tg=ts[i];
	       	ts[i]=ts[j];
	       	ts[j]=tg;
		   }
	
	for(int i=0; i<n; i++)
	    {  	    ts[i].hienthi();
	    cout<<"\t"<<" Tong diem: "<<ts[i].tinhtongdiem();
	    }
	

	}
