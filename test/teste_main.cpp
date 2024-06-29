/******************************************************************************/
/*                                                                            */
/*     Autor: Matheus Moreira do Nascimento - 119042060                       */
/*     Tarefa Avaliada 4                                                      */
/*                                                                            */
/*                   ____ Programa Principal de Testes ____                   */
/*                                                                            */
/******************************************************************************/

#include "Utils.h"

using namespace std;

void	separador(void)
{
	cout << "____________________________//_____________________________"
		 << endl
		 << endl;
}

int	main(void)
{

	separador();
	{
		cout << ( 1 == 1 ? "✅" : "❌");
	}
	separador();

	return (0);
}
