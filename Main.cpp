#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int jumlh;

    cout << "Berapa jumlah mahasiswa? "; 
    cin >> jumlh;
    cin.ignore(); 

    string nma[jumlh];
    string alamt[jumlh];
    string hbi[jumlh];

    for (int a = 0; a < jumlh; a++) {
        cout << "Mahasiswa ke " << a + 1 << endl;
        cout << "Nama: "; getline(cin, nma[a]);
        cout << "Alamat: "; getline(cin, alamt[a]);
        cout << "Hobi: "; getline(cin, hbi[a]);
        cout << endl;
    }

    cout << "\nDAFTAR MAHASISWA" << endl;
    cout << left << setw(5) << "No" << setw(20) << "Nama" << setw(20) << "Alamat" << setw(20) << "Hobi" << endl;

    for (int i = 0; i < jumlh; i++) {
        cout << left << setw(5) << i + 1 
             << setw(20) << nma[i] 
             << setw(20) << alamt[i] 
             << setw(20) << hbi[i] 
             << endl;
    }
    return 0;
}
