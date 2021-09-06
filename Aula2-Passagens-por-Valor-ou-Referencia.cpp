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
	
	//Realiza a troca por transferência
	swapReferencia(a,b);
	//Realiza a troca por passagem de valor
	swapValor(c,d);
	
	cout<<"Ordem original:\t\t a "<<c<<" b "<<d<<endl;
	cout<<"Swap por referência:\t a "<<a<<" b "<<b<<endl;	
	cout<<"Swap por valor:\t\t a "<<c<<" b "<<d<<endl;	
}

//Na passagem por referência, o endereço da variável da função chamadora 
//é passado para a função chamada, assim, os valores podem ser alterados.
void swapReferencia(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

//Na passagem por valor, ou cópia do valor, 
//estes são passados para os parâmetros formais da função chamada através 
//dos parâmetros reais da função chamadora. 
//A função chamada poderá operar esses valores, mas não alterá-los.
void swapValor(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
