# ifndef ATLETA_H
# define ATLETA_H

#include <iostream>

using namespace std;

class Atleta
{
	friend	ostream &operator<<(ostream &out, const Atleta &rhs);

	private:
		string	_nome;

	public:
		Atleta(void);
		Atleta(string nome);
		Atleta(const Atleta &src);
		virtual ~Atleta(void);

		Atleta&	operator=(const Atleta &rhs);

		bool operator==(const Atleta &rhs);
		bool operator<(const Atleta &rhs);
		bool operator>(const Atleta &rhs);
		bool operator==(const string &nome);
		bool operator<(const string &nome);
		bool operator>(const string &nome);

		string	getNome(void) const;
		void	setNome(string nome);
};

# endif
