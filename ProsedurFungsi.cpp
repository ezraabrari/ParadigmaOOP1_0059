// 1. Cara insertion sort dalam membandingkan dan menukarnya sendiri terdapat pada procces memisahkan index array 0 dengan index yang lainnya
// jikalau sudah, kita akan mengambil index 1 sebagai step pertama dengan temp nya sendiri adalah angka yang terdapat pada array tersebut,
// dan selanjutnya ada variable j yang dimana j ini adalah (i - 1) atau di kiri dari index yang kita ambil, setelah itu...
// akan di lakukan suatu procces jikalau kedua syarat terpenuhi yaitu syarat pertama j lebih dari 0 dan juga J lebih dari samaa dengan temp
// jikalau terpenuhi akan memulai suatu procces yaitu arr J akan di pindahkan ke kanan atau akan bertukar posisi dengan temp dan setelah itu, j yang awalnya di kiri, dia akan menjadi temp

// 2. selection sort sendiri dia akan memilih memilih datu dari angka yang lain dengan angka yang lain

// 3. algoritma sortir, caranya adalah melihat dari banyaknya index dan cara

// 4. coding

#include <iostream>
#include <String>
using namespace std;

int Ezra[59];
int n, j, temp, i;

void input() {
	while (true) {
		cout << "masukkan banyaknya elemen array pada : ";
		cin >> n;
		if (n <= 59)
			break;
		else {
			cout << "\n array hanya dapat mempunyai maksimal 59 elemen\n ";
		}
			
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukkan elemen array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ":";
		cin >> Ezra[i];
	}
}

void insertionsort() {

	for (i = 1; i <= n - 2; i++) {
		j = 0;
		while (j + 1; j <= n - 1; j++) {
			Ezra[i] < Ezra[j];
			i = Ezra[j];
		}
    }
		Ezra[j] = i;
    }

static void display() {
		cout << endl;
		cout << "=================================" << endl;
		cout << "Element Array yang Telah tersusun" << endl;
		cout << "=================================" << endl;
		cout << endl;

		for (int j = 0; j < n; j++) {
			cout << Ezra[j] {
			if (j < n - 1) 
				cout << "--->";
        }
		}
		cout << endl;
		cout << endl;

		cout << "jumlah pass = " << n - 1 << endl;
		cout << endl;
		cout << endl;
	}

int main() {
		input();

		insertionsort();
		display();

}

