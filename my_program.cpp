#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	int ivalor = 0;
	int icontador = 0;
	int i = 0;
	cout << " ingrese un valor para calcular una suma ";
	cin >> ivalor;
	cout << "usted ingreso: " << ivalor << endl;


	for (i =1;i <= ivalor; i++) {
		icontador+=i;
	}
	cout << " el resultado es: " << icontador << endl;

	return 0;
}
