#include "Atleta.h"

Atleta::Atleta(void) : _nome("")
{}

Atleta::Atleta(string nome) : _nome(nome)
{}

Atleta::Atleta(const Atleta &src) : _nome("")
{
	this->operator=(src);
}

Atleta::~Atleta(void)
{}

Atleta&	Atleta::operator=(const Atleta &rhs)
{
	if (this != &rhs) {
		this->_nome = rhs._nome;
	}
	return (*this);
}

bool	Atleta::operator==(const Atleta &rhs)
{
	return (this->_nome.compare(rhs._nome) == 0);
}

bool	Atleta::operator<(const Atleta &rhs)
{
	return (this->_nome.compare(rhs._nome) < 0);
}

bool	Atleta::operator>(const Atleta &rhs)
{
	return (this->_nome.compare(rhs._nome) > 0);
}

bool	Atleta::operator==(const string &nome)
{
	return (this->_nome.compare(nome) == 0);
}

bool	Atleta::operator<(const string &nome)
{
	return (this->_nome.compare(nome) < 0);
}

bool	Atleta::operator>(const string &nome)
{
	return (this->_nome.compare(nome) > 0);
}

string	Atleta::getNome(void) const
{
	return (this->_nome);
}

void	Atleta::setNome(string nome)
{
	this->_nome = nome;
}

ostream&	Atleta::operator<<(ostream &out) const
{
	out << " /¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n";
	out << " | nome : " << this->_nome << "\n";
	out << " \\____________________\n";
	return (out);
};

ostream&	operator<<(ostream &out, const Atleta &rhs)
{
	rhs << out;
	return (out);
};
