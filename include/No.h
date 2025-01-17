# ifndef NO_H
# define NO_H

template<class T>
struct No
{
	T*		dado;
	No<T>*	menor;
	No<T>*	maior;

	No(void);
	No(const No<T> &src);
	No(T* dado);
	~No(void);

	No<T>&	operator=(const No<T> &rhs);

	bool	operator==(const No<T> &rhs);
	bool	operator<(const No<T> &rhs);
	bool	operator>(const No<T> &rhs);

	bool	operator==(const T &dado);
	bool	operator<(const T &dado);
	bool	operator>(const T &dado);
};

template<class T>
No<T>::No(void)
	: dado(NULL), menor(NULL), maior(NULL)
{};

template<class T>
No<T>::No(const No<T> &src)
	: dado(NULL), menor(NULL), maior(NULL)
{
	this->operator=(src);
};

template<class T>
No<T>::No(T* dado)
	: dado(dado), menor(NULL), maior(NULL)
{};

template<class T>
No<T>::~No(void)
{};

template<class T>
No<T>&	No<T>::operator=(const No<T> &rhs)
{
	if (this != &rhs) {
		if (this->dado)
			delete this->dado;
		this->dado = new T(*rhs.dado);
		this->menor = rhs.menor;
		this->maior = rhs.maior;
	}
	return (*this);
};

template<class T>
bool	No<T>::operator==(const No<T> &rhs)
{
	return (*(this->dado) == *(rhs.dado));
};

template<class T>
bool	No<T>::operator<(const No<T> &rhs)
{
	return (*(this->dado) < *(rhs.dado));
};

template<class T>
bool	No<T>::operator>(const No<T> &rhs)
{
	return (*(this->dado) > *(rhs.dado));
};

template<class T>
bool	No<T>::operator==(const T &dado)
{
	return (*(this->dado) == dado);
};

template<class T>
bool	No<T>::operator<(const T &dado)
{
	return (*(this->dado) < dado);
};

template<class T>
bool	No<T>::operator>(const T &dado)
{
	return (*(this->dado) > dado);
};

# endif
