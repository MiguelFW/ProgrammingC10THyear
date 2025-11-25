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
	int arraytop[3][3],arrayfixe[3][3], i, j = 0,resultado = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			
			cin >> arraytop[i][j];	
		}
	} system("cls");
	cout << "1 array\n";
	for (i = 0; i < 3; i++) {
		cout << "[";
		for (j = 0; j < 3; j++) {

			std::cout << arraytop[i][j] << " ";

		}cout << "]\n";
	} 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {

			cin >> arrayfixe[i][j];

		}
	}system("cls");
	cout << " 2 array\n";
	for (i = 0; i < 3; i++) {
		cout << "[";
		for (j = 0; j < 3; j++) {

			cout << arrayfixe[i][j] << " ";
			
		}cout << "]\n";
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {

			resultado = arrayfixe[i][j] + arraytop[i][j];
			arrayfixe[i][j] = resultado;
			arraytop[i][j] = resultado;

		}
	}cout << "RESULTADO DA soma\n";
	for (i = 0; i < 3; i++) {
		cout << "[";
		for (j = 0; j < 3; j++) {

			cout << arrayfixe[i][j] << " ";

		}cout << "]\n";
	}


}