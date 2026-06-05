#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Parte = 0, Variaveis;
	char ABC[26] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'
	};
	vector<char> Salvar(26, '0');
	vector<string> Palavras;
	cin >> Parte;



	switch (Parte)
	{
	case 1:

		cin >> Variaveis;
		Palavras.resize(Variaveis);

		for (int i = 0; i < Variaveis; i++) {

			cin >> Palavras[i] ;

			for (char letras : Palavras[i]) {

				if (isupper(letras) == true) {

					for (int ii = 0; ii < 26; ii++) {
						if (letras == ABC[ii]) {

							Salvar[ii] = letras;

						}

						
					}
				}
			}

		}
		for(int i = 0; i < 26; i++) {
			
			
			if(Salvar[i] != '0') {
				
				cout << (char)tolower(Salvar[i]) << " ";
			}
			
		}

		break;
	case 2: {}

		  break;

	case 3: {}

		  break;
	default:
		break;
	}
}