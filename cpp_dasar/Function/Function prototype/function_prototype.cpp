#include <iostream>
 
using namespace std;

	// create function first
		double tambah_number(double a, double b); // function with parameters and return values
		void show(double c); // function with parameter, but without return

main(){
	
	// create data member with values
		double numberA, numberB, total;
		cout << "\t\t=== Belajar Function Prototype ===\n" <<endl;
	
		cout << "Masukkan nilai a: ";
		cin >> numberA;
		cout << "Masukkan nilai b: ";
		cin >> numberB;	 	
	
	// recall function with parameters and return values and put in a new variable and fill with parameters
		total = tambah_number(numberA, numberB);
		show(total); // just to show / print total value

	return 0;
}
	// deklaration functions 
	double tambah_number(double a, double b){
		return a * b;
	}
	
	void show(double c){
		
		cout << "Total: " << c << endl; 
	}