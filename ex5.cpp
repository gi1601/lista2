#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	long long fatorial=1;
	
	cout<<"Informe um número inteiro: ";
	cin>>numero;
	
	for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}
