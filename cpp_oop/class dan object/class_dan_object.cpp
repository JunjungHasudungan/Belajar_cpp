// call library
#include <iostream>
#include <string.h>
using namespace std;

// Create Some Class
class Human{

// using public access 
	public:
	
// data member 
	string name;
	int age;
	string gender;
	double nis;		
};
	int main(int argc, char const *argv[]){
	// inizialitatition of object
	Human manusia1;
	Human manusia2;
	Human manusia3;
	// call value of data member from object
 	manusia1.name = "Junjung Hasudungan Sitorus";
	manusia1.age = 27;
	manusia1.gender = "Laki-Laki";
	manusia1.nis = 210212;
	
	manusia2.name = "Rendi Ginting";
	manusia2.age = 22;
	manusia2.gender = "Laki-Laki";
	manusia2.nis = 210210;
	
	manusia3.name = "Yousa Situmorang";
	manusia3.age = 22;
	manusia3.gender = "Laki-Laki";
	manusia3.nis = 210211;
	cout << "\n";
	cout << "\t\t\t Belajar Tentang obect dan data member \n" << endl;
	cout << " \t Biodata Murid\n\n"  << "Nama "<<"\t"<<" : "<< manusia1.name <<endl;
	cout << "Gender" << "\t" <<" : "<< manusia1.gender << endl;
	cout << "Age" << "\t" << " : " << manusia1.age << endl;
	cout << "Nis" << "\t" << " : " << manusia1.nis << endl;
	cout << "==================" << endl;
	cout << "Nama" << "\t"<< " : " << manusia2.name << endl; 
	cout << "Gender" << "\t" <<" : "<< manusia2.gender << endl;
	cout << "Age" << "\t" << " : " << manusia2.age << endl;
	cout << "Nis" << "\t" << " : " << manusia2.nis << endl;
	cout << "==================" << endl;
	cout << "Nama" << "\t"<< " : " << manusia3.name << endl; 
	cout << "Gender" << "\t" <<" : "<< manusia3.gender << endl;
	cout << "Age" << "\t" << " : " << manusia3.age << endl;
	cout << "Nis" << "\t" << " : " << manusia3.nis << endl;
	cout << "==================" << endl;
	return 0;
}