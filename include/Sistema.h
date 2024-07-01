# ifndef SISTEMA_H
# define SISTEMA_H

#include "Arvore.h"
#include "Atleta.h"

class Sistema
{
	private:
		Arvore<Atleta>	_arvore;

	public:
		Sistema(void);
		~Sistema(void);

};

# endif
