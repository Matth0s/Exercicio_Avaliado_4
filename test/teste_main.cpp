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
		arvore = arvore + new string("etaria");
		arvore = arvore + new string("etapa");

		arvore = arvore - "folha";
		arvore = arvore - "turabaro";
		arvore = arvore - "turabaro";

		cout << arvore << endl;
	}
	separador();
	{
		Arvore<Teste>	arvore;

		arvore = arvore + new Teste("martelo");
		arvore = arvore + new Teste("folha");
		arvore = arvore + new Teste("helicoptero");
		arvore = arvore + new Teste("esmalte");
		arvore = arvore + new Teste("bolo");
		arvore = arvore + new Teste("ovelha");
		arvore = arvore + new Teste("valor");

		Arvore<Teste>	arvore2(arvore);

		cout << arvore << endl;
		cout << arvore2 << endl;

		arvore2 = arvore2 - Teste("folha");
		arvore2 = arvore2 - Teste("martelo");

		cout << arvore2 << endl;
	}
	separador();
	{
		Sistema		sistema;

		sistema.insere(new Atleta("marcio"));
		sistema.insere(new Atleta("felipe"));
		sistema.insere(new Atleta("heitor"));
		sistema.insere(new Atleta("elias"));
		sistema.insere(new Atleta("beatriz"));
		sistema.insere(new Atleta("olavo"));
		sistema.insere(new Atleta("vivian"));

		sistema.imprime();
		cout << endl;
	}
	separador();
	{
		Sistema		sistema;

		sistema.insere(new Atleta("marcio"));
		sistema.insere(new Atleta("felipe"));
		sistema.insere(new Atleta("heitor"));
		sistema.insere(new Atleta("elias"));
		sistema.insere(new Atleta("beatriz"));
		sistema.insere(new Atleta("olavo"));
		sistema.insere(new Atleta("vivian"));

		sistema.remove(Atleta("heitor"));
		sistema.remove(Atleta("beatriz"));

		try {
			cout << *sistema.busca("olavo") << endl;
			cout << *sistema.busca("heitor") << endl;
		} catch (exception &e) {
			cout << e.what() << endl;
		}

		sistema.imprime();
		cout << endl;
	}
	separador();
	{
		Sistema		sistema;

		sistema.insere(new AtletaBasquete("marcio", 2.10));
		sistema.insere(new AtletaFutebol("felipe", "Vasco"));
		sistema.insere(new AtletaGinastica("heitor", "argolas"));
		sistema.insere(new AtletaJudo("elias", 120));
		sistema.insere(new AtletaNatacao("beatriz", 15));
		sistema.insere(new AtletaVolei("olavo", 10));
		sistema.insere(new Atleta("vivian"));

		cout << *sistema.busca("felipe") << endl;
		sistema.imprime();
		cout << endl;
	}
	separador();
	{
		Arvore<Atleta>	arvore;

		arvore = arvore + new AtletaBasquete("marcio", 2.10);
		arvore = arvore + new AtletaFutebol("felipe", "Vasco");
		arvore = arvore + new AtletaGinastica("heitor", "argolas");
		arvore = arvore + new AtletaJudo("elias", 120);
		arvore = arvore + new AtletaNatacao("beatriz", 15);
		arvore = arvore + new AtletaVolei("olavo", 10);
		arvore = arvore + new Atleta("vivian");

		Arvore<Atleta>	arvore2(arvore);

		cout << arvore << endl;
		cout << arvore2 << endl;

	}
	separador();

	return (0);
}
