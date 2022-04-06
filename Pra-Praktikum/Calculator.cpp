#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

/*Nama:Farid Hibaturrachman
  NIM:2100018444*/
  
void penambahan(){
	double x,y,hasil;
	cout<<"\n Angka pertama : ";cin>>x;
	cout<<"\n Angka kedua : ";cin>>y;
	hasil=x+y;
	cout<<endl;
	cout<<" Hasil = "<<x<<" + "<<y<<" = "<<hasil;
}
void pengurangan(){
	double x,y,hasil;
	cout<<"\n Angka pertama : ";cin>>x;
	cout<<"\n Angka kedua : ";cin>>y;
	hasil=x-y;
	cout<<endl;
	cout<<" Hasil = "<<x<<" - "<<y<<" = "<<hasil;
}
void perkalian(){
	double x,y,hasil;
	cout<<"\n Angka pertama : ";cin>>x;
	cout<<"\n Angka kedua : ";cin>>y;
	hasil=x*y;
	cout<<endl;
	cout<<" Hasil = "<<x<<" x "<<y<<" = "<<hasil;
}
void pembagian(){
	double x,y,hasil;
	cout<<"\n Angka pertama : ";cin>>x;
	cout<<"\n Angka kedua : ";cin>>y;
	hasil=x/y;
	cout<<endl;
	cout<<" Hasil = "<<x<<" / "<<y<<" = "<<hasil;
}
void perpangkatan(){
	double x,y;
	cout<<"\n Nilai x : ";cin>>x;
	cout<<"\n Nilai y : ";cin>>y;
	cout<<"\n x pangkat y ("<<x<<"^"<<y<<") = "<<pow(x,y);
}	
void akar(){
	double x;
	cout<<"\n Nilai x : ";cin>>x;
	cout<<"\n Akar dari "<<x<<" = "<<sqrt(x);
}

int main(){
	int plhn;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"\nMenu Operasi\n"
	"\n1. Penambahan"
	"\n2. Pengurangan"
	"\n3. Perkalian"
	"\n4. Pembagian"
	"\n5. Perpangkatan"
	"\n6. Akar";
	cout<<"\n\nPilihan menu : ";cin>>plhn;
		
	switch(plhn){
		case 1:
			penambahan();
			break;
		case 2:
			pengurangan();
			break;
		case 3:
			perkalian();
			break;
		case 4:
			pembagian();
			break;
		case 5:
			perpangkatan();
			break;
		case 6:
			akar();
			break;
		default:
			cout<<"Error!";
			break;
	}
	getch();
}
