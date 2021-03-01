#include <iostream>

using namespace std;

int main(){
	string name[4]  = {"Junjung Hasudungan", "Rendi", "Caca Cahyana"};
	
	cout << "\t\t === Memperkenalkan array ===\n" <<endl;
	
int val;
  int max = 10;
  int arr[max][max];

  for(int i = 0; i < max; i++){
      for(int j = 0; j < max; j++){
        cin >> val;
        arr[j][i] = val;
      }
  }
	
}