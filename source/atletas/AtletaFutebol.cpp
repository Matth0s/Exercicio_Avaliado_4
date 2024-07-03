#include "AtletaFutebol.h"

AtletaFutebol::AtletaFutebol(void)
{}

AtletaFutebol::AtletaFutebol(const AtletaFutebol &src)
	: Atleta(src.getNome()), _time(src._time)
{}

AtletaFutebol::~AtletaFutebol(void)
{}

AtletaFutebol::AtletaFutebol(string nome, string time)
	: Atleta(nome), _time(time)
{}

string	AtletaFutebol::getTime(void)
{
	return (this->_time);
}

void	AtletaFutebol::setTime(string time)
{
	this->_time = time;
}

ostream&	AtletaFutebol::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome : " << this->getNome() << "\n";
	out << " | time : " << this->_time << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const AtletaFutebol &rhs)
{
	rhs << out;
	return (out);
};
