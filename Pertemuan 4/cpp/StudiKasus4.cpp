#include <iostream>
using namespace std;

class data {
public:
  void input();
  void proses();
  void output();

private:
  int a, usa, usi, pb, tp, tb, ts;
  float rpb;
};

void data::input() {
  cout << "Uang saku per-bulan? : ";
  cin >> usa;
  cout << "Berapa kali menerima uang saku? : ";
  cin >> a;
}

void data::proses() {
  for (int i = 1; i <= a; i++) {
    cout << "Banyak uang yang digunakan pada bulan ke-" << i << " : ";
    cin >> pb;
    usi = usa - pb;
    cout << "Uang sisa yang ditabung pada bulan ke-" << i << " : " << usi;
    tp = tp + pb;
    cout << endl;
  }
  rpb = tp / a;
  tb = (usa*a)-tp;
}

void data::output() {
  proses();
  cout << "Total pengeluaran untuk " << a << " bulan : " << tp << endl;
  cout << "Rata rata pengeluaran tiap bulan : " << rpb << endl;
  cout << "Jumlah tabungan untuk " << a << " bulan : " << tb;
}

int main() {
  data duid;

  duid.input();
  duid.output();
}