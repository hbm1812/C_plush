#include<iostream>
using namespace std;

class COMPLEX{
	private:
		double a;
		double b;
	public:
		void nhap();
		void xuat();
        friend COMPLEX cong(COMPLEX u1, COMPLEX u2)
         {
            COMPLEX u;
            u.a = u1.a + u2.a;
            u.b = u1.b + u2.b;
            return u;
          }
          
        friend COMPLEX tru(COMPLEX u1, COMPLEX u2)
         {
           COMPLEX u;
           u.a = u1.a - u2.a;
           u.b = u1.b - u2.b;
           return u;
         }
         
};
void COMPLEX::nhap(){
	cout<<"\n nhap phan thuc: "; 
	cin>>a;
    cout<<"\n nhap phan ao: "; 
	cin>>b;
}
void COMPLEX::xuat(){
    cout<<a<<"+"<<b<<"i";
}


main()
{
    COMPLEX ucong, utru, u1, u2;
    cout << "\n nhap so phuc thu nhat: "; 
	u1.nhap();
	cout<<"\n-> So phuc da nhap la: ";
    u1.xuat();
    cout << "\n nhap so phuc thu thu hai: "; 
	u2.nhap();
	cout<<"\n-> So phuc da nhap la: ";
    u2.xuat();
    cout<<"\n------------------------------------\n";
	cout << "\n ---->Tong hai so phuc la: ";
     ucong = cong(u1,u2);
     ucong.xuat();
    cout << "\n ---->Hieu hai so phuc la: ";
    utru = tru(u1,u2);
    utru.xuat();
    
	COMPLEX *sp;
    int n;
    cout<<"\nNhap so so phuc: ";
    cin>>n;
    sp=new COMPLEX[n];
	for(int i=0; i<n; i++)
	   {
	   cout<<"\n--->so phuc thu "<<i;
	   sp[i].nhap();
	   }

	
}
