#include <iostream>
using namespace std;
string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborgini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborgini = 6000;

void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "jumlah Xpander : ";
    cin >> nXpander;

    cout << "Jumlah Porsche : ";
    cin >> nPorsche;

    cout << "Jumhlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio : ";
    cin >> nBrio;

    cout << "Jumlah Lamborgini : ";
    cin >> nLamborgini;
}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborgini * hLamborgini);
}

void display(){
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main (){
    char pilihan;
    do{

    input();
    display();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}