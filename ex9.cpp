#include <iostream>

using namespace std;

main(){
	
setlocale (LC_ALL, "Portuguese");

int  n1,n2;


cout << "Informe o n�mero desejado para fazer a Tabuada: ";
cin >> n1;


cout << "At� que n�mero deseja multiplicar? ";
cin >> n2;


for(int i = 0; i <=n2 ; i++){
        cout<<n1<<" X "<< i <<" = " << n1 * i << endl;
    }
}
