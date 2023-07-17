#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 50;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;

			cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}
void tampilkanSemuaMahasiswa() {
	cout << "========== MAHASISWA ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM    : " << NIM[i] << endl;
		cout << "Nama   : " << nama[i] << endl;
		cout << "Tahun  : " << tahunMasuk[i] << endl;
		cout << "----------------------" << endl;
	}
}

void algorithmacariMahasiswaByNIM() {
	int cariNIM;
	cout << "Masukkan NIM yang ingin dicari: ";
	cin >> cariNIM;
	cin.ignore();

	bool ditemukan = false;
	cout << "========== HASIL PENCARIAN ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == cariNIM) {
			cout << "NIM    : " << NIM[i] << endl;
			cout << "Nama   : " << nama[i] << endl;
			cout << "Tahun  : " << tahunMasuk[i] << endl;
			cout << "-------------------------------------" << endl;
			ditemukan = true;
		}
	}

}
void algorithmaSortByTahunMasuk() {
	for (int i = 1; i < jumlahMahasiswa; i++) { // looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < jumlahMahasiswa - i; j++) {
			if (tahunMasuk[j] > tahunMasuk[j + 1]) {
				swap(NIM[j], NIM[j + 1]);					// kalo ada data yang lebih besar dari sebelumnya maka akan di sortir
				swap(nama[j], nama[j + 1]);
				swap(tahunMasuk[j], tahunMasuk[j + 1]);
			}

		}
	}
	cout << "========== MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM    : " << NIM[i] << endl;
		cout << "Nama   : " << nama[i] << endl;
		cout << "Tahun  : " << tahunMasuk[i] << endl;
		cout << "-------------------------------------" << endl;
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}



//2. 1. Algoritma tambahMahasiswa: si pengguna memasukkan data mahasiswa. terus di tambahkan ke dalam array
//	 2. Algoritma tampilkanSemuaMahasiswa: ini untuk menampilkan semua data mahasiswa yang ada di dalam array tadi
//   3. Algoritma cariMahasiswaByNIM: si pengguna memasukan nim yang ingin di cari. terus dicari dan ditampilkan data mahasiswa sesuai nim tadi
//   4. Algoritma sortMahasiswaByTahunMasuk: disini data mahasiswa di urutkan berdasarkan tahun ajaran masuk menggunakan alogirtma bubble short kalau ngga salah,terus ditampilkan data mahasiswa yang sudah terurut.


//3. kalau algoritma stack = stack ini menggunakan prinsip LIFO = Last In First Out, nah maksudnya ini elemen terakhir yang dimasukan akan menjadi element pertama yang di hapus, operasi yang di pakai stack ini push(menambahkan elemen ke dalam stack), dan pop (menghapus elemen dari stack tadi)
//  sedangkan queue = queue ini menggunakan prinsip FIFO = First In First Out, nah maksudnya ini elemen pertama yang dimasukan akan menjadi element pertama pula yang di hapus,operasi yang di pakai queue ini enqueue(menambahkan elemen ke dalam queue), dan dequeue(menghapus elemen dari queue tadi).

//4.
//Stack dapat digunakan untuk membalik urutan elemen dalam string atau array.Setiap elemen dimasukkan ke dalam stack, kemudian diambil kembali dari stack untuk mendapatkan urutan yang terbalik mirip dengan penjelas nomor 3.
//Dalam contoh program di atas, tidak ada penggunaan algoritma stack karena tidak ada kebutuhan yang spesifik yang membutuhkan struktur data stack.

//5. a. 4
	// in benar
	// preoder benar
	// post benar