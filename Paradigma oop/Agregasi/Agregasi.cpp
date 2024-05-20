#include <iostream>
#include <vector>
using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu2("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();
}