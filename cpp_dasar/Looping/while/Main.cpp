#include <iostream>

using namespace std;

int main(){
	// create some data member with array
	string names [] = {"Junjung Hasudungan Sitorus", "Yosua Situmorang", "Caca Cahyana", "Rendi Ginting"};
	int i = 0;
	cout << "\t\t === Belajar looping menggunakan while === \n" <<endl;
	cout << "Nama-nama yang ada dalam array:" <<endl;
	
		while(i < 4){
		cout << i+1 << "."<< names[i] << endl;
		i++;
	}
}