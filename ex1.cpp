#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout<<"Informe um n�mero inteiro";
	cin>> numero;
	
	cout<<"Divisores de " << numero <<" s�o :" << endl;
	for ( int i = 1; i <= numero; i++){
		if (numero % i == 0) {
            cout << i << endl;
    }
            
	}
}
