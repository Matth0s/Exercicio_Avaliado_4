# ifndef ARVORENATACAO_H
# define ARVORENATACAO_H

#include "Atleta.h"

class AtletaNatacao: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaNatacao &rhs);

	private:
		int	_anosTreino;

	public:
		AtletaNatacao(void);
		AtletaNatacao(const AtletaNatacao &src);
		AtletaNatacao(string nome, int anosTreino);
		virtual ~AtletaNatacao(void);

		virtual ostream&	operator<<(ostream &out) const;

		int		getAnosTreino(void);
		void	setAnosTreino(int anosTreino);
};

# endif
