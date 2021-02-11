#include <iostream>

using namespace std;

class Human
{
public:
	void display(string name, double age)
	{
		std::cout<< "my name is"<< name << "\n" << "and my age is: " << age <<std::endl;
	}
};

int main(int argc, char const *argv[])
{
	Human human1;

	human1.display(" Hasudungan ", 27);
	return 0;
}
