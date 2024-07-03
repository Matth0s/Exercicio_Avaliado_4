#include "AtletaJudo.h"

AtletaJudo::AtletaJudo(void)
{}

AtletaJudo::AtletaJudo(const AtletaJudo &src)
	: Atleta(src.getNome()), _peso(src._peso)
{}

AtletaJudo::~AtletaJudo(void)
{}

AtletaJudo::AtletaJudo(string nome, double peso)
	: Atleta(nome), _peso(peso)
{}

double	AtletaJudo::getPeso(void)
{
	return (this->_peso);
}

void	AtletaJudo::setPeso(double peso)
{
	this->_peso = peso;
}

ostream&	AtletaJudo::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome : " << this->getNome() << "\n";
	out << " | peso : " << this->_peso << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaJudo &rhs)
{
	rhs << out;
	return (out);
};

