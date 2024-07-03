/******************************************************************************/
/*                                                                            */
/*     Autor: Matheus Moreira do Nascimento - 119042060                       */
/*     Tarefa Avaliada 4                                                      */
/*                                                                            */
/*                        ____ Programa Principal ____                        */
/*                                                                            */
/******************************************************************************/

#include "Menu.h"

using namespace std;

int main(void)
{
	string	comando;
	Sistema	sistema;

	Menu::exibirBemVindo();

	while (true) {

		Menu::exibirMenuPrincipal();

		cout << "# Insira o comando: ";
		getline(cin, comando);

		if (!comando.compare("0")) {
			sistema.imprime();

		} else if (!comando.compare("1")) {
			try {
				Menu::opcao1(sistema);
			} catch (invalid_argument& ex) {
				cerr << "\nValor digitado invalido: " << ex.what() << endl;
			} catch (out_of_range& ex) {
				cerr << "\nValor fora do intervalo numerico: " << ex.what() << endl;
			}

		} else if (!comando.compare("2")) {
			Menu::opcao2(sistema);

		} else if (!comando.compare("3")) {
			try {
				Menu::opcao3(sistema);
			} catch (Sistema::AtletaNaoEncontrado& ex) {
				cerr << ex.what() << endl;
			}

		} else if (!comando.compare("9")) {
			Menu::encerrarPrograma();
			break;

		} else {
			Menu::comandoInvalido();
		}

		cout << "\nAperte Enter para continuar...";
		getline(cin, comando);
	}

	return (0);
}
