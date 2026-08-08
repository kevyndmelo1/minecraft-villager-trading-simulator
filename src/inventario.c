#include <stdio.h>
#include <stdlib.h>

#include "inventario.h"
#include "cores.h"

/* INVENTARIO */
void exibir_inventario(inventario jogador)
{
    printf(CIANO NEGRITO);
    printf("\n========== INVENTARIO ==========\n");
    printf(RESET);

    printf(VERDE "Esmeraldas: %d\n" RESET, jogador.esmeraldas);
    printf(BRANCO "Ferros: %d\n" RESET, jogador.ferros);
    printf(AMARELO "Papeis: %d\n" RESET, jogador.papeis);

    printf("\n");

    printf(MAGENTA "Livro Mending: %s\n" RESET,
           jogador.livro_mending ? "SIM" : "NAO");

    printf(CIANO "Espada Diamante: %s\n" RESET,
           jogador.espada_diamante ? "SIM" : "NAO");
}
/* VITORIA */
void verificar_vitoria(inventario jogador)
{
    if (jogador.espada_diamante == 1 &&
        jogador.livro_mending == 1)
    {
        printf(MAGENTA NEGRITO);

        printf("\n");
        printf("#########################################\n");
        printf("#                                       #\n");
        printf("#       PARABENS, AVENTUREIRO!          #\n");
        printf("#                                       #\n");
        printf("#########################################\n");

        printf("\nVoce completou todas as trocas da vila!\n");
        printf("Espada de Diamante obtida!\n");
        printf("Livro Mending obtido!\n");

        printf("\nVOCE VENCEU O JOGO!\n");

        printf(RESET);
        exit(0);
    }
}