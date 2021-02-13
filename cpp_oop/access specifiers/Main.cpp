#include <iostream>
#include <string>

using namespace std;

// create some class
class Human{
// access specifiers
	public: 
// data member
	string name; 	
	double age;
	string gender;
};

int main(){
// inzialitation an object
	Human human1; 
	Human human2;
	
	// set value in data members
	human1.name = "Junjung Hasudungan Sitorus"; 
	human1.gender = "Man";
	human1.age = 27;
	human2.name = "Octyswe orilata sipangkar"; 
	human2.gender = "Female";
	human2.age = 27;
	
	cout << "\t\t === Belajar pengenalan tentang access specifiers === \n" << endl;
	// print output value with call object and data members
	cout << "Name" << "\t: " << human1.name << endl;
	cout << "Gender" << "\t: " << human1.gender << endl;
	cout << "Age" << "\t: " << human1.age << endl;
	cout << "\n" << endl;
	cout << "Name" << "\t: " << human2.name << endl;
	cout << "Gender" << "\t: " << human2.gender << endl;
	cout << "Age" << "\t: " << human2.age << endl;
	return 0;
}
