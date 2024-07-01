/******************************************************************************/
/*                                                                            */
/*     Autor: Matheus Moreira do Nascimento - 119042060                       */
/*     Tarefa Avaliada 4                                                      */
/*                                                                            */
/*                   ____ Programa Principal de Testes ____                   */
/*                                                                            */
/******************************************************************************/

#include "Arvore.h"
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

		arvore.mostrar();
	}
	separador();
	{
		Arvore<string>	arvore;

		arvore = arvore + "martelo";
		arvore = arvore + "folha";
		arvore = arvore + "helicoptero";
		arvore = arvore + "esmalte";
		arvore = arvore + "bolo";
		arvore = arvore + "ovelha";
		arvore = arvore + "valor";
		arvore = arvore + "rato";
		arvore = arvore + "tubarao";
		arvore = arvore + "tubarao";

		arvore.mostrar();
		cout << endl;
	}
	separador();
	{
		Arvore<string>	arvore;

		arvore = arvore + "martelo";
		arvore = arvore + "folha";
		arvore = arvore + "helicoptero";
		arvore = arvore + "esmalte";
		arvore = arvore + "bolo";
		arvore = arvore + "ovelha";
		arvore = arvore + "valor";
		arvore = arvore + "rato";
		arvore = arvore + "tubarao";
		arvore = arvore + "etaria";
		arvore = arvore + "etapa";

		arvore = arvore - "folha";
		arvore = arvore - "turabaro";
		arvore = arvore - "turabaro";

		arvore.mostrar();
		cout << endl;
	}
	separador();
	{
		Arvore<Teste>	arvore;

		arvore = arvore + Teste("martelo");
		arvore = arvore + Teste("folha");

		cout << *(arvore("martelo")) << endl;
		cout << ( arvore("teste") == NULL ? "✅" : "❌") << endl;

		arvore.mostrar();
		cout << endl;
	}
	separador();

	return (0);
}
