#include <stdio.h>

#include "recursos.h"
#include "cores.h"

/* COLETA */
void coletar_recursos(inventario *jogador)
{
    printf(CIANO "\nColetando recursos...\n" RESET);

    jogador->ferros += 2;
    jogador->papeis += 3;

    printf(VERDE "Recursos coletados com sucesso!\n" RESET);
    exibir_inventario(*jogador);
}