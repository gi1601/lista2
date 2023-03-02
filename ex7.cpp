#include <iostream>

using namespace std;



bool perfeito(int numero){
    int soma = 0;
    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            soma += i;
        }
    }
    return soma == numero;
}
main(){
	setlocale(LC_ALL, "Portuguese");
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Números perfeitos menores ou iguais a " << numero << ": ";
    for (int x = 1; x <= numero; x++){
        if (perfeito(x)){
            cout << x << " ";
        }
    }
    
}
