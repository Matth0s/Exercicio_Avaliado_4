#include "Menu.h"

using namespace std;

void Menu::exibirBemVindo(void)
{
	cout << endl;
	cout << " * ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ *\n";
	cout << " |       Bem Vindo Programa Principal       |\n";
	cout << " |                                          |\n";
	cout << " |        utilize os codigos do Menu        |\n";
	cout << " |       para interacao com o sistema       |\n";
	cout << " * ________________________________________ *"
		 << endl
		 << endl;
}

void Menu::exibirMenuPrincipal(void)
{
	cout << endl;
	cout << "|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|\n";
	cout << "|    Digite o numero do comando desejado:    |\n";
	cout << "|                                            |\n";
	cout << "|    0 - Exibir Sistema                      |\n";
	cout << "|    1 - Adicionar Atleta                    |\n";
	cout << "|    2 - Remover Atleta                      |\n";
	cout << "|    3 - Buscar Atleta                       |\n";
	cout << "|                                            |\n";
	cout << "|    9 - Encerrar Programa                   |\n";
	cout << "|____________________________________________|"
		 << endl
		 << endl;
}

void	Menu::_criarAtletaBasquete(Sistema& sistema)
{
	string	nome;
	string	altura;

	cout << "\nDigite o Nome do Atleta de Basquete:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite a Altura do Atleta de Basquete:\n"
		 << "#: ";
	getline(cin, altura);

	sistema.insere(new AtletaBasquete(nome, stod(altura)));
}

void	Menu::_criarAtletaFutebol(Sistema& sistema)
{
	string	nome;
	string	time;

	cout << "\nDigite o Nome do Atleta de Futebol:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite o Time do Atleta de Futebol:\n"
		 << "#: ";
	getline(cin, time);

	sistema.insere(new AtletaFutebol(nome, time));
}

void	Menu::_criarAtletaGinastica(Sistema& sistema)
{
	string	nome;
	string	modalidade;

	cout << "\nDigite o Nome do Atleta de Ginastica:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite a Modalidade do Atleta de Ginastica:\n"
		 << "#: ";
	getline(cin, modalidade);

	sistema.insere(new AtletaGinastica(nome, modalidade));
}

void	Menu::_criarAtletaJudo(Sistema& sistema)
{
	string	nome;
	string	peso;

	cout << "\nDigite o Nome do Atleta de Judo:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite o Peso do Atleta de Judo:\n"
		 << "#: ";
	getline(cin, peso);

	sistema.insere(new AtletaJudo(nome, stod(peso)));
}

void	Menu::_criarAtletaNatacao(Sistema& sistema)
{
	string	nome;
	string	anosTreino;

	cout << "\nDigite o Nome do Atleta de Natacao:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite os Anos de Treino do Atleta de Natacao:\n"
		 << "#: ";
	getline(cin, anosTreino);

	sistema.insere(new AtletaNatacao(nome, stoi(anosTreino)));
}

void	Menu::_criarAtletaVolei(Sistema& sistema)
{
	string	nome;
	string	velocidade;

	cout << "\nDigite o Nome do Atleta de Volei:\n"
		 << "#: ";
	getline(cin, nome);
	cout << "\nDigite a Velocidade do Saque do Atleta de Volei:\n"
		 << "#: ";
	getline(cin, velocidade);

	sistema.insere(new AtletaVolei(nome, stod(velocidade)));
}

void	Menu::_criarAtleta(Sistema& sistema)
{
	string	nome;

	cout << "\nDigite o Nome do Atleta:\n"
		 << "#: ";
	getline(cin, nome);

	sistema.insere(new Atleta(nome));
}

void Menu::opcao1(Sistema& sistema)
{
	string	atleta;

	cout << "\n/¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\\\n";
	cout << "|      Digite o numero do tipo de      |\n";
	cout << "|   Atleta que vece deseja adicionar   |\n";
	cout << "|                                      |\n";
	cout << "|        1 - Atleta de Basquete        |\n";
	cout << "|        2 - Atleta de Futebol         |\n";
	cout << "|        3 - Atleta de Ginastica       |\n";
	cout << "|        4 - Atleta de Judo            |\n";
	cout << "|        5 - Atleta de Natacao         |\n";
	cout << "|        6 - Atleta de Volei           |\n";
	cout << "\\_____________________________________/\n"
		 << "#: ";
	getline(cin, atleta);

	if (!atleta.compare("1")) {
		Menu::_criarAtletaBasquete(sistema);

	} else if (!atleta.compare("2")) {
		Menu::_criarAtletaFutebol(sistema);

	} else if (!atleta.compare("3")) {
		Menu::_criarAtletaGinastica(sistema);

	} else if (!atleta.compare("4")) {
		Menu::_criarAtletaJudo(sistema);

	} else if (!atleta.compare("5")) {
		Menu::_criarAtletaNatacao(sistema);

	} else if (!atleta.compare("6")) {
		Menu::_criarAtletaVolei(sistema);

	} else {
		cout << "\n!! Opcao Invalida, Atleta Generico sera adicionado !!\n";
		Menu::_criarAtleta(sistema);
	}
}

void Menu::opcao2(Sistema& sistema)
{
	string	nome;

	cout << "\nDigite o Nome do Atleta que deseja remover:\n"
		 << "#: ";
	getline(cin, nome);
	sistema.remove(nome);
}

void Menu::opcao3(Sistema& sistema)
{
	string	nome;

	cout << "\nDigite o Nome do Atleta que deseja buscar:\n"
		 << "#: ";
	getline(cin, nome);

	cout << endl << *sistema.busca(nome);
}

void Menu::encerrarPrograma(void)
{
	cout << "\n/¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\\\n";
	cout << "|       Programa Encerrado       |\n";
	cout << "\\________________________________/\n"
		 << endl;
}

void Menu::comandoInvalido(void)
{
	cout << "\n/¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\\\n";
	cout << "|     Comando não encontrado     |\n";
	cout << "|         Tente novamente        |\n";
	cout << "\\________________________________/\n"
		 << endl;
}
