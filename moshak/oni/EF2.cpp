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
	vector<char> Salvar(26,'0');
	vector<string> Palavras;
	
	cin >> Parte;


	int contaMaiuscula = 0;
	int contaMinuscula = 0,yy = 0;
	int sinalizador_ = 0;
	vector<string> Resultado2;

	switch (Parte)
	{
	case 1:

		cin >> Variaveis;
		Palavras.resize(Variaveis);

		for (int i = 0; i < Variaveis; i++) {

			cin >> Palavras[i];

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
		for (int i = 0; i < 26; i++) {


			if (Salvar[i] != '0') {

				cout << (char)tolower(Salvar[i]) << " ";
			}

		}
		break;
	case 2: 	cin >> Variaveis;
		Palavras.resize(Variaveis);
		Resultado2.resize(Variaveis);

		for (int i = 0; i < Variaveis; i++) {

			cin >> Palavras[i];
			yy=1;
			for (char letras : Palavras[i]) {
				
				if(isupper(letras) == true) {
					contaMaiuscula++;
				}
				if( yy == 1 &&islower(letras) )  {
					contaMinuscula++;
					
				}

				if( letras == '_') {
					sinalizador_ = 1;
				}
				
				if (letras == '-') {
					sinalizador_ = 2;
				}
				yy = 0;
				
			}
			
			if(contaMinuscula == 1 && contaMaiuscula >=1) {
				Resultado2[i] = "dromedaryCase";
			}
			else if (contaMinuscula == 0 && contaMaiuscula >= 1) {
				Resultado2[i] = "PascalCase";
			}
			else if (sinalizador_ == 1) {
				Resultado2[i] = "snake_case";
			}
			else if (sinalizador_ == 2) {
				Resultado2[i] = "kebab-case";
			}
			sinalizador_ = 0;
			contaMaiuscula = 0;
			contaMinuscula = 0;
		}


		for (int i = 0; i < Variaveis; i++) {
		
			cout << Resultado2[i] << endl;
		}
		  break;

	case 3: {}

		  break;
	default:
		break;
	}
}//oni n aceita a submissão por alguma razão mas o codigo funciona ta ai. Dps faço a 3 parte