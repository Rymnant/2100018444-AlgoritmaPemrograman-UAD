#include<iostream>
using namespace std;

class sorting{
    friend istream& operator>>(istream& in, sorting& a);
    friend ostream& operator<<(ostream& out, sorting& a);
public:
    void selection_sort();
    int pencarianBiner(int low, int high);
    int n,data[10];
private:
    void minimum(int,int,int&);
    void tukar(int&,int&);
};

void sorting::minimum(int dari,int n, int &tempat){
    int min = data[dari];
    tempat = dari;
    for (int i = dari+1; i < n; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
            tempat = i;
        }       
    }
}

void sorting::tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sorting::selection_sort(){
    int t;
    for (int i = 0; i < n-1; i++)
    {
        minimum(i,n,t);
        tukar(data[i],data[t]);
    }
}

int sorting::pencarianBiner(int low, int high){
    int middle;
    while (low<=high){
        middle = (low+high)/2;
        if (data[middle] == n){
            return middle;
        }
        else if (data[middle] < n){
            low = middle+1;
        }
        else{
            high = middle-1;
        }
        }
        return -1;
}   

int main(){
    sorting a;
    cout<<"Masukkan jumlah data : ";
    cin>>a.n;
    cout<<"Masukkan data : ";
    for (int i = 0; i < a.n; i++)
    {
        cin>>a.data[i];
    }
    cout<<"Data yang akan dicari : ";
    int n;
    cin>>n;
    a.selection_sort();
    cout<<"Data setelah diurutkan : ";
    for (int i = 0; i < a.n; i++)
    {
        cout<<a.data[i]<<" ";
    }
    cout<<endl;
    cout<<"Data yang dicari : "<<n<<endl;
    cout<<"Data ditemukan pada indeks ke : "<<a.pencarianBiner(0,a.n-1);
    return 0;
}