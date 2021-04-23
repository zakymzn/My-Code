#include <iostream>

using namespace std;

int main() {
    int menu, ulang;
    string id, pw, daftarid, daftarpw;

    cout << "Tutorial membuat Login Page sederhana menggunakan C++" << endl;

    do
    {
        cout << "1. Login" << endl;
        cout << "2. Daftar" << endl;
        cout << endl;
        cout << "Masukkan nomor : ";
        cin >> menu;

        if (menu == 1) {
            ulang = 0;
            cout << "Masukkan ID dan Password" << endl;
            cout << "ID : ";
            cin >> id;
            cout << "Password : ";
            cin >> pw;
            cout << endl;
            if (id == daftarid && pw == daftarpw) {
                cout << "Login berhasil" << endl;
            }
            else {
                cout << "ID atau Password Anda salah" << endl;
                cout << "Jika Anda belum mendaftar, silahkan daftar terlebih dahulu di menu Daftar" << endl;
                cout << endl;
                return main();
            }
        }
        if (menu == 2) {
            cout << endl;
            cout << "Daftarkan ID dan Password Anda" << endl;
            cout << "ID : ";
            cin >> daftarid;
            cout << "Password : ";
            cin >> daftarpw;
            cout << endl;
            cout << "ID dan Password berhasil didaftarkan" << endl;
            cout << "Anda bisa kembali ke menu Login" << endl;
            cout << endl;
            ulang = 1;
        }
        if (menu < 1 || menu > 2) {
            cout << endl;
            cout << "Pilihan tidak dikenali" << endl;
            cout << endl;
        }
    } while (ulang == 1 || menu < 1 || menu > 2);
    return 0;
}