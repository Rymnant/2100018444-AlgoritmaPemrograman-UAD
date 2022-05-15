#include <iostream>
using namespace std;

/*var a = sebelum diskon
  var b = diskon 10%
  var c = diskon 5%
*/

class data{
public:
  void info();
  void batas();
  void batas2();
  void input();
  void proses();
  int perkalian(int harga, int tambah);
  void output();

private:
  string nama;
  int nim, harga, x, tambah, a, b, c;
  string matkul[50];
  int jumlah[50];
};

void data::batas() {
  for (int i = 1; i <= 40; i++) {
    cout << "=";
  }
  cout << endl;
}

void data::batas2() {
  for (int i = 1; i <= 40; i++) {
    cout << "-";
  }
  cout << endl;
}

void data::info() {
  cout << "Mata kuliah yang tersedia : \n(1) Akhlak\n(2) Alpro\n(3) "
          "AlinMatriks\n(4) Arsikom\n(5) B.Indonesia\n(6) Matdis\n(7) "
          "PWeb\n(8) PKN"
       << endl;
}

void data::input() {
  cout << "Masukkan Nama : ";
  getline(cin, nama);
  cout << "Masukkan NIM : ";
  cin >> nim;
  cout << "Jumlah mata kuliah yang ingin diambil : ";
  cin >> x;
  for (int i = 1; i <= x; i++) {
    cout << "Nama mata kuliah ke-" << i << " : ";
    cin >> matkul[i];
    cout << "Jumlah SKS yang ingin diambil : ";
    cin >> jumlah[i];
  }
}

/*Rekursif*/
int data::perkalian(int harga, int tambah){
  if(tambah==0){
    return 0;
  }return harga+perkalian(harga,tambah-1);
}

void data::proses() {
  harga = 120000;
  tambah = 0;
  /*TotalSKS*/
  for (int i = 1; i <= x; i++) {
    tambah += jumlah[i];
  }
  /*HitungHarga*/
  a = perkalian(harga,tambah);
  b = a - (a * 10 / 100);
  c = b - (b * 5 / 100);
}

void data::output() {
  cout << "Nama Mahasiswa : " << nama << endl;
  cout << "NIM : " << nim << endl;
  cout << "Mata kuliah yang diambil" << endl;
  for (int i = 1; i <= x; i++) {
    cout << matkul[i] << " dengan " << jumlah[i] << " sks" << endl;
  }
  proses();
  cout << "Total SKS yang diambil : " << tambah << endl;
  batas2();
  cout << "Harga awal : " << a << endl;
  cout << "Harga diskon : " << c << endl;
}

int main() {
  data mhs;

  mhs.info();
  mhs.batas();
  mhs.input();
  mhs.batas();
  mhs.output();
}