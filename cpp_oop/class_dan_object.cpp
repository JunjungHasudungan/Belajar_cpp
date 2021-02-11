#include <iostream>
using namespace std;

// create some class
class Human
{
	// create some data function using public visibility
public:
	void display( string name, int age)
	{
		std::cout<< "my name is: "<< name << "\n"<< "my age is: "<< age << std::endl;
	}
	void eat()
	{
		std::cout<< "can be eat"<< std::endl;
	}
};

int main(int argc, char const *argv[])
{
	// inizialitation object
	Human human1;
	human1.display("Hasudungan", 27);
	human1.eat();
	return 0;
}