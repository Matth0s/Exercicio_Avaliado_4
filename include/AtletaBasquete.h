# ifndef ARVOREBASQUETE_H
# define ARVOREBASQUETE_H

#include "Atleta.h"

class AtletaBasquete: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaBasquete &rhs);

	private:
		double	_altura;

	public:
		AtletaBasquete(void);
		AtletaBasquete(const AtletaBasquete &src);
		AtletaBasquete(string nome, double altura);
		virtual ~AtletaBasquete(void);

		virtual ostream&	operator<<(ostream &out) const;

		double	getAltura(void);
		void	setAltura(double altura);
};

# endif
