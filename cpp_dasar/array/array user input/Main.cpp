#include <iostream>

using namespace std;

int main(){
	int inputJumlah, jumlahArray[100];
	int i = 0;
	cout << "\t\t === Belajar array 1 dimensi dengan menggunakan user input === \n"<<endl;	
	cout << "Masukkan jumlah array: ";
	cin >> inputJumlah;
	while( i < inputJumlah	){
		cout << "Masukkan nilai array pada Index ke - "<< "[" << i + 1 << "] : ";
		 cin >> jumlahArray[i];
		i++; 
	}
	
	while( i < inputJumlah	){
		cout << jumlahArray[i] << endl;
		i++;
	}

		
	return 0;
}