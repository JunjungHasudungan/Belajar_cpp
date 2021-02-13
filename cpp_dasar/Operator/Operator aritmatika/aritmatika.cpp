#include <iostream>

using namespace std;

int main(){
	//data member integer
	int a = 5;
	int b = 4;
	int total;
	
	// penjumlahan
	cout << "[1].Penjumlahan " << endl;
	total = a + b;
	cout << "Nilai a: " << a << "\n" << "Nilai b: " << b << endl;
	cout << "Total =  "<< a << " + " << b << " = " << total << "\n"<< endl;
	
	// pengurangan
 	cout << "[2]. Pengurangan" <<endl;
 	total = a - b;
 	cout << "Nilai a: " << a << "\n" << "Nilia b: " << b << endl;
	cout << "Total =  "<< a << " - " << b << " = " << total << "\n"<< endl;
	
	//Perkalian
 	cout << "[3]. Perkalian" <<endl;
	total = a * b;
 	cout << "Nilai a: " << a << "\n" << "Nilai b: " << b << endl;
 	cout << "Total = " << a << " * " << b << " = " <<  total <<"\n"<< endl;
 	
 	// Pembagian
 	cout << "[4]. Pembagian" << endl;
 	total = a / b;
 	cout << "Nilai a: " << a << "\n" << "Nilai b: " << b << endl;
 	cout << "Total = " << a << " / " << b << " = " << total << endl;

	//  Modulasi(sisa bagi)
	cout << "[5]. Modulasi" << endl;
	total =  a % b;
	cout << "Nilai a: " << a << "\n" << "Nilai b: " << b << endl;
	cout << "Total = " << a << " % " << b << " = " << total << endl;
	
	return 0;
		
}