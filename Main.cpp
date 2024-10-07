#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string alamat;
    string hobi;
};

int main() {
    int jumlah;
    
    cout << "Input Jumlah Data: ";
    cin >> jumlah;
    
    Mahasiswa mahasiswa[jumlah];
    
    for (int i = 0; i < jumlah; i++) {
        cout << "Data " << i+1 << endl; 
        cout << "Nama: ";
        cin.ignore(); 
        getline(cin, mahasiswa[i].nama);
        cout << "Alamat: ";
        getline(cin, mahasiswa[i].alamat);
        cout << "Hobi: ";
        getline(cin, mahasiswa[i].hobi);
    }
    
    cout << "\nDAFTAR MAHASISWA" << endl;
    cout << "No\tNama\t\tAlamat\t\tHobi" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "\t" << mahasiswa[i].nama << "\t\t" << mahasiswa[i].alamat << "\t\t" << mahasiswa[i].hobi << endl;
    }

    return 0;
}