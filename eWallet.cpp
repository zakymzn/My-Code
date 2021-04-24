#include <iostream>

using namespace std;

int main() {
    int saldo = 0;
    int topUp, menu, menuBayar, menuPulsa, menuKuota;
    string nomorTelepon;
    char keputusan;
    int ulangMenu, ulangMenuBayar, ulangMenuPulsa, ulangMenuKuota, ulangTopUp;

    do {
        ulangMenu = 0;
        cout << "Tutorial membuat program e-Wallet menggunakan C++" << endl;
        cout << "=================================================" << endl;
        cout << endl;
        cout << "Saldo Anda : Rp" << saldo << endl;
        cout << "Pilih menu" << endl;
        cout << "1. Top Up" << endl;
        cout << "2. Bayar" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan angka : ";
        cin >> menu;
        cout << endl;

        if (menu == 1) // menuju ke halaman Top Up saldo
        {
            do {
                ulangTopUp = 0;
                cout << "Masukkan nominal yang diinginkan" << endl;
                cout << "5000 - 500000" << endl;
                cout << "Top Up : ";
                cin >> topUp;
                cout << endl;
                
                if (topUp >= 5000 && topUp <= 500000) {
                    saldo += topUp;
                    cout << "Transaksi berhasil" << endl;
                    cout << "Saldo berhasil ditambahkan Rp" << topUp << endl;
                    cout << endl;
                    cout << "Ingin top up lagi?" << endl;
                    cout << "y/n : ";
                    cin >> keputusan;
                    cout << endl;

                    if (keputusan == 'y' || keputusan == 'Y') {
                        ulangTopUp = 1; // kembali ke halaman menu Top Up saldo
                    }
                    if (keputusan != 'y' || keputusan != 'Y') {
                        ulangMenu = 1; // kembali ke halaman menu utama
                    }
                }
                if (topUp < 5000 || topUp > 500000) {
                    cout << "Nominal Top Up tidak tersedia" << endl;
                    cout << endl;
                    ulangTopUp = 1;
                }
            } while (ulangTopUp == 1);
        }
        if (menu == 2) // menuju ke halaman Bayar
        {
            do {
                ulangMenuBayar = 0;
                cout << "Mau beli apa?" << endl;
                cout << "1. Pulsa" << endl;
                cout << "2. Kuota data" << endl;
                cout << "Masukkan angka : ";
                cin >> menuBayar;
                cout << endl;

                if (menuBayar == 1) // menuju ke halaman pembelian pulsa
                {
                    do {    
                        cout << "Masukkan nomor telepon : ";
                        cin >> nomorTelepon;
                        cout << endl;
                        ulangMenuPulsa = 0;
                        cout << "Mau pulsa berapa?" << endl;
                        cout << "1. Rp5000" << endl;
                        cout << "2. Rp10000" << endl;
                        cout << "3. Rp20000" << endl;
                        cout << "4. Rp50000" << endl;
                        cout << "5. Rp100000" << endl;
                        cout << "Masukkan angka : ";
                        cin >> menuPulsa;
                        cout << endl;

                        if (menuPulsa == 1) {
                            if (saldo >= 5000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Pulsa telah ditambahkan sebesar Rp5000 ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 5000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuPulsa == 2) {
                            if (saldo >= 10000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Pulsa telah ditambahkan sebesar Rp10000 ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 10000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuPulsa == 3) {
                            if (saldo >= 20000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Pulsa telah ditambahkan sebesar Rp20000 ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 20000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuPulsa == 4) {    
                            if (saldo >= 50000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Pulsa telah ditambahkan sebesar Rp50000 ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 50000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuPulsa == 5) {
                            if (saldo >= 100000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Pulsa telah ditambahkan sebesar Rp100000 ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 100000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuPulsa < 1 || menuPulsa > 5) {
                            cout << "Pilihan tersebut tidak tersedia" << endl;
                            cout << endl;
                            ulangMenuPulsa = 1;
                        }
                        cout << "Ingin beli pulsa lagi?" << endl;
                        cout << "y/n : ";
                        cin >> keputusan;
                        cout << endl;

                        if (keputusan == 'y' || keputusan == 'Y') {
                            ulangMenuPulsa = 1; // kembali ke halaman pembelian pulsa
                        }
                        if (keputusan != 'y' || keputusan != 'Y') {
                            ulangMenu = 1; // kembali ke halaman menu utama
                        }
                    } while (ulangMenuPulsa == 1);
                }
                if (menuBayar == 2) // menuju ke halaman pembelian kuota data internet
                {
                    do {
                        ulangMenuKuota = 0;
                        cout << "Masukkan nomor telepon : ";
                        cin >> nomorTelepon;
                        cout << endl;
                        cout << "Pilih paket kuota yang Anda inginkan" << endl;
                        cout << "  Kuota   Masa Aktif   Harga" << endl;
                        cout << "1. 1GB    1  hari      Rp3000" << endl;
                        cout << "2. 10GB   7  hari      Rp25000" << endl;
                        cout << "3. 25GB   14 hari      Rp50000" << endl;
                        cout << "4. 50GB   30 hari      Rp100000" << endl;
                        cout << "Masukkan angka : ";
                        cin >> menuKuota;
                        cout << endl;

                        if (menuKuota == 1) {
                            if (saldo >= 3000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Kuota 1GB selama 1 hari telah ditambahkan ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 3000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuKuota == 2) {
                            if (saldo >= 25000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Kuota 10GB selama 7 hari telah ditambahkan ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 25000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuKuota == 3) {
                            if (saldo >= 50000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Kuota 25GB selama 14 hari telah ditambahkan ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 50000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuKuota == 4) {
                            if (saldo >= 100000) {
                                cout << "Transaksi berhasil" << endl;
                                cout << "Kuota 50GB selama 30 hari telah ditambahkan ke nomor " << nomorTelepon << endl;
                                cout << "Saldo Rp" << saldo << " telah terpotong" << endl;
                                saldo -= 100000;
                                cout << "Sisa saldo Anda Rp" << saldo << endl;
                                cout << endl;
                            }
                            else {
                                cout << "Saldo Anda tidak mencukupi" << endl;
                                cout << endl;
                            }
                        }
                        if (menuKuota < 1 || menuKuota > 4) {
                            cout << "Pilihan tersebut tidak tersedia" << endl;
                            cout << endl;
                            ulangMenuKuota = 1; // kembali ke halaman pembelian kuota
                        }
                        cout << "Ingin membeli kuota lagi?" << endl;
                        cout << "y/n : ";
                        cin >> keputusan;
                        cout << endl;

                        if (keputusan == 'y' || keputusan == 'Y') {
                            ulangMenuKuota = 1; // kembali ke halaman pembelian kuota
                        }
                        if (keputusan != 'y' || keputusan != 'Y') {
                            ulangMenu = 1; // kembali ke halaman menu utama
                        }
                    } while (ulangMenuKuota == 1);
                }
                if (menuBayar < 1 || menuBayar > 2) {
                    cout << "Pilihan tersebut tidak tersedia" << endl;
                    cout << endl;
                    ulangMenuBayar = 1; // kembali ke halaman menu Bayar
                }
            } while (ulangMenuBayar == 1);
        }
        if (menu == 3) {
            return 0; // menghentikan program
        }
        if (menu < 1 || menu > 3) {
            cout << "Pilihan tersebut tidak tersedia" << endl;
            cout << endl;
            ulangMenu = 1; // kembali ke halaman menu utama
        }
    } while (ulangMenu == 1);
}
