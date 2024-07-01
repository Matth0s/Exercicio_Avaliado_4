# ifndef ARVORE_H
# define ARVORE_H

#include <iostream>
#include "No.h"

using namespace std;

template<class T>
class Arvore
{
	template<class U>
	friend	ostream &operator<<(ostream &out, Arvore<U> &rhs);

	private:
		No<T>*	_raiz;

		/* Função responsavel por fazer a desalocação de memoria dos nós criados. */
		void	_limparNos(No<T>* no);
		/* Função responsavel por fazer a copia profunda de uma outra arvore
		passada por parametro. */
		void	_inserirNos(No<T>** dst, No<T>* src);

		/* Realiza a busca do elemento nos nós da arvore de forma recursiva. */
		template<class U>
		No<T>**	_buscarDado(No<T>** no, const U dado);
		/* Utilizada para inserir um elemento novo na arvore de forma recursiva. */
		void	_inserirDado(No<T>** no, const T dado);
		/* Faz o delete do nó e cuida para a avore continuar conectada. */
		void	_removerNo(No<T>** no);
		/* Realiza a impressão dos elementos na arvore de forma recursiva. */
		void	_mostrar(ostream &out, No<T>* no, int nivel);

	public:
		Arvore(void);
		Arvore(const Arvore<T> &src);
		~Arvore(void);

		Arvore<T>&	operator=(const Arvore<T> &rhs);

		/* Cordena a utilização do metodo _buscarDado */
		T*			operator()(const string &chave);
		/* Cordena a utilização do metodo _inserirDado */
		Arvore<T>&	operator+(const T &dado);
		/* Cordena a utilização do metodo _removerDado */
		Arvore<T>&	operator-(const T &dado);
};

template<class T>
Arvore<T>::Arvore(void)
	: _raiz(NULL)
{};

template<class T>
Arvore<T>::Arvore(const Arvore<T> &src)
	: _raiz(NULL)
{
	this->operator=(src);
};

template<class T>
Arvore<T>::~Arvore(void)
{
	this->_limparNos(_raiz);
};

template<class T>
Arvore<T>&	Arvore<T>::operator=(const Arvore<T> &rhs)
{
	if (this != &rhs) {
		if (_raiz)
			this->_limparNos(_raiz);
		this->_inserirNos(&_raiz, rhs._raiz);
	}
	return (*this);
};

template<class T>
void	Arvore<T>::_limparNos(No<T>* no)
{
	if (!no)
		return ;
	this->_limparNos(no->menor);
	this->_limparNos(no->maior);
	delete no;
};

template<class T>
void	Arvore<T>::_inserirNos(No<T>** dst, No<T>* src)
{
	if (!src)
		return ;
	*dst = new No<T>(*(src->dado));
	this->_inserirNos(&((*dst)->menor), src->menor);
	this->_inserirNos(&((*dst)->maior), src->maior);
};

template<class T>
template<class U>
No<T>**	Arvore<T>::_buscarDado(No<T>** no, U dado)
{
	if (!no || !*no)
		return (NULL);
	if (*((*no)->dado) < dado)
		return (this->_buscarDado(&((*no)->maior), dado));
	else if (*((*no)->dado) > dado)
		return (this->_buscarDado(&((*no)->menor), dado));

	return (no);
};

template<class T>
T*		Arvore<T>::operator()(const string &chave)
{
	No<T>**	no = this->_buscarDado(&_raiz, chave);
	T*		dado = NULL;

	if (no)
		dado = (*no)->dado;
	return (dado);
};

template<class T>
void	Arvore<T>::_inserirDado(No<T>** no, const T dado)
{
	if (!*no)
		*no = new No<T>(dado);
	else if (*((*no)->dado) < dado)
		this->_inserirDado(&((*no)->maior), dado);
	else
		this->_inserirDado(&((*no)->menor), dado);
};

template<class T>
Arvore<T>&	Arvore<T>::operator+(const T &dado)
{
	No<T>**	checkar = this->_buscarDado(&_raiz, dado);

	if (!checkar)
		this->_inserirDado(&_raiz, dado);
	return (*this);
};

template<class T>
void	Arvore<T>::_removerNo(No<T>** no)
{
	No<T>*	noDeletar;
	No<T>*	noAnterior;
	No<T>*	noCandidato;

	if (!no || !(*no))
		return ;

	noDeletar = *no;
	if (!(noDeletar->maior)) {
		*no = noDeletar->menor;
	} else if (!(noDeletar->menor)) {
		*no = noDeletar->maior;
	} else {
		noAnterior = noDeletar;
		noCandidato = noDeletar->menor;
		while (noCandidato->maior) {
			noAnterior = noCandidato;
			noCandidato = noCandidato->maior;
		}
		if (noCandidato != noDeletar->menor) {
			noAnterior->maior = noCandidato->menor;
			noCandidato->menor = noDeletar->menor;
		}
		noCandidato->maior = noDeletar->maior;
		*no = noCandidato;
	}
	delete noDeletar;
};

template<class T>
Arvore<T>&	Arvore<T>::operator-(const T &dado)
{
	No<T>**	checkar = this->_buscarDado(&_raiz, dado);

	if (checkar) {
		this->_removerNo(checkar);
	}
	return (*this);
};

template<class T>
void	Arvore<T>::_mostrar(ostream &out, No<T>* no, int nivel)
{
	if (no)
	{
		if (no->menor) {
			_mostrar(out, no->menor, nivel + 1);
			out << " >";
		}
		out << "(" << nivel << ")" << *(no->dado);
		if (no->maior) {
			out << "< ";
			_mostrar(out, no->maior, nivel + 1);
		}
	}
};

template<class U>
ostream &operator<<(ostream &out, Arvore<U> &rhs)
{
	rhs._mostrar(out, rhs._raiz, 0);
	return (out);
};

# endif
