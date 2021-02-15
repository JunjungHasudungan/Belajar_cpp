#include <iostream>

using namespace std;

	int tambah(int a, int b){
		int c;
		c = a + b;
		return c;
		
	}
int main(){
	int inputNilaiA, inputNilaiB, total;
	cout << "Masukkan nilai a :";
	cin >> inputNilaiA;
	cout << "Masukkan nilai b :";
	cin >> inputNilaiB;
	total = tambah(inputNilaiA, inputNilaiB);
	cout << "Hasil: " << total <<endl;
	
	return 0;
}