// 1. int panjang, char nama, bool 
// 4. implementasi dari prosedur dan fungsi adalah, Prosedur dari penjumlahan yang dimana fungsinya sendiri yakni float a dan float b
// 5. 

#include <iostream>
using namespace std;

int nMTK, nBahasaInggris, nRerata;
char nama;
string status;

void input() {
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Nilai matematika : ";
	cin >> nMTK;
	cout << "nBahasa inggris : ";
	cin >> nBahasaInggris;

	nRerata = (nMTK + nBahasaInggris) / 2;

	if (nRerata > 70) {
		status = "lulus";
	}
	else if (nMTK > 80) {
		status = "lulus";
	}
	else {
		status = "tidak lulus";
	}

	cout << "tampilkan status : " << status << endl;
    }