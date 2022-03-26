#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;

class bensin{
	public:
		void pertalite(float liter,string nama){
			int harga;
			
			harga = liter * 7000;
			cout << "============STRUK BENSIN=================="<<endl;
			cout << "Total liter : "<<liter<<endl;
			cout << "Jenis bensin : Pertalite"<<endl;
			cout << "Total harga : RP "<<harga<<endl;
			cout << "Nama pelanggan : "<<nama <<endl;
			cout << "=================terima kasih================"<<endl;
			cout << "============Silakan datang kembali===========";
			
			ofstream myfile;
			myfile.open("SPBU.txt");
	
			myfile << "==============STRUK BENSIN===================="<<endl;
			myfile << "Total liter : "<<liter<<endl;
			myfile << "Jenis bensin : Pertalite"<<endl;
			myfile << "Total harga : RP "<<harga<<endl;
			myfile << "Nama pelanggan : "<<nama <<endl;
			myfile << "=================terima kasih================"<<endl;
			myfile << "============Silakan datang kembali===========";
			
			myfile.close();
		
		}
		
		void pertamax(float liter, string nama){
			int harga;
			
			harga = liter * 9000;
			
			cout << "============STRUK BENSIN=================="<<endl;
			cout << "Total liter : "<<liter<<endl;
			cout << "Jenis bensin : Pertamax"<<endl;
			cout << "Total harga : "<<harga<<endl;
			cout << "Nama pelanggan : "<<nama<<endl;
			cout << "=================terima kasih================"<<endl;
			cout << "============Silakan datang kembali===========";
			
			ofstream myfile;
			myfile.open("SPBU.txt");
	
			myfile << "==============STRUK BENSIN===================="<<endl;
			myfile << "Total liter : "<<liter<<endl;
			myfile << "Jenis bensin : Pertalite"<<endl;
			myfile << "Total harga : RP "<<harga<<endl;
			myfile << "Nama pelanggan : "<<nama<<endl;
			myfile << "=================terima kasih================"<<endl;
			myfile << "============Silakan datang kembali===========";
			
			myfile.close();
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
			bsn.pertalite(liter,nama);
			
			break;
			
		case 2:
			bsn.pertamax(liter,nama);
			
			break;
			
		default:
			cout << "silakan inputkan dengan benar"<<endl;
			cout << "keluar program";
			break;
	}
	
	
	getch();
	return 0;
}
