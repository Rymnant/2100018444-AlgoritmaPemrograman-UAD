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
    totaltabungan == tb
    rataratapengeluarantiapbulan == rpb

   --> usi = usa-pb

*/

/*
    iteratif

    int main(){

    int a,usa,usi,pb,tp,tb,ts;
    float rpb;

    cout<<"Uang saku per-bulan? : ";cin>>usa;
    cout<<"Berapa kali menerima uang saku? : ";cin>>a;
    
    for(int i=1;i<=a;i++){
        cout<<"Banyak uang yang digunakan pada bulan ke-"<<i<<" : ";cin>>pb;
        usi=usa-pb;
        cout<<"Uang sisa yang ditabung pada bulan ke-"<<i<<" : "<<usi;
        tp=tp+pb;
        ts=ts+usi;
        cout<<endl;
    } 
    
    rpb = tp  / a;
    tb = ts-16;

    cout<<"Total pengeluaran untuk "<<a<<" bulan : "<<tp<<endl;
    cout<<"Rata rata pengeluaran tiap bulan"<<rpb<<endl;
    cout<<"Jumlah tabungan untuk "<<a<<" bulan : "<<tb;

    return 0;
}
*/

/*
    Rekursif

    
*/

int main(){

    int a,usa,usi,pb,tp,tb,ts;
    float rpb;

    cout<<"Uang saku per-bulan? : ";cin>>usa;
    cout<<"Berapa kali menerima uang saku? : ";cin>>a;
    
    for(int i=1;i<=a;i++){
        cout<<"Banyak uang yang digunakan pada bulan ke-"<<i<<" : ";cin>>pb;
        usi=usa-pb;
        cout<<"Uang sisa yang ditabung pada bulan ke-"<<i<<" : "<<usi;
        tp=tp+pb;
        ts=ts+usi;
        cout<<endl;
    } 
    
    rpb = tp  / a;
    tb = ts-16;

    cout<<"Total pengeluaran untuk "<<a<<" bulan : "<<tp<<endl;
    cout<<"Rata rata pengeluaran tiap bulan"<<rpb<<endl;
    cout<<"Jumlah tabungan untuk "<<a<<" bulan : "<<tb;

    return 0;
}