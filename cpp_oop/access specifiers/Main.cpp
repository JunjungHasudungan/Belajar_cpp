#include <iostream>
#include <string>

using namespace std;

// create some class
class Human{
// access specifiers
	public: 
		string name; 	
		double age;
		string gender;
	
	public:
	Human(string inputName, double inputAge, string inputGender){
		Human::name = inputName;
		Human::age = inputAge;
		Human::gender = inputGender;
	}

// create some void function to show all values in human class
	void showDataHuman(){
		cout << "public keyword data members" <<endl;
		cout << "Name\t: " << name << endl;
		cout << "Age\t: " << age << endl;
		cout << "Gender\t: " << gender << "\n" <<endl;
	}
};
class Fruit{
// create protected keyword
	protected:
	string name;
	
// create construct must be public keyword
	public:
	Fruit(string inputName){
		Fruit::name = inputName;
	}	
// create void function to output all value in class
	void showDataFruit(){
		cout << "protected keyword in data member" <<endl;
		cout << "Name\t: " << name <<"\n" <<endl;
	}
};
class Product{
// access specifiers
	private:
// data member
	double diskon;
	string name;
	
// construct must be public 
	public:
	Product(double inputDiskon, string inputName){
	Product::name = inputName;
	Product::diskon = inputDiskon;
	}	

// create some function to show all data values in Product class
	void showDataProduct(void){
		cout <<"private keyword in data members"<< endl;
		cout << "Name\t: " <<  name <<endl;
		cout << "Diskon\t: " << diskon << "\n" <<endl;
	}
};

int main(){
	// inzialitation an object
 	
	 // set value in data members in Human class	
	Human human1("Junjung Hasudungan Sitorus", 27, "Man"); 
	Human human2("Octyswe orilata sipangkar", 27, "Female");
	 // set value in data members in Product class	
	Product product1(20, "Laptop Asus");	
	Product product2(10, "Axioo");
	// set value in data member in Fruit class
	Fruit fruit1("Apple");	
	cout << "\t\t === Belajar pengenalan tentang access specifiers public, protected, private keyword === \n" << endl;
	// print output value with with void function
	product1.showDataProduct();
	product2.showDataProduct();	
	human1.showDataHuman();
	human2.showDataHuman();
	fruit1.showDataFruit();
	return 0;
}
