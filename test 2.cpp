#include"iostream"
#include"string.h"
#include"math.h"
#include"conio.h"
using namespace std;
int main(){
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
}
