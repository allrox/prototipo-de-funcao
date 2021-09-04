//Um exercício para a disciplina de Estrutura de Dados. 
//Vetores e endereçamento de dados na memória principal.
//Alexandre Rocha - AllRox

#include <iostream>
#include <locale.h>
using namespace std;

int tamanhoVetor, elemento, i=0, soma, total;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Definindo o tamanho do vetor com a entrada de dados do usuário
	cout<<"\nInforme o tamanho do vetor: ";
	cin>>tamanhoVetor;	
	cout<<"\n";
	int vetor[tamanhoVetor];
	
	//Preenchendo o vetor com a entrada de dados do usuário
	for(i=0;i<tamanhoVetor;i++){
		cout<<"Informe o "<<i+1<<"º elemento: ";
		cin>>(vetor[i]);
	}
	
	//Operações com o vetor
	cout<<"\nInformações sobre o vetor"<<endl;
	cout<<"--------------------------";
	cout<<"\nTamanho do vetor               : "<<tamanhoVetor;
		if(tamanhoVetor > 1)
		{
			cout<<" elementos\n";
		} else {
			cout<<" elemento\n";
		}
	cout<<"Valor do primeiro elemento     : "<<vetor[0]<<endl;
	cout<<"Valor do último elemento       : "<<vetor[tamanhoVetor-1]<<endl;
	
	cout<<"\nInformações sobre o endereçamento de memória"<<endl;
	cout<<"---------------------------------------------";
	cout<<"\nEndereço do primeiro elemento  : "<<&vetor[1]<<endl;
	cout<<"Endereço do último elemento    : "<<&vetor[tamanhoVetor-1]<<endl;
	cout<<"Endereço do vetor              : "<<&vetor<<endl;
	cout<<"Vetor                          : "<<vetor;
	cout<<"\n\n";
	system("pause");
	return 0;	
	
}
