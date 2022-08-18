#include<iostream>
#include"string.h"
#include<cmath>
#include"conio.h"
using namespace std;
//1.6
int Fibonacci(int n)
{ if (n == 1 || n == 2)
  return 1;
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}
//1.9
int max(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
        if (max < A[i])
            max = A[i];
    return max;
}

void min(int A[], int n)
{
    int min = A[0];
    for (int i = 1; i < n; i++)
        if (min > A[i])
            min = A[i];
   
    cout << "\n So nho nhat trong mang la: " << min;
}

int sum(int A[], int n)
{
	int tong=0;
	for(int i=0; i<n; i++)
	{
		tong=tong+A[i];
	}
	return tong;
}

//1.10
void kiem_tra(int j)
{
	if(j<2) {cout << "\n " << j <<" khong phai la so nguyen to!";}
	if(j>=2){
		int dem1=0;
		for(int i=1; i<=j; i++)
		{
			if(j%i==0){dem1++;}
		}
		if(dem1==2){cout << "\n " << j <<" la so nguyen to!";}
		if(dem1>2){cout << "\n " << j <<" khong phai la so nguyen to!";}
		
	}

	int dem2=0;
	cout << "\n Cac so nguyen to tu 1 den " << j << " la:";
	for(int i=2; i<=j; i++)
	{for(int l=1; l<=i; l++)
		{if(i%l==0){dem2++;}
	     if(dem2==2){cout << i;}
	    }

	}
	

}
int main(){
//Cau1.1
cout << "Xin chao cac ban!" << endl;

//Cau1.2
string ho, ten;

int tuoi;
cout << "Nhap thong tin cho sinh vien: ";
string hoten;
cout << "\n ->Nhap ho ten cho sinh vien: ";
getline(cin, hoten);
cout << "\n -> tuoi: ";
cin >> tuoi;
cout << "\n -----------------------------";
cout << "\n Thong tin sinh vien da nhap la: ";
cout << " \n -> Ho va ten: " << hoten;
cout << " \n -> tuoi:" << tuoi;
cout << "\n -----------------------------";


//Cau1.3
double x, y;
cout << "\n nhap 2 so bat ky: ";
cout << "\n x = ";
cin >> x;
cout << "\n y = ";
cin >> y;
double tong= x+y, hieu= x-y, tich=x*y;
cout << "\nTong cua " << x <<" va " << y <<" la : " << tong;
cout << "\nHieu cua " << x <<" va " << y <<" la : " << hieu;
cout << "\nTich cua " << x <<" va " << y <<" la : " << tich << endl;
if(x>y) cout << x << " lon hon " << y << endl;
if(x<y) cout << x << " nho hon " << y << endl;
if(x==y) cout << x << " bang " << y << endl;


//Cau1.4
long luyThua = 1;
for(int i = 1; i <= y; i++)  
    {
        luyThua = luyThua * x;
    }
    cout << x << " ^ " << y << " = " << luyThua;


//Cau1.5
string xau_ky_tu;
cout << "\n Nhap xau ky tu:";
getline(cin,xau_ky_tu);
cout << "\n Do dai cua xau ky tu vua nhap la: " << xau_ky_tu.length();
int k = xau_ky_tu.length(), m=0;
for(int i=0; i<k; i++)
{
	if(xau_ky_tu[i]==xau_ky_tu[k-1-i]) m++;
}
if(m<k){cout << "\n Xau vua nhap khong doi xung!";} 
if(m>=k){cout << "\n Xau vua nhap doi xung!";}

//Cau1.6

int a;
cout << "\n nhap so a= ";
cin >> a;
if(a==Fibonacci(a)) {cout << "\n a thuoc day fibonacci!";}
if(a!=Fibonacci(a)) {cout << "\n a khong thuoc day fibonacci!";}

 
//1.9
int n;
cout << "\n Nhap so phan tu cho mang: ";
cin >> n;
int A[n];
for(int i=0; i<n; i++)
{
	cout << "\n A["<< i <<"] = ";
	cin >> A[i];
}
cout << "\n So lon nhat trong mang la: " << max(A, n);
min(A,n);
cout << "\n Tong cac phan tu trong mang la: " << sum(A,n);

//1.10
int j;
cout << "\n Nhap so j = ";
cin >> j;
kiem_tra(j);

//1.11
string xau1, xau2;
cout << "\n ->Nhap xau ky tu 1: ";
cin >> xau1;
cout << "\n ->Nhap xau ky tu 2: ";
cin >> xau2;
string xau3 = xau1 + xau2;
cout << "\n Xau noi hai xau da nhap la:" << xau3;
cout << "\n Do dai cua xau ky tu vua nhap la: " << xau3.length();

}
