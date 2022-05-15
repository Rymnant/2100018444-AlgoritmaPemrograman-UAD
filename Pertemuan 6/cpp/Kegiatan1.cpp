#include<iostream>
#include<iomanip>
#include "vektor.h"
using namespace std;

int main(){
    Vektor x,y,z;
    cin>>x;
    cout<<x;
    cin>>y;
    cout<<y;
    z.penjumlahan_vektor(x,y);
    cout<<"\nHasil penjumlahan 2 vektor\n"<<z;
    z.perkalian_vektor(3,x);
    cout<<"\nHasil perkalian skalar dengan vektor\n"<<z;
    cout<<z;
    return 0;
}
