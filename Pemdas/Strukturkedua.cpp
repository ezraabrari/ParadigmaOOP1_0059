#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;

    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa : ";
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamat;
    cout << "\n Desa : " << mhs.alamat.desa;
    cout << "\n Kota : " << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur; 
}


