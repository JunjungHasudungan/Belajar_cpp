#include <iostream>
#include <string>

using namespace std;

class Human{
	public:
		string name;
		double age;
	
	void setName(string inputName){
		name = inputName;
	}
	
	string getName(){
		return name;
	}
	
};

main(){

Human human1;
human1.setName("Hasudungan");
cout << human1.getName();	
}