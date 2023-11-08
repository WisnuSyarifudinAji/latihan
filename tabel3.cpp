#include <iostream>
using namespace std;

int main() {
    string nim, nama;
    cout<<"Nama : Wisnu Syarifudin Aji"<<endl;
    cout<<"Kelas : A"<<endl;
	cout<<"NIM : 2300018039 "<<endl<<endl;
	cout<<"--Tugas Dasar Pemrograman--"<<endl<<endl;
    

    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            cout << "*-----"; // Output untuk garis vertikal
        }
        cout << "*\n"; // Output untuk ujung garis horizontal
        for (int o = 0; o < 3; o++) {
            cout << "|     "; // Output untuk spasi 
        }
        cout << "|\n"; // Output untuk baris kosong
    }

    // Output untuk garis horizontal di bagian bawah tabel
    for (int o = 0; o < 3; o++) {
        cout << "*-----"; // Output untuk garis vertikal
    }
    cout << "*\n"; // Output untuk ujung garis horizontal

    return 0;
}
