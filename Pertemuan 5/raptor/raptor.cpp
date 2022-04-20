#include<iostream>
using namespace std;

class hitung
{
private:
    int n;
    float rumus,jumlah,total;
public:
    int proses();
    void input();
};

void hitung::input()
{
    cin>>n;
    cout<<endl;
}

int hitung::proses()
{
    jumlah=0;total=0;rumus=-1;
    
    for (int i = 1; i <= n; i++)
    {
        rumus=(rumus*(-1));
        total=rumus/i;
        jumlah+=total;

        if (i==1)
            cout<<"("<<total<<")";
        if (i>1)
            cout<<"+("<<total<<")";       
    }
    cout<<endl<<endl<<"hasil penjumlahan deret = "<<jumlah;
    return jumlah;
}

int main(){
    
    hitung deret;

    cout<<" program sederhana menghitung jumlah dari rumus 1-(1/2)+(1/3)-(1/4)+...+(1/n)"<<endl<<endl;
    cout<<" tentukan nilai n : ";deret.input(); 
    deret.proses();

    return 0;
}