#include <iostream>
#include <string>
using namespace std;

/* a=nama;
b=nim mahasiswa;
c=jumlah sks;
d=total pembayaran;
*/

class sk{
  public:
    void nama();
    void nim();
    int awal(int harga, int c);
    void output();
  private:
    int b,d;
    string a;
};

void sk::nama(){
  getline(cin,a);
  }
void sk::nim(){
  cin>>b;
}

int sk::awal(int harga, int c){
    if(harga<c)
    {
        return awal(c,harga);
    }
    else if(c!=0){
            return (harga+awal(harga,c-1));
    }
    else{
        return 0;
    }
}

void sk::output(){
  cout<<"Nama mahasiswa : "<<a<<endl;
  cout<<"NIM mahasiswa : "<<b<<endl;
}

int main() {

  sk data;

  int harga=120000;
  int d,hargaawal;
  
  cout<<"nama? : "; data.nama();
  cout<<"nim? : "; data.nim();
  cout<<"sks? : ";cin>>d;

  hargaawal=harga*d;
  int diskon1=hargaawal-(hargaawal*10/100);
  int diskon2=diskon1-(diskon1*5/100);
  
  data.output();
  cout<<"Jumlah sks yang diambil : "<<d<<endl;
  cout<<"Harga awal : "<<data.awal(harga,d)<<endl;
  cout<<"Harga setelah diskon 10%+5% : "<<diskon1<<endl;
  cout<<hargaawal;
}