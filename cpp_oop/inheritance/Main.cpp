#include <iostream>
 
using namespace std;
 
class Father {
  protected:
    string name;
    double age;
	
	public:
	void setName(string n)
	{
		name = n;
	}

	 string getName(){
		 return name;
 	}
 	
 	void setAge(double a){
	 	age = a;
	 }
	 
	 double getAge(){
 		return age;
 	}
};

 
class Son: public Father{
  public:
  
};

int main()
{ 
	
	// create varable temporary
	string inputName;
	double inputAge, age;
	cout << "\t\t === Belajar menggunakan inheritance ===\n" << endl;
	cout << "Data Diri: " << endl;
	cout << "Nama : ";
	cin >> inputName;
	cout << "Umur : ";
	cin >> inputAge;
	cout << "\n" <<endl;	
	Son son1;
	
	son1.setName(inputName);
	cout << son1.getName();
	son1.setAge(inputAge);
	cout << " " << son1.getAge()<< endl;
  return 0;
}
