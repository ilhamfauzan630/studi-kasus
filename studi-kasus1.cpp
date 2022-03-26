#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class bensin{
	public:
		void pertalite(float liter){
			int harga;
			
			harga = liter * 7000;
			cout << "============STRUK BENSIN=================="<<endl;
			cout << "Total liter : "<<liter<<endl;
			cout << "Jenis bensin : Pertalite"<<endl;
			cout << "Total harga : RP "<<harga<<endl;
		}
		void pertamax(float liter){
			int harga;
			
			harga = liter * 9000;
			
			cout << "============STRUK BENSIN=================="<<endl;
			cout << "Total liter : "<<liter<<endl;
			cout << "Jenis bensin : Pertamax"<<endl;
			cout << "Total harga : "<<harga<<endl;
		}
};


int main(){
	bensin bsn;
	string nama;
	float liter;
	int bensin1;
	
	cout << "====================PERTAMINA===================="<<endl;
	cout << "Program SPBU"<<endl;
	cout << "Tuliskan nama : ";
	getline(cin,nama);
	cout << "pilih Bensin : "<<endl;
	cout << "1. Pertalite"<<endl;
	cout << "2. Pertamax"<<endl;
	cout << "input :";
	cin >> bensin1;
	
	cout << "Liter : ";
	cin >>liter;
	
	switch (bensin1){
		case 1:
			bsn.pertalite(liter);
			cout << "Nama Pelanggan : "<<nama<<endl;
			cout << "=================terima kasih================"<<endl;
			cout << "============Silakan datang kembali===========";
			break;
		case 2:
			bsn.pertamax(liter);
			cout << "Nama Pelanggan : "<<nama<<endl;
			cout << "=================terima kasih================"<<endl;
			cout << "============Silakan datang kembali===========";
			break;
			
		default:
			cout << "silakan inputkan dengan benar"<<endl;
			cout << "keluar program";
			
			break;
	}
	
	
	getch();
	return 0;
}
