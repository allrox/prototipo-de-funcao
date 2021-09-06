#include <iostream>
#include <locale.h>
using namespace std;

//Prot�tipo da fun��o declarada ap�s main()
double media(double[], int tam);

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	int i;
	double notas[i];
	cout<<"Quantas notas deseja avaliar? ";
	cin>>i;
	for (int x=0; x<i; x++)
		{
			cout<<"Nota "<<x+1<<": ";
			cin>>notas[x];
		}
	cout<<"\n\nRela��o de notas informadas\n";
	
	for(int x=0;x<i;x++)
		{
			// "\t" insere uma parada de tabula��o horizontal
			cout<<notas[x]<<"\t";
		}
		
	cout<<"\n\nM�dia das notas: "<<media(notas,i);
	cout<<"\n\n";
	system("pause");
	return 0;
}

//Fun��o para calcular a m�dia geral das notas.
double media(double n[],int tam)
{
	double soma=0;
	for (int x=0;x<tam;x++)
	//Aqui o conte�do de for n�o � isolado ente chaves, 
	//pois n�o realizaria a soma dos termos corretamente.
	soma+=n[x];
	return soma/tam;

}
