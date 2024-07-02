# ifndef SISTEMA_H
# define SISTEMA_H

#include "Arvore.h"
#include "Atleta.h"

using namespace std;

class Sistema
{
	public:
		/* Classe de exceção para alertar quando o atleta não esta presente no sistema. */
		class AtletaNaoEncontrado: public exception {
			public:
				virtual const char* what(void) const throw();
		};

	private:
		Arvore<Atleta>	_arvore;

	public:
		Sistema(void);
		~Sistema(void);

		/* Insere um atleta no sistema */
		void	insere(Atleta* atleta);
		/* Busca um atleta pelo nome no sistema */
		Atleta*	busca(const string& nome);
		/* Remove um atleta no sistema */
		void	remove(const Atleta& atleta);
		/* Imprime toda a relação de atletas da arvore */
		void	imprime(void) const;
};

# endif
