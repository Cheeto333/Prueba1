#include<iostream>
#include <stdio.h>

using namespace std;
int main ()
{
	char x, m;
	float ctva=0, ctvb=0, ctvc=0, ra, rb, rc, t;
	do{
	system("cls");
	fflush(stdin);
	cout<<"--------Alcancia magica--------"<<endl;
	cout<<"Ingrese su moneda con las siguientes opciones: "<<endl;
	cout<<"a) 10ctv"<<endl;
	cout<<"b) 25ctv"<<endl;
	cout<<"c) 50ctv"<<endl;
	cin>>x;
	if(x=='a'||x=='A'){ctva=ctva+1;}
	if(x=='b'||x=='B'){ctvb=ctvb+1;}
	if(x=='c'||x=='C'){ctvc=ctvc+1;}
	cout<<"¿Desea agregar otra moneda?"<<endl;
	cout<<"Si: R   No: F"<<endl;
	cin>>m;

	} while(m=='r'||m=='R');
	{
	
	ra=ctva*0.10;
	rb=ctvb*0.25;
	rc=ctvc*0.50;
	t=ra+rb+rc;
	cout<<"Usted tiene "<<ctva<<" monedas de 10 equivanente a: "<<ra<<" dolares."<<endl;
	cout<<"Usted tiene "<<ctvb<<" monedas de 25 equivanente a: "<<rb<<" dolares."<<endl;
	cout<<"Usted tiene "<<ctvc<<" monedas de 50 equivanente a: "<<rc<<" dolares."<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Usted tiene un total de: "<<t<<" dolares."<<endl;
	}
	return 0;
}
