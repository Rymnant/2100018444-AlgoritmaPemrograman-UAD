#include<iostream>
using namespace std;

class MbuhSakkarepmu {
public:
    void input();
    void merge();
    void sort();
    void convert();
    void outputC();
private:
    int a,b;
    int x[3][3];
    int y[3][3];
    int x1[9],y1[9];
    int gabung[18];
};

void MbuhSakkarepmu::input() {
    system("cls");
    cout<<"Array 1 : "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Data ["<<i+1<<"]["<<j+1<<"] = ";
            cin>>x[i][j];
        }
    }
    cout<<"\nArray 2 : "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Data ["<<i+1<<"]["<<j+1<<"] = ";
            cin>>y[i][j];
        }
    }
}

void MbuhSakkarepmu::convert() {
    cout<<"\nArray x :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<x[i][j]<<" ";
            x1[a]=x[i][j];
            a++;
        }
        cout<<"\n";
    }
    cout<<"\nArray y :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<y[i][j]<<" ";
            y1[b]=y[i][j];
            b++;
        }
        cout<<"\n";
    }
}

void MbuhSakkarepmu::merge(){
    for(int i=0;i<18;i++){
        if(i<9){
            gabung[i]=x1[i];
        }else{
            gabung[i]=y1[i-9];
        }
    }
    cout<<"\n\nArray gabung :\n";
    for(int i=0;i<18;i++){
        cout<<gabung[i]<<" ";
    }
}

void MbuhSakkarepmu::sort(){
    int aGabung;
    for(int i=0;i<18;i++){
        for(int j=0;j<18;j++){
            if(gabung[i]<gabung[j]){
                aGabung=gabung[i];
                gabung[i]=gabung[j];
                gabung[j]=aGabung;
            }
        }
    }
    cout<<"\n\nArray gabung terurut :\n";
    for(int i=0;i<18;i++){
        cout<<gabung[i]<<" ";
    }
}

void MbuhSakkarepmu::outputC() {
    cout<<"\nHasil konversi array 1 ( ' 2d ke 1d ' ) :\n";
    for(int i=0;i<9;i++){
        cout<<x1[i]<<" ";
    }
    cout<<"\n\nHasil konversi array 2 ( ' 2d ke 1d '):\n";
    for(int i=0;i<9;i++){
        cout<<y1[i]<<" ";
    }
}

int main(){
    MbuhSakkarepmu mbuh;
    mbuh.input();
    mbuh.convert();
    mbuh.outputC();
    mbuh.merge();
    mbuh.sort();

    system("pause");

    return 0;
}