#include <iostream>

using namespace std;

main()
{

int num=1;
int qta=1;
int resto;

cout<<"I numeri pari minori di 100 sono:"<<endl;

while(qta<=100)
{
    resto=num%2;
    if(resto==0)
   {
       cout<<num<<",";
       qta++;
   }
   num++;
}
}
