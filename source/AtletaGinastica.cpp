#include "AtletaGinastica.h"

AtletaGinastica::AtletaGinastica(void)
{}

AtletaGinastica::AtletaGinastica(const AtletaGinastica &src)
	: Atleta(src.getNome()), _modalidade(src._modalidade)
{}

AtletaGinastica::~AtletaGinastica(void)
{}

AtletaGinastica::AtletaGinastica(string nome, string modalidade)
	: Atleta(nome), _modalidade(modalidade)
{}

string	AtletaGinastica::getModalidade(void)
{
	return (this->_modalidade);
}

void	AtletaGinastica::setModalidade(string modalidade)
{
	this->_modalidade = modalidade;
}

ostream&	AtletaGinastica::operator<<(ostream &out) const
{
	out << "  /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << "  | nome       : " << this->getNome() << "\n";
	out << "  | modalidade : " << this->_modalidade << "\n";
	out << "  \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaGinastica &rhs)
{
	rhs << out;
	return (out);
};
