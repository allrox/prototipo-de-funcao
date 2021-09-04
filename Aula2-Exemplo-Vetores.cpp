//Um exerc�cio para a disciplina de Estrutura de Dados. 
//Vetores e endere�amento de dados na mem�ria principal.
//Alexandre Rocha - AllRox

#include <iostream>
#include <locale.h>
using namespace std;

int tamanhoVetor, elemento, i=0, soma, total;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Definindo o tamanho do vetor com a entrada de dados do usu�rio
	cout<<"\nInforme o tamanho do vetor: ";
	cin>>tamanhoVetor;	
	cout<<"\n";
	int vetor[tamanhoVetor];
	
	//Preenchendo o vetor com a entrada de dados do usu�rio
	for(i=0;i<tamanhoVetor;i++){
		cout<<"Informe o "<<i+1<<"� elemento: ";
		cin>>(vetor[i]);
	}
	
	//Opera��es com o vetor
	cout<<"\nInforma��es sobre o vetor"<<endl;
	cout<<"--------------------------";
	cout<<"\nTamanho do vetor               : "<<tamanhoVetor;
		if(tamanhoVetor > 1)
		{
			cout<<" elementos\n";
		} else {
			cout<<" elemento\n";
		}
	cout<<"Valor do primeiro elemento     : "<<vetor[0]<<endl;
	cout<<"Valor do �ltimo elemento       : "<<vetor[tamanhoVetor-1]<<endl;
	
	cout<<"\nInforma��es sobre o endere�amento de mem�ria"<<endl;
	cout<<"---------------------------------------------";
	cout<<"\nEndere�o do primeiro elemento  : "<<&vetor[1]<<endl;
	cout<<"Endere�o do �ltimo elemento    : "<<&vetor[tamanhoVetor-1]<<endl;
	cout<<"Endere�o do vetor              : "<<&vetor<<endl;
	cout<<"Vetor                          : "<<vetor;
	cout<<"\n\n";
	system("pause");
	return 0;	
	
}
