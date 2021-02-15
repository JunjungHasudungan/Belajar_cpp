#include <iostream>

using namespace std;

int main(){
	// create some array with data members
	string names[4] = {"Junjung Hasudungan", "Rendi", "Caca Cahyana", "Octweswee sipangkar"};
	cout << "\t\t === Belajar looping menggunakan for ===\n" << endl;
	cout << "Nama-nama yang ada didalam array:" <<endl;
	for(int i = 0; i < 4 ; i++){
		cout << i+1 << "." << names[i] << endl;
	}
	return 0;
}