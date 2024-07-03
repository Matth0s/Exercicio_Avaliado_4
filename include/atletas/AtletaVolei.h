# ifndef ARVOREVOLEI_H
# define ARVOREVOLEI_H

#include "Atleta.h"

class AtletaVolei: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaVolei &rhs);

	private:
		double _velocidadeSaque;

	public:
		AtletaVolei(void);
		AtletaVolei(const AtletaVolei &src);
		AtletaVolei(string nome, double velocidadeSaque);
		virtual ~AtletaVolei(void);

		virtual ostream&	operator<<(ostream &out) const;

		double	getVelocidadeSaque(void);
		void	setVelocidadeSaque(double velocidadeSaque);
};

# endif
