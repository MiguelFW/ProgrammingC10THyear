#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int rui, mae;
	int contador = 1;
	int resposta = 0;
	cin >> rui;
	cin >> mae;
	do
	{contador++;
		rui++;
		mae++;

		
			
		
	} while (rui != mae/2);
	cout << contador;
}