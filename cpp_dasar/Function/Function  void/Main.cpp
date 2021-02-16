#include <iostream>

using namespace std;

// create some function with return
double perkalian(double a, double b){
	double hasil;
	hasil = a * b;
	return hasil;
}
// create void function
void show(double hasil){
	
}

int main(){
	double inputA, inputB, hasilPerkalian, hasil;	
	cout << "\t\t=== Belajar menggunakan function void ===\n" << endl;
	cout << "Masukkan nilai a\t:";
	cin >> inputA;
	cout << "Masukkan nilai b:\t";
	cin >> inputB;
	cout << "Hasil:" <<inputA << " + " << inputB << " = " << hasil <<endl;
	hasil = show(hasil);
	hasilPerkalian = perkalian(inputA, inputB);
	
	return 0;
}
