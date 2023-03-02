#include <iostream>

using namespace std;

bool primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numero;

    cout << "Informe um número inteiro: ";
    cin >> numero;

    cout << "Os números primos menores ou iguais a " << numero << ":" << endl;
    for (int i = 2; i <= numero; i++) {
        if (primo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
