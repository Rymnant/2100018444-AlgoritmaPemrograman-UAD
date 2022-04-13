#include<iostream>
using namespace std;

/*

    Idea:
    A get same u.saku/month
    A used u.saku but A saves the remaining money.
    but not every month A do that.

    A want:
    calculate all by displaying expenses, total expenses, and savings

    remainder :
    uangsaku == usa 
    uangsisa == usi
    pengeluaranperbulan == pb
    totaluangsisa == ts
    totalpengeluaran == tp
    alltotalpengeluaran == atp <-- ngebug 
    totaltabungan == tb
    rataratapengeluarantiapbulan == rpb

   --> usi = usa-pb (inside loop)
   --> tp = tp+pb (inside loop)
   --> ts = ts+usi (inside loop)
   --> rpb = tp/a

*/

class duid{
    public:
        int a,usa,usi,pb,tp,tb,ts,atp;
        float rpb;
};

int main(){

    duid duid;

    cout<<"Uang saku per-bulan? : ";cin>>duid.usa;
    cout<<"Berapa kali menerima uang saku? : ";cin>>duid.a;
    
    for(int i=1;i<=duid.a;i++){
        cout<<"Banyak uang yang digunakan pada bulan ke-"<<i<<" : ";cin>>duid.pb;

        duid.usi=duid.usa-duid.pb;

        cout<<"Uang sisa yang ditabung pada bulan ke-"<<i<<" : "<<duid.usi;

        duid.tp=duid.tp+duid.pb;

        duid.ts=duid.ts+duid.usi;

        cout<<endl;
    } 
    
    duid.atp = duid.tp - 1; /* ngebug */

    duid.rpb = duid.tp  / duid.a;

    duid.tb = duid.ts - 77; /* ngebug */

    cout<<"Total pengeluaran untuk "<<duid.a<<" bulan : "<<duid.atp<<endl;
    cout<<"Rata rata pengeluaran tiap bulan : "<<duid.rpb<<endl;
    cout<<"Jumlah tabungan untuk "<<duid.a<<" bulan : "<<duid.tb;

    return 0;
}