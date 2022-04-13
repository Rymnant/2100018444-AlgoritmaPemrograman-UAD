#include <iostream>
#include <string>

using namespace std;
 void rekursif(int a, int b){

   if (a<b)
   {
      if (a % 5==0 && a % 7==0)
      {
         cout << a << endl;      }
      else
      {
      }
      a =a+1;
      rekursif(a,b);
   }
   else
   {
   }
}
int main()
{

   rekursif(1,100);

   return 0;
}
