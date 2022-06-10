#include<iostream>
using namespace std;

class matriks{
    public:
        void input();
        void proses();
        void output();
    private:
        int a,b;
        int matriks[3][3];
        int tanda = 0;
};

void matriks::input(){
    system("cls");
    cout<<"Masukkan jumlah baris matriks : ";cin>>a;
    cout<<"Masukkan jumlah kolom matriks : ";cin>>b;

    //mengecek matriks persegi;
    if ( a != b ){
        cout<<"Bukan matriks persegi";
        system("pause");
        system("clear");
        input();
    }

    //input matriks;
    cout<<"\nMasukkan elemen matriks : \n";
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout<<"["<<i+1<<"]["<<j+1<<"] : ";cin>>matriks[i][j];
        }
    }
}

void matriks::proses(){
    //mengecek apakah matriks persegi atau tidak;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if (matriks[i][j] != 1 && matriks[j][i] != 0){
                tanda = 1;
                break;
            }
        }
    }
}

void matriks::output(){
    //menampilkan matriks;
    cout<<"\nMatriks yang diinputkan : "<<endl;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout<<matriks[i][j]<<" ";
        }
        cout<<endl;   
    }
    
    //mengevaluasi tanda;
    if (tanda == 0){
        cout<<"\nMatriks tersebut merupakan matriks persegi";
    }else{
        cout<<"\nBukan matriks persegi";
    }
}

int main(){
    matriks m;
    m.input();
    m.proses();
    m.output();
    return 0;
}