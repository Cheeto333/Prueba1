#include<iostream>
#include <stdio.h>

using namespace std;
int main ()
{
	float x, r, s, a;
	
	cout<<"----------Sumador de numeros----------"<<endl;
	cout<<"Introduzca el numero de digitos a sumar: ";
	cin>>r;
	for(a=0;a<r;a++)
	{
		cout<<"Digite el numero: ";
		cin>>x;
		s=s+x;
	}
	cout<<"La suma de los "<<r<<" numeros es: "<<s<<endl;
	return 0;
}
