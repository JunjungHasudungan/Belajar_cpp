#include <iostream>

using namespace std;

class Son{

	public:
		int jumlah, harga;
	
	Son(){
		harga = 0;	
	}
};
	// definisi fuction
	int tampilkan(int harga);

	int main(){
		int harga[4] = {10000, 20000, 30000, 40000};
		int inputA, inputB, total;
	
	Son son1;

	cout << "\t\t === Harga per item ====\n" << endl;
	
	for(int i = 0; i < 4; i++){
		cout << i+1 << "."<< harga[i] << endl;
	}	
	
	// cout << "Masukkan jumlah";
	// cin >>inputA;
	
	
	return 0;
}