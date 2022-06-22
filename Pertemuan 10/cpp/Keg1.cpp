#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *berikut;
};

int main(){
    system("cls");
    node *baru;
    baru = new node;
    baru->data = 5;
    baru->berikut = NULL;
    cout<<"Isi data node baru adalah : "<<baru->data<<endl;
    node *lain;
    lain = new node;
    lain->data = 6;
    lain->berikut = NULL;
    cout<<"Isi data node lain adalah : "<<lain->data<<endl;
    baru->berikut = lain;
    cout<<"Isi data node lain dicetak dar node baru adalah ; ";
    cout<<baru->berikut->data<<endl;
    node *kepala = baru;
    cout<<"Mencetak node pertama dari pointer kepala : ";
    cout<<kepala->data<<endl;
    cout<<"Mencetak node kedua dari pointer kepala : ";
    cout<<kepala->berikut->data<<endl;
    cout<<"Mengunnakan perulangan untuk mencetak setiap data pada rantai\n";
    node *jalan = kepala;
    int i = 1;
    while (jalan != NULL){
        cout<<"Data ke- "<<i<<">"<<jalan->data<<endl;
        i++;
        jalan = jalan->berikut;
    }
    cout<<"Mencetak node pertama dari pointer kepala : ";
    cout<<kepala->data<<endl;
    cout<<"Mencetak node kedua dari pointer kepala : ";
    cout<<kepala->berikut->data<<endl;

    return 0;
}