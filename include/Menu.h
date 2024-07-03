#ifndef MENU_H
#define MENU_H

#include "Sistema.h"

#include "AtletaGinastica.h"
#include "AtletaNatacao.h"
#include "AtletaVolei.h"
#include "AtletaBasquete.h"
#include "AtletaJudo.h"
#include "AtletaFutebol.h"

using namespace std;

class Menu
{
	private:
		static void		_criarAtletaBasquete(Sistema& sistema);
		static void		_criarAtletaFutebol(Sistema& sistema);
		static void		_criarAtletaGinastica(Sistema& sistema);
		static void		_criarAtletaJudo(Sistema& sistema);
		static void		_criarAtletaNatacao(Sistema& sistema);
		static void		_criarAtletaVolei(Sistema& sistema);
		static void		_criarAtleta(Sistema& sistema);

	public:
		static void		exibirBemVindo(void);
		static void		exibirMenuPrincipal(void);

		static void		opcao1(Sistema& sistema);
		static void		opcao2(Sistema& sistema);
		static void		opcao3(Sistema& sistema);

		static void		encerrarPrograma(void);
		static void		comandoInvalido(void);
};

#endif
