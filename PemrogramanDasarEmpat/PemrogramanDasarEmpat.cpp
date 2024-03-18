#include <iostream>
using namespace std;

int nTelor, nmie, nAqua;
int hTelor = 2000, hMie = 2800, hAqua = 3000;
string nama;

void input()
{
	cout << "Masukan Nama = ";
	cin >> nama;
	cout << "Masukan Jumlah Telor = ";
	cin >> nTelor;
	cout << "Masukan Jumlah Mie = ";
	cin >> nmie;
	cout << "Masukan Jumlah Air Mineral  = ";
	cin >> nAqua;
}

int hitungHarga() {
	return (nTelor * hTelor) + (nmie * hMie) + (nAqua * hAqua);
}

void display() {
	cout << " Nama = " << nama << endl;
	cout << "Jumlah Telor = " << nTelor << endl;
	cout << "Jumlah Mie = " << nmie << endl;
	cout << "Jumlah Aqua = " << nAqua << endl;
	cout << "Hitung harga Rp. = " << hitungHarga() << endl;

}

int main()
{

	char pilihan;
	do
	{
		input();
		display();

		cout << "Apakah anda ingin mengulang (y/n) ? ";
		cin >> pilihan;



		system("cls");


	} while (pilihan == 'y' || pilihan == 'Y');



}