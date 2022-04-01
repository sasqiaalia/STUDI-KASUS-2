/*
  KRISNA CAKRA NINGRAT (2100018449)
  ANELA INDRA (2100018454)
  SASQIA AULIA NUR AINI (2100018456)
*/

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
	cout << "1.Ayam geprek\t: 21000" << endl;
	cout << "2.Ayam goreng\t: 17000" << endl;
	cout << "3.Udang goreng\t: 19000" << endl;
    cout << "4.Cumi goreng\t: 20000" << endl;
    cout << "5.Ayam bakar\t: 25000" << endl;
	cout << "Masukkan menu pilihan : ";
	cin >> pilih;
	cout << endl;
	
	switch (pilih)
  {
		case 1:
			menu ="Ayam geprek";
			harga = 21000;
			cout << "Jumlah pesanan : ";
			cin >> jumlah;
			total = harga * jumlah;
			break;
		case 2:
			menu = "Ayam goreng";
			harga = 17000;
			cout << "Jumlah pesanan : ";
			cin >> jumlah;
			total = harga * jumlah;
			break;
		case 3:
			menu = "Udang goreng";
			harga = 19000;
			cout << "Jumlah pesanan : "; 
			cin >> jumlah;
			total = harga * jumlah;
			break;
		case 4:
			menu = "Cumi goreng";
			harga = 20000;
			cout << "Jumlah pesanan : ";
			cin >> jumlah;
			total = harga * jumlah;
			break;
		case 5:
			menu = "Ayam bakar";
			harga = 25000;
			cout << "Jumlah pesanan : ";
			cin >> jumlah;
			total = harga * jumlah;
			break;
		default:
			cout << "Menu yang Anda pilih tidak ada!";
	}
	
	cout << "Masukkan pilihan jarak rumah anda (KM) : ";
	cin >> jarak;
	cout << endl;
	if ( jarak < 3){
		cout << "Anda mendapat ongkir sebanyak 15000\n";
		ongkir = 15000;
		cout << "Total ongkir = " << ongkir;
	}
	else if (jarak >= 3) {
		cout << "Anda mendapat ongkir sebanyak 25000\n";
		ongkir = 25000;
		cout << "Total ongkir = " << ongkir;	
	}
	else {
		cout<<"!!!";
	}
	
	cout <<"\nTotal = " << total << endl;
	cout << "===========================\n";
	
	if (total > 25000 && total <= 50000){
		cout << "Potongan biaya ongkir 3000" << endl;
		pot_ong = 3000;
		hasil_pot = ongkir - pot_ong;
		potbel = 0 ;
		totbel = total - potbel;
		akhir = total - potbel + hasil_pot;
	}
	else if (total > 50000 && total <= 150000){
		cout << "Potongan biaya ongkir 5000 dan diskon 15%" << endl;
		pot_ong = 5000;
		hasil_pot = ongkir - pot_ong;
		potbel = total * 0.15;
		totbel = total - potbel;
		akhir = total - potbel + hasil_pot;
	}
	else if (total > 150000){
		cout << "Potongan biaya ongkir 8000 dan diskon 35%" << endl;
		pot_ong = 8000;
		hasil_pot = ongkir - pot_ong;
		potbel = total * 0.35;
		totbel = total - potbel;
		akhir = total - potbel + hasil_pot;
	}
	else {
		cout << "Tidak mendapat potongan!";
	}
	
	cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "|                 STRUK PEMBAYARAN               |" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Pilihan Menu\t: " << "\n" << menu << endl;
	cout << jumlah << " x " << harga << "\t\t: Rp. " << total << endl;
	cout << "===================================================" << endl;
	cout << "JUMLAH\t\t\t: Rp. " << total << endl;
	cout << "ONGKIR\t\t\t: Rp. " << ongkir << endl;
	cout << "POTONGAN BELANJA\t: Rp. " << potbel << endl;
	cout << "POTONGAN ONGKIR\t\t: Rp. " << pot_ong << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "TOTAL\t\t\t: Rp. " << akhir << endl;
	cout << "===================================================" << endl;
	return 0;
}
