#include <iostream>

using namespace std;

int main(){
	string nama[10];
	int i = 0;
	while( i < 10){
		cout << "[" << i+1 << "]."<< "Masukkan nama:";
		cin >> nama[i];
		i++; 
	}

	while( i < 10){
		cout << "Nama: "<< "[" << i+1 << "]."<< i << nama[i];
		// cin >> nama[i];
		i++; 
	}	
	
		
	return 0;
}


/*
15-02-20
antar tas kekantor ibu = 20.000

16-02-20
antar merick, priscle ke sekolah = 18.000
antar pulang merick ke rumah = 18.000

Note: 
potong yang dari kemarin 305.000, jadi saya hutang 3.000

17-02-20
antar merick, priscle ke sekolah = 18.000
antar pulang merick ke rumah = 18.000

18-02-20
antar merick, priscle ke sekolah = 18.000
antar pulang merick ke rumah = 18.000

Total = 89.000;

22-02-20
antar merick, moishes, priscle ke sekolah = 18.000
antar pulang moishes ke rumah = 18.000
antar pulang merick ke rumah = 18.000

23-02-20
antar merick, priscle ke sekolah = 18.000
antar pulang moishes ke rumah = 18.000
antar pergi monang kesekolah = 18.000
antar pulang monang kerumah = 18.000

24-02-20
antar merick, moishes, priscle ke sekolah = 18.000
antar pulang moishes ke rumah = 18.000
antar pulang merick ke rumah = 18.000

25-02-20
antar merick, moishes, priscle ke sekolah = 18.000
antar pulang moishes ke rumah = 18.000
antar pulang merick ke rumah = 18.000
Total = 180.000

180.000 + 89.000;
Total keseluruhan = 269.000;

*/


