#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int da, ma, aa, dn, mn, an, e, m, d;
	cout<<"-----------Determinador de edad-----------"<<endl;
	cout<<"Porfavor digite la fecha actual: "<<endl;
	cout<<"Digite el dia: ";
	cin>>da;
	cout<<"Digite el mes: ";
	cin>>ma;
	cout<<"Digite el año: ";
	cin>>aa;
	cout<<"------------------------------------------"<<endl;
	cout<<"Porfavor, digite la fecha de su nacimiento"<<endl;
	cout<<"Digite el dia: ";
	cin>>dn;
	cout<<"Digite el mes: ";
	cin>>mn;
	cout<<"Digite el año: ";
	cin>>an;
	
	if(da<dn)
	{
		da=da+30;
		ma=ma-1;
		d=da-dn;
	}
	else
	d=da-dn;
	
	if(ma<mn)
	{
		ma=ma+12;
		aa=aa-1;
		m=ma-mn;
	}
	else 
	m=ma-mn;
	e=aa-an;
	
	cout<<"El usuario tiene: "<<e<<" años, "<<m<<" meses y "<<d<<" días"<<endl;
	
	return 0;
}
