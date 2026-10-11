#include <iostream>
using namespace std;

int main() {
    int n;
    float nilai[100];
    float total = 0;
    float tertinggi, terendah;
    int jumlahLulus = 0;

    cout << "=============================" << endl;
    cout << "   PROGRAM PENGOLAHAN NILAI  " << endl;
    cout << "=============================" << endl;
    
    cout << "Jumlah mahasiswa : ";
    cin >> n;
    cout << endl;

    cout << "Masukkan nilai mahasiswa" << endl;
    
    // Input nilai
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
        
        total += nilai[i];
        
        if (nilai[i] >= 70) {
            jumlahLulus++;
        }
    }

    // Menentukan nilai tertinggi dan terendah
    tertinggi = nilai[0];
    terendah = nilai[0];
    
    for (int i = 1; i < n; i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }

    float rataRata = total / n;

    // Menampilkan hasil
    cout << endl;
    cout << "=============================" << endl;
    cout << "       HASIL PENGOLAHAN      " << endl;
    cout << "=============================" << endl;
    cout << endl;
    
    cout << "Nilai mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << " : " << nilai[i] << endl;
    }
    cout << endl;
    
    cout << "Nilai tertinggi : " << tertinggi << endl;
    cout << "Nilai terendah  : " << terendah << endl;
    cout << "Nilai rata-rata : " << rataRata << endl;
    cout << "Jumlah lulus    : " << jumlahLulus << " mahasiswa" << endl;
    cout << endl;

    return 0;
}