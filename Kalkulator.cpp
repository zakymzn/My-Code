#include <iostream>

using namespace std;

int main() {
	long double angka, angka2, hasil;
	bool ulang = true;
	char x;

	cout << "Tutorial membuat kalkulator menggunakan C++" << endl;
	cout << "===========================================" << endl;
	cout << endl;
	cout << "Tekan Ctrl + C untuk keluar" << endl;
	cout << endl;

	do {
		if (angka != hasil) {
			cin >> angka;
			cin >> x;
			cin >> angka2;
		}
		if (angka == hasil) {
			cin >> x;
			cin >> angka2;
		}
		if (x == '+') {
			hasil = angka + angka2;
			cout << "= " << hasil << endl;
			angka = hasil;
		}
		if (x == '-') {
			hasil = angka - angka2;
			cout << "= " << hasil << endl;
			angka = hasil;
		}
		if (x == '*') {
			hasil = angka * angka2;
			cout << "= " << hasil << endl;
			angka = hasil;
		}
		if (x == '/') {
			hasil = angka / angka2;
			cout << "= " << hasil << endl;
			angka = hasil;
		}
	} while (ulang == true);
	return 0;
}