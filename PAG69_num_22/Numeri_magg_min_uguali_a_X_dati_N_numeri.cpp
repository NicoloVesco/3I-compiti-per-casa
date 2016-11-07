#include <iostream>

using namespace std;

main()
{
    int N;
    int num;
    int Z;
    int num_magg=0;
    int num_min=0;
    int num_uguali=0;

    cout<<"Quanti numeri interi vuoi digitare?"<<endl;
    cin>>N;
    cout<<"Digitare il numero intero di riferimento"<<endl;
    cin>>Z;

    int i;
    for(i=0;i<N;i++)
    {
        cout<<"Digitare un altro numero intero ";
        cin>>num;
        if(num>Z)
            num_magg++;
        if(num<Z)
            num_min++;
        if(num==Z)
            num_uguali++;
    }
    cout<<endl;
    cout<<"I numeri digitati maggiori di "<<Z<<" sono "<<num_magg<<endl;
    cout<<"I numeri digitati minori di "<<Z<<" sono "<<num_min<<endl;
    cout<<"I numeri digitati uguali a "<<Z<<" sono "<<num_uguali<<endl;






}
