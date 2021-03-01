#include <iostream>

using namespace std;

int main(){
	// create some data member with array
	string names [] = {"Junjung Hasudungan Sitorus", "Yosua Situmorang", "Caca Cahyana", "Rendi Ginting"};
	int i = 0, b, c;
	
	cout << "\t\t === Belajar looping menggunakan while === \n" <<endl;
	cout << "Nama-nama yang ada dalam array:" <<endl;
	
	cout << "Masukkan nilai b:";
	cin >> b;

		while(i < b){
		cout << i+1 << "."<< "Masukkan nama: ";
		cin >> c;
		i++;
	}
}