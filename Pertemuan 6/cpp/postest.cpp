#include<iostream>
using namespace std;

class geser{
    private:
    int n,x,pil,pil1,m, array[50];
    public:
    void input();
    void proses();
    void output();
    void outputrekursif(int array[], int i, int n);
    void outputarray();
};

void geser::input(){
    cout<<"Jumlah data di dalam array : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Data ke-"<<i<<" : ";cin>>array[i];
    }
    cout<<"Pilihan :\n1. Geser kiri\n2. Geser kanan"<<endl;
    cout<<"Pilihanmu : ";cin>>pil;
    cout<<"Ingin digeser berapa kali? : ";cin>>m;
    cout<<"Ingin menggunakan cara apa? \n1. Iteratif\n2. Rekursif"<<endl;
    cout<<"Pilihanmu : ";cin>>pil1;
}

void geser::proses(){
    while(m)  
    {  
        if(pil==1){  
            x = array[0];  
            for(int i = 0; i < n - 1; i++){
                array[i] = array[i + 1];
            }array[n - 1] = x;  
            }
        else if(pil==2){  
            x = array[n - 1];  
            for(int i = n - 1; i > 0; i--){
                array[i] = array[i - 1];
            }array[0] = x;
            }
        else{
            cout<<"error!";
            }m--;  
    }  
}

void geser::outputrekursif(int array[], int i, int n){
    if(i>=n){
        return;
    }
    else{
        cout<<array[i]<<" ";
        outputrekursif(array,i+1,n);
    }    
}

void geser::outputarray(){
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
}

void geser::output(){
    cout<<"Data yang masuk kedalam array : \n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
    if(pil1==1){
        cout<<"Data sesudah digeser "<<m<<" kali :\n";
        proses();outputarray();
    }
    else if(pil1==2){
        cout<<"Data sesudah digeser "<<m<<" kali :\n";
        proses();outputrekursif(array,0,n);
    }
    else{
        cout<<"error!";
    }
    
}

int main(){
    geser data;

    data.input();
    data.output();

}