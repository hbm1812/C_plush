#include<iostream>
#include<string>
using namespace std;
class SV
{
string ten;
float d1,d2;
public:
/* SV(string t="a",float dd1=0,float dd2=0)

{
ten=t;
d1=dd1; d2=dd2;
dtb=(d1+d2*2)/3;
}*/
void nhap()

{
fflush(stdin);
cout<<"Nhap ho ten: ";
getline(cin,ten);
cout<<"Nhap diem ky 1: ";cin>>d1;
cout<<"Nhap diem ky 2: ";cin>>d2;
// dtb=(d1+d2*2)/3;
}
float dtb()
{
return (d1+d2*2)/3;
}
void xuat()
{
cout<<"Ho ten "<<ten;
cout<<"\nDiem ky 1: "<<d1<<" ky 2: "<<d2<<" ca nam: "<<dtb();
}
int friend operator >(SV &a, SV &b)
{
return a.dtb()>b.dtb();
};

};
main()
{

SV *s,tg;
int i,j,n;
cout<<"Nhap n = ";cin>>n;
s= new SV[n];
for(i=0;i<n;i++)
{
cout<<"Nhap thong tin sinh vien thu "<<i+1<<"\n";
s[i].nhap();
}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if (s[j]>s[i])
{
tg=s[i];
s[i]=s[j];
s[j]=tg;
}
cout<<"\nMang da sap xep:\n\n";
for(i=0;i<n;i++)
{
s[i].xuat();
cout<<"\n===============================================\n";
}

}
