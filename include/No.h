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
	No(const T dado);
	~No(void);

	No<T>&	operator=(const No<T> &rhs);
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
No<T>::No(const T dado)
	: dado(NULL), menor(NULL), maior(NULL)
{
	this->dado = new T(dado);
};

template<class T>
No<T>::~No(void)
{
	delete dado;
};

template<class T>
No<T>&	No<T>::operator=(const No<T> &rhs)
{
	if (this != &rhs) {
		if (this->dado)
			delete this->dado;
		this->dado = new T(*(rhs.dado));
		this->menor = rhs.menor;
		this->maior = rhs.maior;
	}
	return (*this);
};

# endif
