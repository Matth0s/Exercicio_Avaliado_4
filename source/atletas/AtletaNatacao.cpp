#include "AtletaNatacao.h"

AtletaNatacao::AtletaNatacao(void)
{}

AtletaNatacao::AtletaNatacao(const AtletaNatacao &src)
	: Atleta(src.getNome()), _anosTreino(src._anosTreino)
{}

AtletaNatacao::~AtletaNatacao(void)
{}

AtletaNatacao::AtletaNatacao(string nome, int anosTreino)
	: Atleta(nome), _anosTreino(anosTreino)
{}

int		AtletaNatacao::getAnosTreino(void)
{
	return (this->_anosTreino);
}

void	AtletaNatacao::setAnosTreino(int anosTreino)
{
	this->_anosTreino = anosTreino;
}

ostream&	AtletaNatacao::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome           : " << this->getNome() << "\n";
	out << " | anos de treino : " << this->_anosTreino << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaNatacao &rhs)
{
	rhs << out;
	return (out);
};
