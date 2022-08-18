#include <iostream>

using namespace std;
class PhuongTienGiaoThong{
private:
string hang;
string ten;
float vanToc;
public:
PhuongTienGiaoThong();
void nhap();
void xuat();
};
PhuongTienGiaoThong::PhuongTienGiaoThong(){
hang="";
ten="";
vanToc=0;
}
void PhuongTienGiaoThong::nhap(){
cout<<"Nhap hang:";
cin.ignore(); //xoá b? d?m
getline(cin,hang);
cout<<"Nhap ten:";
cin.ignore();
getline(cin,ten);
cout<<"Van toc:";
cin>>vanToc;
}

void PhuongTienGiaoThong::xuat(){

cout<<hang<<"\t"<<ten<<"\t"<<vanToc;
}

int main(){
PhuongTienGiaoThong p;
p.nhap();
cout<<"\n In thong tin \n";
p.xuat();
int n;
cout<<"\n Nhap so phuong tien: ";
cin>>n;
PhuongTienGiaoThong *a= new PhuongTienGiaoThong[n];
for (int i=0;i<n;i++)
a[i].nhap();
cout<<"\n In thong tin \n";
for (int i=0;i<n;i++)
a[i].xuat();
return 0;
}
