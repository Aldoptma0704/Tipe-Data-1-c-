#include<iostream>

using namespace std;

int main(){
	char nama[30];
	int umur;
	char gol_darah;
	
	cout << "Masukkan Nama\t\t: ";
	cin.getline(nama, 30);
	cout << "Masukkan Umur\t\t: ";
	cin >> umur;
	cout << "Masukkan Gol_Darah\t: ";
	cin >>gol_darah;
	
	cout << "Nama Kamu\t: " <<nama<<endl;	
	cout << "Umur Kamu\t: " <<umur<<endl;
	cout << "Gol Darah Kamu\t: " <<gol_darah<<endl;
	
	return 0;
}
