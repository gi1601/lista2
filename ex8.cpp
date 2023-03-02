#include <iostream>

using namespace std;

void binario(int numero){
	
	int numeroBinario [numero];
	int i = 0;
	while (numero > 0){
		numeroBinario[i]= numero% 2;
		numero = numero/2;
		i++;
	}
	
	for(int x = i -1; x>=0; x--)
	    cout<< numeroBinario[x];
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout<<"Informe um número inteiro: ";
	cin>>numero;
	
	binario(numero);
}
