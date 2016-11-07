#include <iostream>

using namespace std;

main()
{

int num=1;
int qta=1;
int resto;
int N;

cout<<"Quanti numeri pari vuoi vedere?"<<endl;
cin>>N;
cout<<"I primi "<<N<<" Ecco in numeri pari:"<<endl;

while(qta<=N)
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
