#include <iostream>

using namespace std;

int main(){
	int matriks1[10][10], matriks2[10][10]; // variable penampung nilai pada setiap matriks
	int barisMatriks1, kolomMatriks1, bariskMatriks2, kolomMatriks2; // variable penampung sementara pada jumlah baris dan kolom pada array
	int jumlah = 0; // variable penampung untuk total penjumlahan
	
	cout << "\t\t=== Belajar matriks penjumlahan dengan user input === \n" <<endl;
	
	cout << "Masukkan jumlah baris pada matriks-1\t: ";
	cin >> barisMatriks1; //barisMatriks1
	
	cout << "Masukkan jumlah kolom pada matriks-1\t: ";
	cin >> kolomMatriks1; // kolomMatriks1
	cout << endl;
	cout << "Masukkan jumlah baris pada matriks-2\t: ";
	cin >> bariskMatriks2; // bariskMatriks2
	
	cout << "Masukkan jumlah kolom pada matriks-2\t: ";
	cin >> kolomMatriks2; // kolomMatriks2
	 
	if( kolomMatriks1 != barisMatriks1 || kolomMatriks2 != bariskMatriks2){ // check jumlah baris dan kolom pada kedua penampung nilai matriks 
		cout << "\t!!!JUMLAH BARIS DAN KOLOM TIDAK SAMA DENGAN YANG LAIN !!!" <<endl;
	}
	else{
		//cout << endl;
		cout << "Masukkan nilai pada matriks-1 : \n"; // nilai matriks -1
			for(int i = 0; i < barisMatriks1; i++){ // write only
				for(int j = 0; j < kolomMatriks1; j++){
					cout << "[" << i + 1 << "]" << "[" << j + 1 <<"] = "; 
					cin >> matriks1[i][j];
				}
				cout << endl;
			}
		cout <<"Masukkan nilai pada matriks-2 :\n";
			for(int i = 0; i < bariskMatriks2; i++){
				for(int j = 0; j < kolomMatriks2; j++){
					cout <<"[" << i +1 <<"]" <<"["<< j + 1 <<"] = "; // create only	
					cin >> matriks2[i][j];
				}
				cout << endl;
			}
		cout << "Matriks-1" <<endl;
		cout << "\t=========" << endl;
		 	for(int i = 0; i < barisMatriks1; i++){ // read only matriks-1
	 			for(int j = 0; j < kolomMatriks1; j++){
				 	cout << "\t" << matriks1[i][j] << " " <<"";
				 }
				 cout << endl;
	 		}
	 		
		cout << "\t=========" << endl;
		cout << "\t    +" << endl;
		cout << "\t=========" << endl;
		
			for(int i = 0; i < bariskMatriks2; i++){ // read only matriks-2
				for(int j = 0; j < kolomMatriks2	; j++){
					cout << "\t" << matriks2[i][j] << " "; 
				}
				cout << endl;
			}
		cout << "\t=========" << endl;
		cout << "\t    = " << endl;
		cout << "\t=========" << endl;
	}	
	
	return 0;
}