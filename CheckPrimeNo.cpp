#include <iostream>
using namespace std;

int main ()
{
  int n,i,c=0;
  cout<<" Enter any number n: ";
  cin>>n;
  for(i=1; i<=n; i++)
  {
     if (n%i==0)
     {
        c++;

      }
   }
      if(c==2)
         {
             cout<<" n is a prime number" <<endl;
         }
            else
           {
             cout<<" n is not a prime number" <<endl;
           }

    return 0;
}
