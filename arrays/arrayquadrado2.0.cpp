#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int arraytop[3][3], arrayfixe[3][3], i, j = 0, escolha= 99;


	cout << "-----------MENU-----------\n";
	cout << "insira o valor da matriz 1 e 2\n";
	for (i = 0; i < 3; i++) {  
		for (j = 0; j < 3; j++) {

			cin >> arraytop[i][j]; //preenche a primeira matriz
		}
	} system("cls");
	cout << "1 array\n";
	for (i = 0; i < 3; i++) {
		cout << "[";
		for (j = 0; j < 3; j++) {

			std::cout << arraytop[i][j] << " "; //agrupa a primeira matriz como quadrado

		}cout << "]\n";
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {

			cin >> arrayfixe[i][j]; //preenche a segunda matriz

		}
	}
	cout << " 2 array\n";
	for (i = 0; i < 3; i++) {
		cout << "[";
		for (j = 0; j < 3; j++) {

			cout << arrayfixe[i][j] << " "; //agrupa a segunda matriz como quadrado

		}cout << "]\n";
	}


	while (escolha != 0)
	{
		cout << "1- Soma das matrizes,2 subtração das matrizes, 0 saida\n";
		cin >> escolha;
		switch (escolha)
		{
		case 1:cout << "RESULTADO DA soma\n";
			for (i = 0; i < 3; i++) {
				cout << "[";
				for (j = 0; j < 3; j++) {

					cout << arrayfixe[i][j] + arraytop[i][j] << " "; // soma as duas matrizes e faz um cout do resultado

				}cout << "]\n";
			} break;
		case 2:
			cout << "RESULTADO DA subtração\n";
			for (i = 0; i < 3; i++) {
				cout << "[";
				for (j = 0; j < 3; j++) {

					cout << arrayfixe[i][j] - arraytop[i][j] << " ";

				}cout << "]\n";
			}
				break;
		case 0: cout << "saindo...";
			break;
		default:
			break;
			}

		}



	}
