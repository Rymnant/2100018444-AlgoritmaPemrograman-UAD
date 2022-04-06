#include<iostream>

using namespace std;

int main(){
    int rslt=1,x,y;

    cout<<"Masukkan x : ";cin>>x;
    cout<<"Masukkan y : ";cin>>y;
    
    if (y>=0){
        for (int i = 1; !(i >y) ; i++){
            rslt=rslt*x;
        }  
    }else{
        for (int i = 0; !(i <= y); i--){
            rslt=rslt*(1/x);
        }
    }
    
    
    cout<<x<<" pangkat "<<y<<" = "<<rslt;
    
    return 0;
}