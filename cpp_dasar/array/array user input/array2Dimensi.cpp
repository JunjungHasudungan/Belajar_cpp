#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int array2Dimensi[4][4];
	
	cout << "\t\t === Belajar mengenal array 2 dimensi ===\n" <<endl;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "  Nilai array : "<< "[" << i << "]" << "[" << j <<"] = "; // inputan
			cin >> array2Dimensi[i][j];
		}
		cout << endl;
	}
	
	for(int k = 0; k < 4; k++){
		for(int l = 0; l < 4; l++){
			cout << array2Dimensi[k][l] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}