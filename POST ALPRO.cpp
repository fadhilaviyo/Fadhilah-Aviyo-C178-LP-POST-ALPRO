#include <iostream>
#include <iomanip>
using namespace std;


struct KEDAI
{
	string nama;
	int pesananba;
	int pesanango;
	int agoreng;
	int abakar;
	double sdiskon;
	double totalag;
	double totalab;
	double totalha;
};
void inputKEDAI (KEDAI &kedai)
{
	kedai.agoreng = 17000;
	kedai.abakar = 21000;
	cout << "Masukkan Nama Pelanggan\t\t: ";
	getline (cin, kedai.nama);
	cout << "Masukkan Pesanan Ayam Goreng\t: ";
	cin >> kedai.pesanango;
	kedai.totalag = kedai.agoreng*kedai.pesanango;
	cout << "Masukkan Pesanan Ayam Bakar\t: ";
	cin >> kedai.pesananba;	
	kedai.totalab = kedai.abakar*kedai.pesananba;
	
	kedai.totalha = kedai.totalag + kedai.totalab;
	kedai.sdiskon = kedai.totalha - (kedai.totalha * 10/100);
	cout << "Total Harga\t\t\t: " << kedai.totalha << endl;

}
void dispKEDAI (KEDAI & kedai)
{
	cout << "\n==================== STRUK PEMBAYARAN ===================\n";
	cout << "|" << left << setw(20) << "Nama Pelanggan" << ": " << kedai.nama << "\t\t\t\t|" << endl;
	cout << "|" << left << setw(20) << "Ayam Goreng" << ": " << kedai.agoreng << left << setw(20) << "\tTotal Pesanan" << ": " << kedai.pesanango << "\t|" <<  endl;
	cout << "|" << left << setw(20) << "Ayam Bakar" << ": " << kedai.abakar << left << setw(20) << "\tTotal Pesanan" << ": " << kedai.pesananba << "\t|" << endl;
	cout << "|" << left << setw(20) << "Total Ayam Bakar" << ": " << kedai.totalag << "\t\t\t\t|" << endl;
	cout << "|" << left << setw(20) << "Total Ayam Goreng" << ": " << kedai.totalab << "\t\t\t\t|" << endl;
	
	if (kedai.totalha >= 45000)
	{
		cout << "|" << left << setw(20) << "Total Harga" << ": "<< kedai.totalha << "\t\t\t\t|" << endl;
		cout << "|" << left << setw(20) << "Diskon 10%" << ": " << kedai.totalha * 10/100 << "\t\t\t\t|" << endl;
		cout << "|" << left << setw(20) << "Total Harga" << ": " << kedai.sdiskon << "\t\t\t\t|";
	}
	else 
	{
		cout << "|" << left << setw(20) << "Total Harga" << ": "<< kedai.totalha << "\t\t\t\t|";
	}
	cout << "\n=========================================================\n";
}

int main()
{
	KEDAI kedai;
	
	cout << "INPUT MENU KEDAI\n";
	inputKEDAI (kedai);
	
	dispKEDAI (kedai);
	
	return 0;
	
}

