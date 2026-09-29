#include <iostream>

using namespace std;

int main() {
    const int JUMLAH_HARI = 7;
    int penjualan[JUMLAH_HARI];
    int total = 0;

    cout << "Masukkan jumlah barang terjual selama " << JUMLAH_HARI << " hari:" << endl;
    for (int i = 0; i < JUMLAH_HARI; i++) {
        cin >> penjualan[i];
    }

    int *ptr = penjualan;

    for (int i = 0; i < JUMLAH_HARI; i++) {
        total += *(ptr + i);
    }

    cout << "\nOutput:" << endl;
    cout << "Penjualan : ";
    for (int i = 0; i < JUMLAH_HARI; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Total : " << total << endl;

    return 0;
}
