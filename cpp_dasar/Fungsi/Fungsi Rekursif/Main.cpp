#include <iostream>

using namespace std;
long int pangkat(int a, int b); // mendeklarasikan fungsi

int main(){
	int a, b; // a adalah variable penampung inputan nilai angka dasar sedangkan b untuk nilai pangkat
	cout << "\t\t === Belajar menggunakan fungsi rekursif ===\n" << endl;
	cout <<"Masukkan nilai a untuk nilai dasar\t: ";
	cin >> a;
	cout << "Masukkan nilai b untuk nilai pangkat\t: ";
	cin >> b;
	cout << a <<" ^ " << b << " = " << pangkat(a,b) << endl;
	
	
	return 0;
}

// mendefinisikan / esekusi fungsi

long int pangkat(int a, int b){
	// a adalah variable penampung untuk nilai dasar dalam fungsi, b untuk nilai pangkat
	if( b == 0 ){
		return 1;
	}else{ 
		return a * pangkat(a, b-1);
	}
}