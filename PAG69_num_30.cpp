#include <iostream>
using namespace std;

    int main ()
    {
    int n;
    cout<<"Inserire un numero tale che 0 < n < 1000):"<<endl;
    cin>> n;

    int i=1;


      do{
      cout<<"La"<<i<<" ^ cifra da destra e'"<< n%10 <<endl;
      n=n/10;
      i++;
      }while( i<=3 && n!=0);

    return 0;
    }
