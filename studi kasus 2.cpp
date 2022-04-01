#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int pilih, ongkir, jumlah, total, harga, potbel, totbel, pot_ong, hasil_pot, akhir;
	string menu;
	float jarak;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "|          STORMI CHICKEN AND SEAFOOD          |\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	cout << "Pilihan Menu : \n";
	cout << "1.Ayam geprek\t: 21000" <<endl;
	cout << "2.Ayam goreng\t: 17000" <<endl;
	cout << "3.Udang goreng\t: 19000" << endl;
    cout << "4.Cumi goreng\t: 20000" << endl;
    cout << "5.Ayam bakar\t: 25000" << endl;
	cout << "Masukkan menu pilihan : ";
	cin >> pilih;
	cout << endl;
	
	switch(pilih)
  {
		case 1:
			menu="Ayam geprek";
			harga= 21000;
			cout<<"Jumlah pesanan : ";
			cin>>jumlah;
			total= harga*jumlah;
			break;
		case 2:
			menu= "Ayam goreng";
			harga= 17000;
			cout<<"Jumlah pesanan : ";
			cin>>jumlah;
			total= harga*jumlah;
			break;
		case 3:
			menu= "Udang goreng";
			harga= 19000;
			cout<<"Jumlah pesanan : "; 
			cin>>jumlah;
			total= harga*jumlah;
			break;
		case 4:
			menu= "Cumi goreng";
			harga= 20000;
			cout<<"Jumlah pesanan : ";
			cin>>jumlah;
			total= harga*jumlah;
			break;
		case 5:
			menu= "Ayam bakar";
			harga= 25000;
			cout << "Jumlah pesanan : ";
			cin>>jumlah;
			total= harga*jumlah;
			break;
		default:
			cout << "Menu yang Anda pilih tidak ada!";
	}
	
}
