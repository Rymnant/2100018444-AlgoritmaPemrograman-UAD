#include<iostream>
using namespace std;

/* 
    1. input tahun
    2.  a. x mod 400=0 adalah tahun kabisat
        b. x mod 400!=0 tapi x mod 100=0 maka bukan tahun kabisat
        c. x mod 400!=0, x mod 100!= tapi x mod 4=0 maka dapat disebut tahun kabisat
        d. jika tidak habis dibagi oleh seluruh syarat diatas maka tahun tsb bukan kabisat
    3. tampilkan kabisat atau bukan
*/

int main(){

    int tahun;

    cout<<"Masukkan tahun : ";cin>>tahun;

    if(tahun % 400==0){
        cout<<"Tahun kabisat";
    }else if(tahun % 100==0){
        cout<<"Bukan Tahun Kabisat";
    }else if (tahun % 4==0){
        cout<<"Tahun Kabisat";
    }else{
        cout<<"Bukan Tahun Kabisat";
    }

    return 0;
}