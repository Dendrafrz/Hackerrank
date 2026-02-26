#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double modal, bunga, tahun;

    cout << "=== KALKULATOR INVESTASI SIMPEL ===" << endl;
    
    cout << "Masukkan modal awal: ";
    cin >> modal;
    
    cout << "Bunga tahunan (dalam %): ";
    cin >> bunga;
    
    cout << "Durasi (tahun): ";
    cin >> tahun;

    // Rumus Bunga Majemuk: A = P(1 + r)^t
    // r adalah desimal, jadi bunga dibagi 100
    double hasil = modal * pow((1 + (bunga / 100)), tahun);

    cout << fixed << setprecision(2); // Mengatur agar hanya 2 angka di belakang koma
    cout << "\nTotal uang Anda setelah " << tahun << " tahun: Rp " << hasil << endl;
    cout << "Keuntungan bersih: Rp " << hasil - modal << endl;

    return 0;
}