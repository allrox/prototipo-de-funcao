#include <iostream>
#include <locale.h>
using namespace std;

void swapReferencia(int &x, int &y);
void swapValor(int x, int y);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//Armazena valores de x e y
	int a=20,b=30;
	
	//Guarda a ordem original de x e y
	int c=a, d=b;
	
	//Realiza a troca por transfer�ncia
	swapReferencia(a,b);
	//Realiza a troca por passagem de valor
	swapValor(c,d);
	
	cout<<"Ordem original:\t\t a "<<c<<" b "<<d<<endl;
	cout<<"Swap por refer�ncia:\t a "<<a<<" b "<<b<<endl;	
	cout<<"Swap por valor:\t\t a "<<c<<" b "<<d<<endl;	
}

//Na passagem por refer�ncia, o endere�o da vari�vel da fun��o chamadora 
//� passado para a fun��o chamada, assim, os valores podem ser alterados.
void swapReferencia(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

//Na passagem por valor, ou c�pia do valor, 
//estes s�o passados para os par�metros formais da fun��o chamada atrav�s 
//dos par�metros reais da fun��o chamadora. 
//A fun��o chamada poder� operar esses valores, mas n�o alter�-los.
void swapValor(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
