#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct KTP
{
	string nik;
	string nama;
	string ttl;
	string jkelamin;
	string gdarah;
	string alamat;
	string rt_rw;
	string keldes;
	string kecamatan;
	string agama;
	string status;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku;
};

void inputKTP (KTP &ktp)
{
	cout << "Masukkan NIK\t\t\t: ";
	getline (cin, ktp.nik);
	cout << "Masukkan Nama\t\t\t: ";
	getline (cin, ktp.nama);
	cout << "Masukkan Tempat Tanggal Lahir\t: ";
	getline (cin, ktp.ttl);
	cout << "Masukkan Jenis Kelamin\t\t: ";
	getline (cin, ktp.jkelamin);
	cout << "Masukkan Golongan Darah\t\t: ";
	getline (cin, ktp.gdarah);
	cout << "Masukkan Alamat\t\t\t: ";
	getline (cin, ktp.alamat);
	cout << "Masukkan RT/RW\t\t\t: ";
	getline (cin, ktp.rt_rw);
	cout << "Kelurahan/Desa\t\t\t: ";
	getline (cin, ktp.keldes);
	cout << "Kecamatan\t\t\t: ";
	getline (cin, ktp.kecamatan);
	cout << "Masukkan Agama\t\t\t: ";
	getline (cin, ktp.agama);
	cout << "Masukkan Status Perkawinan\t: ";
	getline (cin, ktp.status);
	cout << "Masukkan Pekerjaan\t\t: ";
	getline (cin, ktp.pekerjaan);
	cout << "Masukkan Kewarganegaraan\t: ";
	getline (cin, ktp.kewarganegaraan);
	cout << "Masukkan Berlaku Hingga\t\t: ";
	getline (cin, ktp.berlaku);
}
void displayKTP (KTP &ktp)
{
	cout << "\n==================== SIMULASI KTP ====================\n";
	cout << left << setw(20) << "NIK" << ": " << ktp.nik << endl;
	cout << left << setw(20) << "Nama" << ": " << ktp.nama << endl;
	cout << left << setw(20) << "Tempat/Tanggal Lahir" << ": " << ktp.ttl << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << ktp.jkelamin << endl;
	cout << left << setw(20) << "Golongan Darah" << ": " << ktp.gdarah << endl;
	cout << left << setw(20) << "Alamat" << ": " << ktp.alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << ktp.rt_rw << endl;
	cout << left << setw(20) << "Kelurahan/Desa" << ": " << ktp.keldes << endl;
	cout << left << setw(20) << "Kecamatan" << ": " << ktp.kecamatan << endl;
	cout << left << setw(20) << "Agama" << ": " << ktp.agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << ktp.status << endl;
	cout << left << setw(20) << "Pekerjaan" << ": " << ktp.pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan" << ": " << ktp.kewarganegaraan << endl;
	cout << left << setw(20) << "Berlaku Hingga" << ": " << ktp.berlaku << endl;
	cout << "=====================================================\n";
}
int main()
{
	KTP ktp;
	
	cout << "INPUT DATA KTP\n";
	inputKTP (ktp);
	
	displayKTP (ktp);
	
	return 0;
	
}
