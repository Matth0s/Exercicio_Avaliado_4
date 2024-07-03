# ifndef ARVOREFUTEBOL_H
# define ARVOREFUTEBOL_H

#include "Atleta.h"

class AtletaFutebol: public Atleta
{
	friend	ostream&	operator<<(ostream &out, const AtletaFutebol &rhs);

	private:
		string	_time;

	public:
		AtletaFutebol(void);
		AtletaFutebol(const AtletaFutebol &src);
		AtletaFutebol(string nome, string time);
		virtual ~AtletaFutebol(void);

		virtual ostream&	operator<<(ostream &out) const;

		string	getTime(void);
		void	setTime(string time);
};

# endif
