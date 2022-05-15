#include <iostream>

using namespace std;

class data {

public:
  void input();
  void output();
  void proses();

private:
  string nama, matkul;
  int n, nilai[50], max, min, tambah;
  float rata;
};

void data::input() {
  cout << "Nama Dosen : ";
  getline(cin, nama);
  cout << "Mata kuliah : ";
  getline(cin, matkul);
  cout << "Jumlah data yang ingin dimasukkan : ";
  cin >> n;
}

void data::proses() {
  for (int i = 1; i <= n; i++) {
    cout << "Masukkan data ke-" << i << " : ";
    cin >> nilai[i];
  }
  /*MaxMin*/
  max = nilai[1];
  min = nilai[1];
  for (int i = 1; i <= n; i++)
    if (max < nilai[i])
      max = nilai[i];
    else if (min > nilai[i])
      min = nilai[i];
  /*Ratarata*/
  tambah = 0;
  for (int i = 1; i <= n; i++) {
    tambah += nilai[i];
  }
  rata = tambah / n;
}

void data::output() {
  cout << "Nama Dosen : " << nama << endl;
  cout << "Mata kuliah : " << matkul << endl;
  cout << "Nilai yang dimasukkan : ";
  for (int i = 1; i <= n; i++) {
    cout << nilai[i] << " ";
  }
  cout << "\nNilai max : " << max;
  cout << "\nNilai min : " << min;
  cout << "\nRata rata : " << rata;
}

int main() {
  data angka;

  angka.input();
  angka.proses();

  cout<<"=================="<<endl;
  
  angka.output();
}