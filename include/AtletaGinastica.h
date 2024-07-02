# ifndef ARVOREGINASTICA_H
# define ARVOREGINASTICA_H

#include "Atleta.h"

class AtletaGinastica: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaGinastica &rhs);

	private:
		string	_modalidade;

	public:
		AtletaGinastica(void);
		AtletaGinastica(const AtletaGinastica &src);
		AtletaGinastica(string nome, string modalidade);
		virtual ~AtletaGinastica(void);

		virtual ostream&	operator<<(ostream &out) const;

		string	getModalidade(void);
		void	setModalidade(string modalidade);
};

# endif
