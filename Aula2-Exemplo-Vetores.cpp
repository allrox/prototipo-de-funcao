#include <iostream>
#include <locale.h>
using namespace std;

int elementos();
int tamanhoVetor, elemento, indice=0;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"\nInforme o tamanho do vetor:";
	cin>>tamanhoVetor;	
	
	int vetor[tamanhoVetor]={elementos()};
	cout<<"\nTamanho do vetor               :"<<tamanhoVetor;
	cout<<"\nValor do primeiro elemento     :"<<vetor[0]<<endl;
	cout<<"Endereço do primeiro elemento  :"<<&vetor[1]<<endl;
	cout<<"Endereço do vetor              :"<<&vetor<<endl;
	cout<<"Vetor                          :"<<vetor;
	cout<<"\n\n";
	cout<<"Vetor:"<<vetor;
	return 0;	
	
}	

int elementos(){
	for(indice=0;indice<tamanhoVetor;indice++){
		cout<<"Informe o "<<indice+1<<"º elemento: ";
		cin>>elemento;
	}
}
