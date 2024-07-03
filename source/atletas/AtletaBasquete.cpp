#include "AtletaBasquete.h"

AtletaBasquete::AtletaBasquete(void) : Atleta()
{}

AtletaBasquete::AtletaBasquete(const AtletaBasquete &src)
	: Atleta(src.getNome()), _altura(src._altura)
{}

AtletaBasquete::~AtletaBasquete(void)
{}

AtletaBasquete::AtletaBasquete(string nome, double altura)
	: Atleta(nome), _altura(altura)
{}

double	AtletaBasquete::getAltura(void)
{
	return (this->_altura);
}

void	AtletaBasquete::setAltura(double altura)
{
	this->_altura = altura;
}

ostream&	AtletaBasquete::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome   : " << this->getNome() << "\n";
	out << " | altura : " << this->_altura << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaBasquete &rhs)
{
	rhs << out;
	return (out);
};
