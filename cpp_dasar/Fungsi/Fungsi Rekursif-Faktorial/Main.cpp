#include <iostream>

using namespace std;

// definisi fungsi 
 long int faktorial(int a);

int main(){
	// variable penampung nilai input faktorial
	int a, hasil;
	
	cout << "\t\t === Belajar menggunakan fungsi rekursif dalam penggunaan faktorial ===\n" << endl;
	cout << "Masukkan nilai dasar: ";
	cin >> a;
	hasil = faktorial(a);
	cout << "Hasil Faktorial dari " << a << "!" << " = "<< hasil <<"\n"<< endl;
	
	return 0;
}

long int faktorial(int a){
	if(a <= 1){
		return a;
	}else{
		return a * faktorial(a - 1);
	}
}