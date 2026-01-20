#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;




void saldo(int dinheiro) {

    cout << " tu tens " << dinheiro << "$";

}
int debito(int dinheiro) {
    int qntd;
    cout << "quanto queres pagar";
    cin >> qntd;

    if (dinheiro < qntd) {
        cout << "puto tas pobre n da";
    }
    else if (qntd < 0) {
        cout << "epa n�o da pra se pagar com numeros negativos";
    }
    else {
      
    }
    return 0;

}
int deposito(int dinheiro) {
    int colocadinheiro;
    int VariavelRand = 4;
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    string nomesfeio[4] = { "Uau! Ainda vais preso!","A nadar em dinheiro, ahn?","Cuidado para n�o afundares o banco com tanto dinheiro!",
        "J� vi que finalmente tomaste banho e foste a casa da madrinha" };

    cout << "quanto queres depositar";
    cin >> colocadinheiro;
    if (colocadinheiro >= 2000) {
        VariavelRand = rand() % 4;
        cout << nomesfeio[VariavelRand];
        dinheiro += colocadinheiro;

    }
    else if (colocadinheiro <= 0) {
        cout << "n�o consegues doar dinheiro ao banco nem depositar 0";
    }
    else {

        dinheiro += colocadinheiro;


    }
 return colocadinheiro;
}
int enviar(int dinheiro) {
    string pessoa;
    setlocale(LC_ALL, "Portuguese");
    int enviodinheiro;
    cout << "queres enviar dinheiro a quem?";
    cin >> pessoa;
    cout << "quanro vais enviar";
    cin >> enviodinheiro;

    if (enviodinheiro > dinheiro) {
        cout << "n�o tens dinheiro puto";

    }
    else if (enviodinheiro < 0) {
        cout << "Tas a tentar roubar o amigo? assim n�o da";
    }
    else {
        cout << "enviaste com sucesso " << enviodinheiro << " $ a " << pessoa;
        dinheiro = dinheiro - enviodinheiro;
    }
    

return enviodinheiro;
}
void Iecra() {
    int escolha;
    int money = 1000;

    do {
        cout << "\n----------------- Menu ----------------\n";
        cout << "1. Deposito\n";
        cout << "2. Debito\n";
        cout << "3. Verificar saldo\n";
        cout << "4. Enviar dinheiro\n";
        cout << "0. Sair\n";
        cout << "---------------------------------------\n";
        cin >> escolha;

        switch (escolha) {
        case 1:
            system("cls");

            money += deposito(money);
            break;

        case 2:
            system("cls");
            money -= debito(money);
            break;

        case 3:
            system("cls");
            saldo(money);
            break;

        case 4:
            system("cls");
            money -= enviar(money);
            break;
        case 0:
            system("cls");
            cout << "A sair do menu...\n";
            break;

        default:
            cout << "Opcao invalida\n";
        }

    } while (escolha != 0);
}

int main() {
    int R;
    cout << "digite 1 para abrir o menu bancario";
    cin >> R;
    if (R == 1) {
        Iecra();
    }
}