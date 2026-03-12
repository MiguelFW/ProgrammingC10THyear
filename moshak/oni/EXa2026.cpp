/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
 #include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;


	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int Testes, Nalunos, AltAlunos[50000], contador = 0,coiso;
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
			    coiso = AltAlunos[y];
			    AltAlunos[y] = AltAlunos[y+1];
			    AltAlunos[y+1] = coiso;
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
