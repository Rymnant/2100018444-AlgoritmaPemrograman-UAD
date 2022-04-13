#include <iostream>
#include <string>

using namespace std;
int main()
{
   int b;
   int a;

   a =1;
   b =100;
   while (!(a==b))
   {
      if (a % 5==0 && a % 7==0)
      {
         cout << a << endl;      }
      else
      {
      }
      a =a+1;
   }

   return 0;
}
