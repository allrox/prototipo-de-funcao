#include <iostream>
#include <locale.h>
using namespace std;

//Protótipo da função declarada após main()
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
	cout<<"\n\nRelação de notas informadas\n";
	
	for(int x=0;x<i;x++)
		{
			// "\t" insere uma parada de tabulação horizontal
			cout<<notas[x]<<"\t";
		}
		
	cout<<"\n\nMédia das notas: "<<media(notas,i);
	cout<<"\n\n";
	system("pause");
	return 0;
}

//Função para calcular a média geral das notas.
double media(double n[],int tam)
{
	double soma=0;
	for (int x=0;x<tam;x++)
	//Aqui o conteúdo de for não é isolado ente chaves, 
	//pois não realizaria a soma dos termos corretamente.
	soma+=n[x];
	return soma/tam;

}
