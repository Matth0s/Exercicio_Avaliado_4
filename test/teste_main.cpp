/******************************************************************************/
/*                                                                            */
/*     Autor: Matheus Moreira do Nascimento - 119042060                       */
/*     Tarefa Avaliada 4                                                      */
/*                                                                            */
/*                   ____ Programa Principal de Testes ____                   */
/*                                                                            */
/******************************************************************************/

#include "Sistema.h"
#include "AtletaBasquete.h"
#include "AtletaFutebol.h"
#include "AtletaGinastica.h"
#include "AtletaJudo.h"
#include "AtletaNatacao.h"
#include "AtletaVolei.h"
#include "Utils.h"

using namespace std;

struct Teste
{
	friend ostream &operator<<(ostream &out, Teste &rhs);

	string dado;

	Teste(void) : dado() {};
	Teste(const Teste &src) : dado(src.dado) {};
	Teste(string dado) : dado(dado) {};

	Teste& operator=(const Teste &rhs) {
		this->dado = rhs.dado;
		return (*this);
	};
	bool operator==(const Teste &rhs) {
		return (this->dado.compare(rhs.dado) == 0);
	};
	bool operator<(const Teste &rhs) {
		return (this->dado.compare(rhs.dado) < 0);
	};
	bool operator>(const Teste &rhs) {
		return (this->dado.compare(rhs.dado) > 0);
	};
	bool operator==(const string &dado) {
		return (this->dado.compare(dado) == 0);
	};
	bool operator<(const string &dado) {
		return (this->dado.compare(dado) < 0);
	};
	bool operator>(const string &dado) {
		return (this->dado.compare(dado) > 0);
	};
};

ostream &operator<<(ostream &out, Teste &rhs)
{
	out << rhs.dado;
	return (out);
}

void	separador(void)
{
	cout << "____________________________//_____________________________"
		 << endl
		 << endl;
}

int	main(void)
{

	separador();
	{
		Arvore<string>	arvore;

		cout << arvore << endl;
	}
	separador();
	{
		Arvore<string>	arvore;

		arvore = arvore + new string("martelo");
		arvore = arvore + new string("folha");
		arvore = arvore + new string("helicoptero");
		arvore = arvore + new string("esmalte");
		arvore = arvore + new string("bolo");
		arvore = arvore + new string("ovelha");
		arvore = arvore + new string("valor");
		arvore = arvore + new string("rato");
		arvore = arvore + new string("tubarao");
		arvore = arvore + new string("tubarao");

		cout << arvore << endl;
	}
	separador();
	// {
	// 	Arvore<string>	arvore;

	// 	arvore = arvore + "martelo";
	// 	arvore = arvore + "folha";
	// 	arvore = arvore + "helicoptero";
	// 	arvore = arvore + "esmalte";
	// 	arvore = arvore + "bolo";
	// 	arvore = arvore + "ovelha";
	// 	arvore = arvore + "valor";
	// 	arvore = arvore + "rato";
	// 	arvore = arvore + "tubarao";
	// 	arvore = arvore + "etaria";
	// 	arvore = arvore + "etapa";

	// 	arvore = arvore - "folha";
	// 	arvore = arvore - "turabaro";
	// 	arvore = arvore - "turabaro";

	// 	cout << arvore << endl;
	// }
	// separador();
	// {
	// 	Arvore<Teste>	arvore;

	// 	arvore = arvore + Teste("martelo");
	// 	arvore = arvore + Teste("folha");
	// 	arvore = arvore + Teste("helicoptero");
	// 	arvore = arvore + Teste("esmalte");
	// 	arvore = arvore + Teste("bolo");
	// 	arvore = arvore + Teste("ovelha");
	// 	arvore = arvore + Teste("valor");

	// 	Arvore<Teste>	arvore2(arvore);

	// 	cout << arvore << endl;
	// 	cout << arvore2 << endl;

	// 	arvore2 = arvore2 - Teste("folha");
	// 	arvore2 = arvore2 - Teste("martelo");

	// 	cout << arvore2 << endl;
	// }
	// separador();
	// {
	// 	Sistema		sistema;

	// 	sistema.insere(Atleta("marcio"));
	// 	sistema.insere(Atleta("felipe"));
	// 	sistema.insere(Atleta("heitor"));
	// 	sistema.insere(Atleta("elias"));
	// 	sistema.insere(Atleta("beatriz"));
	// 	sistema.insere(Atleta("olavo"));
	// 	sistema.insere(Atleta("vivian"));

	// 	sistema.imprime();
	// 	cout << endl;
	// }
	// separador();
	// {
	// 	Sistema		sistema;

	// 	sistema.insere(Atleta("marcio"));
	// 	sistema.insere(Atleta("felipe"));
	// 	sistema.insere(Atleta("heitor"));
	// 	sistema.insere(Atleta("elias"));
	// 	sistema.insere(Atleta("beatriz"));
	// 	sistema.insere(Atleta("olavo"));
	// 	sistema.insere(Atleta("vivian"));

	// 	sistema.remove(Atleta("heitor"));
	// 	sistema.remove(Atleta("beatriz"));

	// 	try {
	// 		cout << *sistema.busca("olavo") << endl;
	// 		cout << *sistema.busca("heitor") << endl;
	// 	} catch (exception &e) {
	// 		cout << e.what() << endl;
	// 	}

	// 	sistema.imprime();
	// 	cout << endl;
	// }
	separador();
	{
		Sistema		sistema;

		sistema.insere(new AtletaBasquete("marcio", 2.10));
		// sistema.insere(AtletaFutebol("felipe", "Vasco"));

		// cout << *sistema.busca("felipe") << endl;
		sistema.imprime();
		cout << endl;
	}
	separador();
	{
		// Atleta*	a = new AtletaBasquete("marcio", 2.10);
		// Atleta* b = new AtletaFutebol("felipe", "Vasco");
		// AtletaGinastica("heitor", "Argolas");
		// AtletaJudo("elias", 150.30);
		// AtletaNatacao("beatriz", 15);
		// AtletaVolei("olavo", 10);
		// Atleta("vivian");

		// cout << *a <<endl;
		// cout << *b <<endl;

		// cout << *sistema.busca("felipe") << endl;
		// sistema.imprime();
		// cout << endl;
		// delete a;
		// delete b;
	}
	separador();

	return (0);
}
