#include <iostream>

using namespace std;

int main(){
	int matriks1[10][10], matriks2[10][10] , hasil[10][10]; // variable penampung nilai pada setiap matriks
	int baris, kolom; // variable penampung sementara pada jumlah baris dan kolom pada array
	int jumlah = 0; // variable penampung untuk total penjumlahan
	
	cout << "\t\t=== Belajar matriks penjumlahan dengan user input === \n" <<endl;
	
	cout << "Masukkan jumlah baris pada matriks\t: ";
	cin >> baris; 
	
	cout << "Masukkan jumlah kolom pada matriks\t: ";
	cin >> kolom; 
	cout << endl;	 

		cout << "Masukkan nilai pada matriks-1 : \n"; 
			for(int i = 0; i < baris; i++){ // write only
				for(int j = 0; j < kolom; j++){
					cout << "[" << i + 1 << "]" << "[" << j + 1 <<"] = "; 
					cin >> matriks1[i][j];
				}
				cout << endl;
			}
		cout <<"Masukkan nilai pada matriks-2 :\n";
			for(int i = 0; i < baris; i++){ // write only
				for(int j = 0; j < kolom; j++){
					cout <<"[" << i +1 <<"]" <<"["<< j + 1 <<"] = "; 	
					cin >> matriks2[i][j];
				}
				cout << endl;
			}

		cout << "\t=========" << endl;
		 	for(int i = 0; i < baris; i++){ // read only matriks-1
	 			for(int j = 0; j < kolom; j++){
				 	cout << "\t" << matriks1[i][j] << " ";
				 }
				 cout << endl;
	 		}
	 		
		cout << "\t=========" << endl;
		cout << "\t    +" << endl;
		cout << "\t=========" << endl;
		
			for(int i = 0; i < baris; i++){ // read only matriks-2
				for(int j = 0; j < kolom; j++){
					cout << "\t" << matriks2[i][j] << " "; 
				}
				cout << endl;
			}
		cout << "\t=========" << endl;
		cout << "\t    = " << endl;
		cout << "\t=========" << endl;
			for(int i = 0; i < baris; i++){ 
				for(int j = 0; j < kolom; j++){
					hasil[i][j] = matriks1[i][j] + matriks2[i][j];	
					cout <<"\t"<< hasil[i][j] << " ";
				} 
			cout << endl;
			}
		cout << "\t=========" << endl;
	
	
	return 0;
}