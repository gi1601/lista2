#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, penultimo, ultimo, aux, temp ;
	
	cout<<"Informe um número";
	cin>>numero;
	
	cout<< penultimo << endl << ultimo << endl;
	
	
	for(aux = 3; aux <= numero; aux++){
		cout<< ultimo+penultimo << endl;
		temp = penultimo;
		penultimo = ultimo;
		ultimo = ultimo + temp;
	}
	
}
