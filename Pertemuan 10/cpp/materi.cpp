#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=3;

    cout<<"Nilai A : "<<a<<endl;
    cout<<"Nilai B : "<<b<<endl;
    int *Pa = &a;
    cout<<"Nilai yang ditunjuk pointer Pa (var. A) : "<<*Pa<<endl;
    int *Pb = &b;
    cout<<"Nilai yang ditunjuk pointer Pb (var. B) : "<<*Pb<<endl;
    Pa = Pb;
    cout<<"Setelah tugas Pa diubah :\n";
    cout<<"Nilai uang ditunjuk pointer Pb (var. B) : "<<*Pb<<endl;
    cout<<"Nilai uang ditunjuk pointer Pa (var. a) : "<<*Pa<<endl;

    return 0;
}