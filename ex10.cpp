#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
    cout << "Informe um n�mero inteiro: ";
    cin >> numero;
    
    cout << "Os multiplos de " << numero << " menores que 100 s�o:" << endl;
    
    for (int i = 1; i < 100; i++) {
        if (i % numero == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
