#include <iostream>
using namespace std;

class Bensin {

   private:
   	double liter;
   	int total;

   public:   	
    double hargaBensin1(double a) {
        return a*7000;
    }

    double hargaBensin2(double a) {
        return a*9000;
    }
};

int main() {

    Bensin bensin1;

	int pil;
	double liter;
	
	cout<<"Bensin apa? [(1)Pertalite, (2)Pertamax] : ";cin>>pil;
	cout<<"Mau berapa liter? : ";cin>>liter;
	
	if(pil==1){
		cout<<bensin1.hargaBensin1(liter);
	}
	else{
		cout<<bensin1.hargaBensin2(liter);
	}

    return 0;
}
