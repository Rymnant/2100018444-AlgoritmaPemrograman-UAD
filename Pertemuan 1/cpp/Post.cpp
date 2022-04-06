#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int x1,y1,x2,y2,a,b;
	float jarak;
	
	cout<<"nilai x1 = ";cin>>x1;
	cout<<"nilai y1 = ";cin>>y1;
	cout<<"nilai x2 = ";cin>>x2;
	cout<<"nilai y2 = ";cin>>y2;
	
	jarak=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	
	cout<<"Jarak = "<<jarak<<endl;
	
	return 0;
}
