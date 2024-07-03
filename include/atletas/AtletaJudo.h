# ifndef ARVOREJUDO_H
# define ARVOREJUDO_H

#include "Atleta.h"

class AtletaJudo: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaJudo &rhs);

	private:
		double	_peso;

	public:
		AtletaJudo(void);
		AtletaJudo(const AtletaJudo &src);
		AtletaJudo(string nome, double peso);
		virtual ~AtletaJudo(void);

		virtual ostream&	operator<<(ostream &out) const;

		double	getPeso(void);
		void	setPeso(double peso);
};

# endif
