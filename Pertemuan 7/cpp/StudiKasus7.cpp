#include <iostream>
using namespace std;

class data {
public:
  void input();
  void proses();
  void urut();
  void output();

private:
  int nim[50], telp[50], anim, pil;
  int jumlah, search, x = 0;
  string nama[50], prodi[50];
};

void data::input() {
  cout << "Jumlah data yang ingin dimasukkan : ";
  cin >> jumlah;
  for (int i = 1; i <= jumlah; i++) {
    cout << "Masukkan nama mahasiswa ke-" << i << " : ";
    cin >> nama[i];
    cout << "Masukkan nim mahasiswa ke-" << i << " : ";
    cin >> nim[i];
    cout << "Masukkan prodi mahasiswa ke-" << i << " : ";
    cin >> prodi[i];
    cout << "Masukkan no.telp mahasiswa ke-" << i << " : ";
    cin >> telp[i];
    cout << endl;
  }
  system("clear");

  // output data NIM
  cout << "Data NIM yang telah dimasukkan :";
  for (int i = 1; i <= jumlah; i++) {
    cout << nim[i] << " ";
  }

  cout << "\nMencari data mahasiswa menggunakan NIM" << endl;
  cout << "Masukkan NIM : ";
  cin >> search;
}

void data::proses() {
  // Cari menggunakan NIM
  for (int i = 1; i <= jumlah; i++) {
    if (nim[i] == search) {
      x = 1;
      cout << "Berikut data yang anda cari : " << endl;
      cout << "Nama : " << nama[i];
      cout << "\nNIM : " << nim[i];
      cout << "\nProdi : " << prodi[i];
      cout << "\nNo.Telp : " << telp[i];
      cout << endl;
    }
  }
  urut();
}
void data::urut() {
  cout << "\nMengurutkan data NIM : \n1. ascending\n2. descending" << endl;
  cout << "Pilihanmu : ";
  cin >> pil;

  if (pil == 1) {
    // NIM ascending
    for (int i = 1; i <= jumlah; i++) {
      for (int j = 1; j <= jumlah; j++) {
        if (nim[i] < nim[j]) {
          anim = nim[i];
          nim[i] = nim[j];
          nim[j] = anim;
        }
      }
    }
    cout << "Data NIM yang diurutkan secara ascending : ";
    for (int i = 1; i <= jumlah; i++) {
      cout << nim[i] << " ";
    }
  } else if (pil == 2) {
    // NIM descending
    for (int i = 1; i <= jumlah; i++) {
      for (int j = 1; j <= jumlah; j++) {
        if (nim[i] > nim[j]) {
          anim = nim[i];
          nim[i] = nim[j];
          nim[j] = anim;
        }
      }
    }
    cout << "Data NIM yang diurutkan secara descending : ";
    for (int i = 1; i <= jumlah; i++) {
      cout << nim[i] << " ";
    }
  } else {
    cout << "Pilihan tidak sesuai!" << endl;
    system("clear");
    urut();
  }
}
void data::output() { proses(); }

int main() {
  data angka;

  angka.input();
  angka.output();

  return 0;
}