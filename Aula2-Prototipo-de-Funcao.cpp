#include <iostream>
#include <locale.h>

using namespace std;

#Aqui � utilizado um prot�tipo de fun��o, tamb�m conhecido como cabe�alho. 
#A fun��o, de fato, vir� ap�s a fun��o main.
void linha(char c, int n);

int main(){
	
	#Ajusta a utiliza��o da acentua��o gr�fica do idioma.
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\nApenas um t�tulo\n";
	linha('-',16);
	cout<<"\nSubt�tulo do exemplo\n";
	linha('*',20);
	cout<<"\n\n";
	system("pause");
	
return 0;

}

#Aqui est� a fun��o apresentada no cabe�alho, antes da fun��o main.
void linha (char c, int n)
{
	#Para a vari�vel x=1, enquanto menor ou igual a n, some 1 e exiba o caractere armazenado na vari�vel c.
	for(int x=1; x<=n; x++)
		cout<<c;
}
