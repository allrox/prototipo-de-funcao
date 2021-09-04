#include <iostream>
#include <locale.h>
using namespace std;
float calculoDeArea (float, float, float);

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	int l,c,a;
	
	cout<<"\nInforme a largura do ambiente em metros:";
	cin>>l;
	cout<<"Informe o comprimento do ambiente em metros:";
	cin>>c;
	cout<<"Informe a altura do ambiente em metros:";
	cin>>a;
	cout<<"\nA área total é igual a "<<calculoDeArea(l,c,a)<<"m³";
	cout<<"\n\n";
	
	system("pause");
	return 0;
	
}

float calculoDeArea(float l, float c, float a)
{
	return l*c*a;
}
