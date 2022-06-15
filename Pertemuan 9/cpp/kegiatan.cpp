#include<iostream>
using namespace std;

class MbuhSakkarepmu{
    public:
        void convert1d();
        void convert2d();
        void bubbleSort();
    private:
        int array[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
        int array1d[9];
        int array2d[3][3];
        int a,b,x=0;
};

void MbuhSakkarepmu::convert1d(){
    cout<<"\nArray 2d :\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<" ";
            array1d[a]=array[i][j];
            a++;
        }
        cout<<"\n";
    }
    cout<<"\nArray 1d :\n";
    for(int i=0;i<9;i++){
        cout<<array1d[i]<<" ";
    }
    cout<<endl;
}

void MbuhSakkarepmu::bubbleSort(){
    cout<<"\nProses sorting :\n";
    for(int i=0; i<8; i++){
        for(int j=0; j<(9-i-1); j++){
            if(array1d[j]>array1d[j+1]){
                b = array1d[j];
                array1d[j] = array1d[j+1];
                array1d[j+1] = b;
            }
        }
        cout<<"Langkah ke- "<<i+1<<": ";
        for(int j=0; j<9; j++)
            cout<<array1d[j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}

void MbuhSakkarepmu::convert2d(){
    cout<<"Array 2d :";
    for (int i=0; i<3;i++) { 
        cout<<"\n"; 
        if(x==9){
            break;
        } 
        for (int j=0;j<3;j++) { 
            array2d[i][j]=array1d[x]; 
            cout<<array2d[i][j]<<" "; 
            x++;
            } 
        } 
} 

int main(){
    system("cls");
    MbuhSakkarepmu mbuh;
    mbuh.convert1d();
    mbuh.bubbleSort();
    mbuh.convert2d();
}