#include "Sistema.h"

Sistema::Sistema(void) : _arvore() {}

Sistema::~Sistema(void) {}

void	Sistema::insere(const Atleta& atleta)
{
	this->_arvore + atleta;
}

Atleta*	Sistema::busca(const string& nome)
{
	Atleta	*atleta = this->_arvore(nome);

	if (!atleta)
		throw Sistema::AtletaNaoEncontrado();
	return (atleta);
}

void	Sistema::remove(const Atleta& atleta)
{
	this->_arvore - atleta;
}

void	Sistema::imprime(void) const
{
	cout << this->_arvore;
}

const char* Sistema::AtletaNaoEncontrado::what(void) const throw()
{
	return ("O Sistema nao possui um atleta com o nome indicado!");
}
