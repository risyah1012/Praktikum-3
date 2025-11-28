#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Masukkan Jumlah Baris Segitiga Pascal: ";
	cin >> n;

	for (int a = 0; a < n; a++) {
		for (int c = 0; c < n - a; c++) {
			cout << " ";
		}

		int val = 1;
		for (int b = 0; b <= a; b++) {
			cout << val << " ";
			val = val * (a - b) / (b + 1);
		}
		cout << endl;
	}

	cout << "\n=================================================\n";
	cout << "\nNama  : Muhammad Rizki Desca Firmansyah";
	cout << "\nNIM   : 25104410041";
	cout << "\nProdi : Teknik Informatika - 1B\n";
	cout << "\n=================================================";

	return 0;
}