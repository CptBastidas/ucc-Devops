#include <stdio.h>
#include <math.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

	int ivalor = 20;
	int icontador = 0;
	int i = 0;
	double dsleep =0;

	cout << "+-------------------------------------------------------------+\n" << endl;

	for (i= 1;i<= ivalor; i++ ) {
		icontador+=1;
		dsleep=1-(1/i);
		cout << " ciclo for i " << i << "contador =" << icontador << "sleep" << endl;
		usleep(dsleep);
	}

	cout << "llamado a otro programa " << endl;
	system("./geometrica_parte1");
	cout <<"+--------------------------------------------------------------+" << endl;
	return 0;
}
