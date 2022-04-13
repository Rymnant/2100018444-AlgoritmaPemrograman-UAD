#include<iostream>
using namespace std;

class Operator
{

    friend ostream& operator<<(ostream&, Operator&);
    friend istream& operator>>(istream&, Operator&);

private:
    int n;
    long hasil;
public:
    long faktorial();
    long faktorial(int);
};

long Operator::faktorial(){
    long fak = 1;
    for (int i = 0; i <= n; i++)
        fak = fak * i;
    return fak;
}

long Operator::faktorial(int n){
    if((n==0)||(n==1)) return(1);
    else return (n*faktorial(n-1));
}