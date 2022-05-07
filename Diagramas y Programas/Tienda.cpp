#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	float x, p, sb, a, i, iva, ivaf, d, df, dt, v;
	
	cout<<"----------Calculador de precio----------"<<endl;
	cout<<"Introduzca el numero de productos a llevar: ";
	cin>>p;
	for(a=0;a<p;a++)
	{
	    cout<<"Digite el precio del producto: ";
	    cin>>x;
	    sb=sb+x;
	}
	cout<<"Digite el porcentaje de IVA: ";
	cin>>i;
	iva=i/100;
	ivaf=iva*sb;
	cout<<"Escriba el escuento: ";
	cin>>d;
	df=d/100;
	dt=df*sb;
	v=ivaf+sb-dt;
	cout<<"-------------------------------"<<endl;
	cout<<"---------Resultado------------"<<endl;
	cout<<"El subtotal es: "<<sb<<endl;;
	cout<<"El "<<i<<"% de IVA es: "<<ivaf<<endl;
	cout<<"El "<<d<<"% de descuento es: "<<dt<<endl;
	cout<<"El valor total a pagar es de: "<<v<<endl;
	
	return 0;
}
