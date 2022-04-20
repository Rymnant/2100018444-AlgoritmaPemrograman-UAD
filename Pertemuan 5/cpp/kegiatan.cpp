#include<iostream>
#include<conio.h>
using namespace std;

class perulangan{
    public:
    perulangan(){n=4;}
    void ulang_for(int);
    void ulang_while(int);
    private:
    int n;
};
void perulangan::ulang_for(int n){
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
}
void perulangan::ulang_while(int n){
    int i=n;

    do {
        cout << i << " ";
        --i;
    }
    while (i >= n);
}

int main(){
    perulangan x;
    cout<<"Iteratif\n";
    x.ulang_for(4);
    cout<<"\nRekursif\n";
    x.ulang_while(4);
    getch();
}