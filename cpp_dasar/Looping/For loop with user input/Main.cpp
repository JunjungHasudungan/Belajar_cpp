#include <iostream>

using namespace std;

int main(){
	int a, penampung;
	int i = 0;
	
	cout << "Masukkan Jumlah nilai :";
	cin>> penampung;
	
	for(i; i < penampung; i++ ){
		cout << "Masukkan nilai "<< "[" << i + 1 <<"] : ";
		cin >> a;
	}
	
	return 0;
}