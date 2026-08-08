
#include <stdio.h>
#include <stdlib.h>

#include "inventario.h"
#include "cores.h"
#include "recursos.h"
#include "menus.h"

/* MAIN */
int main()
{
	inventario jogador;

	printf(CIANO NEGRITO);
	printf("\n");
	printf("#############################################################\n");
	printf("#                                                           #\n");
	printf("#               MINE VILLAGER TRADING SIMULATOR             #\n");
	printf("#                                                           #\n");
	printf("#############################################################\n");
	printf(RESET);

	printf(AMARELO);
	printf("\nBem-vindo, aventureiro!\n");
	printf("Colete recursos e negocie com os aldeoes.\n");
	printf("Conquiste os itens mais raros da vila.\n\n");
	printf(RESET);

	printf("\nEscolha suas esmeraldas iniciais: ");
	scanf("%d", &jogador.esmeraldas);

	printf("Escolha seus ferros iniciais: ");
	scanf("%d", &jogador.ferros);

	printf("Escolha seus papeis iniciais: ");
	scanf("%d", &jogador.papeis);

	jogador.livro_mending = 0;
	jogador.espada_diamante = 0;

	exibir_inventario(jogador);

	menu_principal(&jogador);

	return 0;
}