#include <iostream>
using namespace std;

//Deklarasi variable global
int kodeJurusan;
string namajurusan;
string statuskuota;

//prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" <<endl;
    cout << "3. Sistem Informasi" <<endl;
    cout << "----------------------------------" << endl;
    cin >> kodeJurusan;
}

//prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namajurusan = "Teknologi Informasi";
            statuskuota = "Tersedia (15 kursi)";
            break;
        case 2:
            namajurusan = "Teknologi Informasi";
            statuskuota = "Kuota Penuh!";
            break;
        case 3:
            namajurusan = "Teknologi Informasi";
            statuskuota = "Tersedia (5 kursi)";
            break;
        default:
            namajurusan = "Tidak Diketahui";
            statuskuota = "Error: Kode Tidak Valid";
    }
}
