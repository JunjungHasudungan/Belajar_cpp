#include <iostream>

using namespace std;
void show(); // declaration function
void showName( string name );
void add( int a, int b);

int main(){
	cout << "\t\t === Belajar menggunakan function void ===\n" << endl;
	show();
	showName("function ini menggunakan parameter");
	add(3, 4);
	
	return 0;		
}

void show(){
	cout << "function ini void tanpa parameter" << endl;
	}

void showName(string name){
	cout <<name << endl;
}

void add(int a, int b){
	printf("%d + %d  = %d\n", a, b, a + b );
} 