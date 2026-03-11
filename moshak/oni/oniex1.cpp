#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int Testes, Nalunos, AltAlunos[50000], contador = 0;
	string R[20];

	cin >> Testes;

	for (int i = 0; i < Testes; i++) {
		contador = 0;
		cin >> Nalunos;
		for (int y = 0; y < Nalunos; y++) {
			cin >> AltAlunos[y];
			
		}
		for (int y = 0; y < Nalunos - 1; y++) {
			if (AltAlunos[y] > AltAlunos[y + 1]) {
				contador++;
			}
		}	
		if (contador >1)
		{
		
		R[i] = "NAO";

		}
		else if (contador <= 1) {
			R[i] = "SIM";
		}

	}

	for (int z = 0; z < Testes; z++) {
		cout << R[z]<<endl;
	}

}