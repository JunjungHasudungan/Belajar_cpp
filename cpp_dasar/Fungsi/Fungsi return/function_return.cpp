#include <iostream>

using namespace std;
// create some functions return with parameters
 	int tambah(int a, int b = 0){
	 	int c; // using new variable to container addition result
	 	c = a + b;
		 return c;
	 }
	 int kurang(int g, int h){
 		int i; // using new variable to container subtraction result
 		i = g - h;
 		return i;
 		
 	}
	 int kuadrat(int x){
 		int y; // using new variable to container square result
 		y = x * x;
		 return y; 
 	} 
	
	int bagi(int d, int e){
		int f; // using new variable to container division result
		f = d /  e;
		return f;
	
	}
	main(){
	// create data member and new variables
		int inputKuadrat, inputA, inputB, inputD, inputE, inputG, inputH, 
		hasilPenjumlahan, hasilPengurangan, hasilPembagian, hasilPerkalian, hasilKuadrat;  
		cout << "\t\t === Belajar menggunakan Function return === \n" << endl;
		
		// penjumlahan
		cout << "Penjumlahan \nMasukkan nilai pertama \t: ";
		cin >> inputA;
		cout << "Masukkan nilai kedua \t: ";
		cin >> inputB;
		hasilPenjumlahan = tambah(inputA, inputB);
		cout << "Hasil: " << inputA << " + " <<inputB << " = " << hasilPenjumlahan << "\n"<< endl;
		
		// pengurangan
		cout << "Pengurangan\nMasukkan nilai pertama \t: ";
		cin >>inputG;
		cout << "Masukkan nilai kedua \t: ";
		cin >> inputH;
		hasilPengurangan = kurang(inputG, inputH);
		cout << "Hasil dari " << inputG << " - " << inputH << " = " << hasilPengurangan << "\n"<<endl; 
		
		// kuadrat 
		cout << "Kuadrat\nMasukkan nilai \t\t: ";
		cin >> inputKuadrat;
		hasilKuadrat = kuadrat(inputKuadrat);
		cout << "Hasil dari " << inputKuadrat <<"* = " << hasilKuadrat << "\n" <<endl; 
		
		// pembagian
		cout << "Pembagian \nMasukkan nilai pertama \t: ";
		cin >> inputD;
		cout << "Masukkan nilai kedua \t: ";
		cin >> inputE;
		hasilPembagian = bagi(inputD, inputE);
		cout << "Hasil dari " << inputD << " : " << inputE << " = " << hasilPembagian << "\n" <<endl;

		return 0;
	}