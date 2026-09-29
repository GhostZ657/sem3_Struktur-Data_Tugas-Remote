#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah lagu: ";
    cin >> n;
    cin.ignore();

    char **daftarLagu = new char*[n];

    cout << "Masukkan " << n << " judul lagu:" << endl;
    for (int i = 0; i < n; i++) {
        string inputJudul;
        getline(cin, inputJudul);

        daftarLagu[i] = new char[inputJudul.length() + 1];

        for (size_t j = 0; j < inputJudul.length(); j++) {
            daftarLagu[i][j] = inputJudul[j];
        }
        daftarLagu[i][inputJudul.length()] = '\0';
    }

    cout << "\nDaftar Judul Lagu:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << *(daftarLagu + i) << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] daftarLagu[i];
    }
    delete[] daftarLagu;

    return 0;
}
