#include<iostream>
using namespace std;

class pointer{
	public:
		string nama[50];
		int nim[50];
		string *name=&nama[0];
		int *no=&nim[0];
		void input();
		void output();
	private:
		int x;	
};

void pointer::input(){
	system("cls");
	cout<<"Jumlah data : ";cin>>x;
	for(int i=0;i<x;i++){
		cout<<"Masukkan nama : ";cin>>nama[i];
		cout<<"Masukkan nim  : ";cin>>nim[i];
	}
}


void pointer::output(){
	for(int i=0;i<x;i++){
		cout<<"\nNama ke-"<<i+1<<" : "<<*(name+i)<<endl;
		cout<<"NIM ke-"<<i+1<<" : "<<*(no+i)<<endl;
	}
}

int main(){
	pointer ptr;

	ptr.input();
	ptr.output();

	return 0;
}