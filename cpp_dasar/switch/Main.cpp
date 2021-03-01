#include <iostream>

using namespace std;

int main(){
	// create some data member with value
	int day = 4;
	cout << "\t\t === Belajar menggunakan switch ===" << endl;
	
	cout <<"Masukkan angka: ";
	cin >> day;
	
	switch(day){
		case minggu:
			cout << "Minggu" <<endl;
			break;
		case 2:
			cout << "Senin" <<endl;
			break;
		case 3:
			cout << "Selasa" <<endl;
			break;
		case 4:
			cout << "Rabu" <<endl;
			break;
		case 5:
			cout << "Kamis" << endl;
			break;
		case 6:
			cout << "Jumat" << endl;
			break;
		case 7:
			cout << "Sabtu" << endl;
			break;
		default:
			cout << "Tidak ada" << endl;
	}
	return 0;
}