#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    float n1, n2;

    cout<<"Introduzca el primer numero (entero):"<<endl;
    cin>>n1;
	cin>>n2;

    if ( n1 > n2 )
        cout<<"El mayor es: "<<n1<<endl;
    else

        if ( n1 < n2 )
            cout<<"El mayor es: "<<n2<<endl;
        else
            cout<<"Los numeros son iguales"<<endl;
 
    getch(); /* Pausa */

    return 0;
}
