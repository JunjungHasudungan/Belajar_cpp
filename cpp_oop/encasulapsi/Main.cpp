#include <iostream>
#include <string>

using namespace std;

class Product{

// acsess spesifiers with private
private:
	int harga;

	// create setter function with public access
	public:
	void setHarga(int h){
		//int discon =
		harga = h;
	} 	
	
	// create getter function
	int getHarga(){
		int diskon  = 10;
	//	total = this->harga * (this->diskon/100); // create some formula for discon
		return harga * diskon / 100; //- total;
	}
};

int main(){
// instance an object
	Product producct1;
	
// create data members temporary container
	int inputA;
	
	cout << "\t\t\ === Belajar menggunakan setter dan getter function ====\n" << endl;
	cout << "Masukkan harga \t: ";
	cin >> inputA;

// recall our function 
	producct1.setHarga(inputA); // recall setHarga
	cout << "Diskon \t\t: " << producct1.getHarga()<< "\n" << endl;
	return 0;
	
}