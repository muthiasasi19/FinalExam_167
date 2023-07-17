#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string namaProduk;
	int jumlahProduk;
	string tipeProduk;
	Node* next;

};

	class ManajemenProduk {
private:
    Node* head;

public:
    ManajemenProduk() {
        head = NULL;
    }

    void tambahProduk() {
        string namaProduk;
        int jumlahProduk;
        string tipeProduk;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, namaProduk);
		cout << "Jumlah Produk : ";
		cin >> jumlahProduk;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipeProduk);

		Node* newNode = new Node;
		newNode->namaProduk = namaProduk;
		newNode->jumlahProduk = jumlahProduk;
		newNode->tipeProduk = tipeProduk;
		newNode->next = NULL;

		 if (head == NULL) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        cout << "Produk berhasil ditambahkan!" << endl;
    }

    void tampilkanSemuaProduk() {
        cout << "========== SEMUA DATA PRODUK ==========" << endl;

		   if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			int posisi = 1;

			while (current != NULL) {
				cout << "Data Produk ke-" << posisi << endl;
				cout << "Nama Produk  : " << current->namaProduk << endl;
				cout << "Jumlah Produk: " << current->jumlahProduk << endl;
				cout << "Tipe Produk  : " << current->tipeProduk << endl;
				cout << endl;

				current = current->next;
				posisi++;
				 }
        }
    }

    void cariProdukByNama() {
		string namaProduk;
        cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;

        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            string namaProduk;
            cout << "Nama Produk yang dicari: ";
            getline(cin, namaProduk);

            Node* current = head;
            int posisi = 0;
            bool ditemukan = false;

			 while (current != NULL) {
				posisi++;

				if (current->namaProduk == namaProduk) {
					cout << "Data Produk ke-" << posisi << endl;
					cout << "Nama Produk  : " << current->namaProduk << endl;
					cout << "Jumlah Produk: " << current->jumlahProduk << endl;
					cout << "Tipe Produk  : " << current->tipeProduk << endl;
					cout << endl;

					ditemukan = true;
				}

				 }

                current = current->next;
            }

          
                cout << "Nama produk " << namaProduk << " TIDAK DITEMUKAN" << endl;
            
        }
	};

	void algoritmaSortByJumlahProduk() {
		Node* head;

		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}

		Node* current;
		Node* last = NULL;
		bool swap;
		

		do {
			swap = false;
			current = head;

			while (current->next != last) {
				if (current->jumlahProduk < current->next->jumlahProduk) {
					// Tukar posisi node jika jumlah produk lebih kecil
					swap(current, current->next);
					swap = true;
				}
				current = current->next;
			}

			last = current;
		} while (swap);
	}

int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
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
}/*2.  - Menambahkan produk menggunakan single linked list	- Mencari produk menggunakan linear Seacrh	- algoritmaSortbyJumlah Produk menggunakan insertion sort 3.   Queue merupakan struktur data yang menggunakan skema FIFO (First-In-First-Out) disusun secara sekuensial (berurutan).Queue memiliki variabel penunjuk yaitu; FRONT dan REARQueue memiliki operator; Enqueue (Proses memasukkan data dalam antrian), dan Dequeue (Proses mengeluarkan data dalam antrian)Penyelesaian  kasus pada gambar yg trdpt pada soal yaitu,menggunakan operator dequeue utk mengeluarkan data pada node 4 (10), sebelum dihapus atau dikerluarkan posisi FRONT berada pada indeks ke 3. setelah dikeluarkan/dihapus, posisi FRONT akan sama dengan posisi REAR, karena hanya tersisa 1 node saja.Dan, jika indeks ke 4 dikeluarkan, maka posisi FRONT dan REAR akan berada pada -1 (kosong).4. Algoritma Stack digunakan saat menggunakan prinsip atau skema  LIFO (Last-In-First-Out). contoh dalam kehidupan sehari hari yaitu ketika mengambil sebuah buku di tumpukan buku dalam kardus5. a. Dept of tree dari gambar tsb sama dengan jmlh level of tree yaitu  55.b. PreOrder = 50 48 30 20 15 25 32 31 35 65 67 66 69 70 90 98 94 99*/