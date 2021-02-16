#include <iostream>

using namespace std;
// create signiture function for other class

	double perkalianKotak(double a, double b);
	int perkalianKotak(int c);
	int perkalianKotak(int d, int e, int f);
int main(){
	double inputA, inputB, inputC, inputD, inputE, inputF;
	
	cout << "\t\t === Belajar mengunakan function overloading ===\n" << endl;
	cout << "Masukkan Nilai A: "; 
	cin  >> inputA;
	cout << "Masukkan Nilai B: ";
	cin >> inputB;
	cout << "Hasil Perkalian dari " << inputA << " * " << inputB << " = " << perkalianKotak(inputA, inputB) <<"\n"<< endl;
	cout << "Masukkan Nilai C: ";
	cin >> inputC;
	cout << "Hasil Perkalian dari " << inputC << " * " << inputC << " = " << perkalianKotak(inputC) <<"\n"<< endl;
	cout << "Masukkan nilai D: ";
	cin >> inputD;
	cout << "Masukkan nilai E: ";
	cin >> inputE;
	cout << "Masukkan niali F: ";
	cin >> inputF;
	cout <<"Hasil Perkalian dari " << inputD << " * " << inputE << " * " << inputF << " = " << perkalianKotak(inputD, inputE, inputF) << endl;;
	return 0;
}

// declaration our function before use in main 

	double perkalianKotak(double a, double b){
		return  a * b;		
	}

	int perkalianKotak(int a){
		return a * a;
	}

	int perkalianKotak(int d, int e, int f){
		return d * e * f;
	}
