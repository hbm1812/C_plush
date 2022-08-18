#include"iostream"
#include<string>
using namespace std;
int main(){
	int x;
	cout <<"Nhap vao 1 so bat ky: ";
	cin >> x;
	cout <<"so da nhap: " <<x;
	
	string firstName = "Takanashi";
	string lastName= "Rikka";
	string fullName= firstName + lastName;
	cout << fullName;
	
	
	string Name;
	cout << "Tye your full name: ";
	getline (cin, fullName);
	cout << "Your name is: " <<Name;
	}

