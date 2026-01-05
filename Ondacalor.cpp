#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int dias=0, previsao=0, media=0, tst=0, tst2=0;
	cin >> media;
	cin >> dias;
	int i=0;
	do {
		i++;
		cin >> previsao;
		if (previsao > media + 5) {
			tst++;
			if (tst > tst2) {
				tst2 = tst;
			}
			else {
				tst = 0;
			}

		}

	} while (i < dias);
	if (tst >= 6) {
		cout << "wave";
	}
	else {
		cout << "flat";
	}
}