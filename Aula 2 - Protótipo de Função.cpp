#include <iostream>
#include <locale.h>

using namespace std;

#Aqui é utilizado um protótipo de função, também conhecido como cabeçalho. 
#A função, de fato, virá após a função main.
void linha(char c, int n);

int main(){
	
	#Ajusta a utilização da acentuação gráfica do idioma.
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\nApenas um título\n";
	linha('-',16);
	cout<<"\nSubtítulo do exemplo\n";
	linha('*',20);
	cout<<"\n\n";
	system("pause");
	
return 0;

}

#Aqui está a função apresentada no cabeçalho, antes da função main.
void linha (char c, int n)
{
	#Para a variável x=1, enquanto menor ou igual a n, some 1 e exiba o caractere armazenado na variável c.
	for(int x=1; x<=n; x++)
		cout<<c;
}
