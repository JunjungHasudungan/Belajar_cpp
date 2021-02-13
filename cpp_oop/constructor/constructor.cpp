// call library
#include <iostream>
#include <string>
using namespace std;

	// create some class 
	class Human{
		// create some data member / properties and using public accsess modifier
		public:
 			double age;
			string name;
			string gender;
		
		// create some constructor from class with parameter
		Human(double inputAge, string inputName, string	inputGender){
		// recall data member with class name
		Human::name = inputName;
		Human::age = inputAge;
		Human::gender = inputGender;
		
		// call / output all data from class with data member and with static style call
		cout << "Name"  << "\t: " << Human::name << endl;
		cout << "Gender " << "\t: " << Human::gender << endl;
		cout << "Age " << "\t: " << Human::age << endl;
		cout << "\n" << endl;
	}	
};

int main(){
	cout << "\t\t=== Belajar Object constructor ===\n" << endl;

	// inizialitation object and fill it with value in parameters
	Human human1 = Human(27, "Junjung Hasudungan Sitorus", "Man");
	Human human2 = Human(22, "Caca cahyana", "Man");	
	Human human3 = Human(21, "octwiswe orilata sipangkar", "Female");	
		
	return 0;
}