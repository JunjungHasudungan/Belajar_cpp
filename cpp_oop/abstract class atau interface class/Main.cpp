#include <iostream>

using namespace std;

// create parent class
class Shape{
	// pure virtual function providing 
	public:
	virtual double getArea()= 0;
	 
	//data members
	protected:
	double width;
	double height;	
	
	public:
	void setWidth(double w){
		width = w;
	}
	
	void setHeight(double h){
		height = h;
	}
};

class Triangle: public	Shape{
// recall virtual function
	public:
	double getArea(){
		return (width * height)/2;
	}	
};
class Retangle:public Shape{
// recall virtual function
	public:
	double getArea(){
		return (width * height);
	}	
};

int main(){

// instance an object	
	Triangle triangle1;
	Retangle retangle1;
	
// create data members container values
	double inputWeight, inputHeight;
	cout << "\t\t === Belajar menggunakan abstract class / interface ====\n" << endl;
	cout << "Menghitung Luas Segitiga" << endl;
	cout << "Masukkan nilai lebar \t: ";
	cin >> inputWeight;
	cout << "Masukkan nilai tinggi \t: ";
	cin >> inputHeight;
	
	// recall an object to setWidth and height
	triangle1.setWidth(inputWeight);
	triangle1.setHeight(inputHeight);
	cout <<" \n";
	cout << "Luas Segitiga: " << inputWeight << " * " << inputHeight << " / " << " 2 " << " =  " << triangle1.getArea()<< "\n" << endl;
	
	cout << "Menghitung Luas Persegi Panjang" << endl;
	cout << "Masukkan nilai lebar \t: ";
	cin >> inputWeight;
	cout << "Masukkan nilai tinggi \t: ";
	cin >> inputHeight;
	
	// recall an object to setWidth and setHeight
	retangle1.setWidth(inputWeight);
	retangle1.setHeight(inputHeight);
	cout <<" \n";
	cout << "Luas Persegi Panjang: " << inputWeight << " * " << inputHeight << " =  " << retangle1.getArea()<< "\n" << endl;
		
	
	return 0;
}