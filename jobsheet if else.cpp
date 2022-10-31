#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	char nilai ;
	string kelas,a ;
	int i=1;
	
	cout << "Nama 	: Ahmad Al-Hafidz Ramadhan"<<endl ;
	cout << "Prodi	: Informatika ( NK )"<< endl;
	cout << "NIM 	: 2234034 "<<endl;
	do{
	cout << "=== PROGRAM PENILAIAN SEKOLAH ===="<< endl;
cout <<" 1. Dari Kelas :";
cin >> kelas;fflush(stdin);
cout <<" 2. Nilai (E-A) :";
cin >> nilai ;fflush(stdin);

	if  (nilai == 'A'){
		cout << "Pertahankan !!!"<< endl;
	}
	else if (nilai == 'B'){
		cout << "Kalau bisa ditingkatkan lagi !!!"<< endl;
		
	}
	else if (nilai == 'C' ) {
		cout << "Perbanyak belajar !!!"<< endl ;
	
	}
	else if (nilai == 'D'){
		cout << "Mesti keseringan maen game "<< endl;
		
	}
	else if (nilai == 'E'){
		do {
			cout << "DH TAU MAEN KEK TAI DH KEK TOLOL PULA NILAINYA"<< endl;
			i++;
			
		}while (i<=10);
		getch();
	}
	else {
		cout << "Maaf,format nilai anda tidak sesuai" << endl;
		
	}
	cout<<"Ingin mengulang? (y/t) ";
	getline(cin, a);fflush(stdin);
}while (a!="t");
	return 0;
}
