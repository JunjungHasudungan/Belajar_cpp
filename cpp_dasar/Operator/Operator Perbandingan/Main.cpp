// call library
#include <iostream>

using namespace std;

int main(){
	// create some data members with set values
	int a = 6;
	int b = 5;
	
	cout << "\t\t=== Belajar Pengenalan Comparison / perbandingan ===\n" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << "\n"<<endl;
	cout << "output\n" <<"0 = false" << endl;
	cout << "1 = true\n" << endl;
	// using operation comparison 
	cout << "using ("<< a << " ==  "<< b << ")\t: " << (a == b ) << endl;
	cout << "using ("<< a << " !=  "<< b << ")\t: " << (a != b ) << endl;
	cout << "using ("<< a << " <  "<< b << ")\t: " << (a < b ) << endl; 	
	cout << "using ("<< a << " >  "<< b << ")\t: "<< (a > b ) << endl;
	cout << "using ("<< a << " <=  "<< b << ")\t: "<< (a <= b )<< endl;
	cout << "using ("<< a << " >=  "<< b << ")\t: "<< (a >= b ) <<endl <<endl;
	return 0;
	
}