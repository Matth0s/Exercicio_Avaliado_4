#include "AtletaVolei.h"

AtletaVolei::AtletaVolei(void)
{}

AtletaVolei::AtletaVolei(const AtletaVolei &src)
	: Atleta(src.getNome()), _velocidadeSaque(src._velocidadeSaque)
{}

AtletaVolei::~AtletaVolei(void)
{}

AtletaVolei::AtletaVolei(string nome, double velocidadeSaque)
	: Atleta(nome), _velocidadeSaque(velocidadeSaque)
{}

double	AtletaVolei::getVelocidadeSaque(void)
{
	return (this->_velocidadeSaque);
}

void	AtletaVolei::setVelocidadeSaque(double velocidadeSaque)
{
	this->_velocidadeSaque = velocidadeSaque;
}

ostream&	AtletaVolei::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome       : " << this->getNome() << "\n";
	out << " | vel. saque : " << this->_velocidadeSaque << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaVolei &rhs)
{
	rhs << out;
	return (out);
};

