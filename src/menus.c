#include <stdio.h>

#include "menus.h"
#include "cores.h"
#include "recursos.h"
#include "entrada.h"

/* FERREIRO */
void menu_ferreiro(inventario *jogador)
{
    int opcao;

    do
    {
        printf(BRANCO NEGRITO);
        printf("\n====================\n");
        printf(" OFICINA DO FERREIRO\n");
        printf("====================\n");
        printf(RESET);
        printf("\n1 - Vender 1 ferro por 1 esmeralda");
        printf("\n2 - Comprar Espada de Diamante (10 esmeraldas)");
        printf("\n3 - Ver inventario");
        printf("\n0 - Voltar");
        printf("\n\nEscolha: ");

        opcao = ler_inteiro();

        switch (opcao)
        {
        case 1:

            if (jogador->ferros >= 1)
            {
                jogador->ferros -= 1;
                jogador->esmeraldas += 1;

                printf(VERDE "\nTroca realizada com sucesso!\n" RESET);

                exibir_inventario(*jogador);
            }
            else
            {
                printf(VERMELHO "\nVoce nao possui ferro suficiente!\n" RESET);
            }

            break;

        case 2:

            if (jogador->espada_diamante == 1)
            {
                printf("\nVoce ja possui uma Espada de Diamante!\n");
            }
            else if (jogador->esmeraldas >= 10)
            {
                jogador->esmeraldas -= 10;
                jogador->espada_diamante = 1;

                printf(MAGENTA "\n*** ESPADA DE DIAMANTE ADQUIRIDA! ***\n" RESET);

                verificar_vitoria(*jogador);

                exibir_inventario(*jogador);
            }
            else
            {
                printf(VERMELHO "\nVoce precisa de 10 esmeraldas!\n" RESET);
            }

            break;

        case 3:
            exibir_inventario(*jogador);
            break;

        case 0:
            printf("\nVoltando para a vila...\n");
            break;

        default:
            printf(VERMELHO "\nOpcao invalida!\n" RESET);
            break;
        }

    } while (opcao != 0);
}

/* BIBLIOTECA */
void menu_biblioteca(inventario *jogador)
{
    int opcao;

    do
    {
        printf(AMARELO NEGRITO);
        printf("\n====================\n");
        printf("    BIBLIOTECA\n");
        printf("====================\n");
        printf(RESET);

        printf("\n1 - Vender 3 papeis por 1 esmeralda");
        printf("\n2 - Comprar Livro Mending (20 esmeraldas)");
        printf("\n3 - Ver inventario");
        printf("\n0 - Voltar");
        printf("\n\nEscolha: ");

        opcao = ler_inteiro();

        switch (opcao)
        {
        case 1:

            if (jogador->papeis >= 3)
            {
                jogador->papeis -= 3;
                jogador->esmeraldas += 1;

                printf(VERDE "\nTroca realizada com sucesso!\n" RESET);

                exibir_inventario(*jogador);
            }
            else
            {
                printf(VERMELHO "\nVoce precisa de pelo menos 3 papeis!\n" RESET);
            }

            break;

        case 2:

            if (jogador->livro_mending == 1)
            {
                printf("\nVoce ja possui o Livro Mending!\n");
            }
            else if (jogador->esmeraldas >= 20)
            {
                jogador->esmeraldas -= 20;
                jogador->livro_mending = 1;

                printf(MAGENTA "\n*** LIVRO MENDING ADQUIRIDO! ***\n" RESET);

                verificar_vitoria(*jogador);

                exibir_inventario(*jogador);
            }
            else
            {
                printf(VERMELHO "\nVoce precisa de 20 esmeraldas!\n" RESET);
            }

            break;

        case 3:
            exibir_inventario(*jogador);
            break;

        case 0:
            printf("\nVoltando para a vila...\n");
            break;

        default:
            printf(VERMELHO "\nOpcao invalida!\n" RESET);
            break;
        }

    } while (opcao != 0);
}

/* MENU PRINCIPAL */
void menu_principal(inventario *jogador)
{
    int opcao;

    do
    {
        printf(VERDE NEGRITO);
        printf("\n====================\n");
        printf("PRACA DA VILA\n");
        printf("====================\n");
        printf(RESET);
        printf("\n1 - Coletar Recursos");
        printf("\n2 - Oficina do Ferreiro");
        printf("\n3 - Biblioteca");
        printf("\n4 - Ver Inventario");
        printf("\n0 - Sair");
        printf("\n\nEscolha: ");

        opcao = ler_inteiro();

        switch (opcao)
        {
        case 1:
            coletar_recursos(jogador);
            break;

        case 2:
            menu_ferreiro(jogador);
            break;

        case 3:
            menu_biblioteca(jogador);
            break;

        case 4:
            exibir_inventario(*jogador);
            break;

        case 0:
            printf("\nSaindo do jogo...\n");
            break;

        default:
            printf(VERMELHO "\nOpcao invalida!\n" RESET);
            break;
        }

    } while (opcao != 0);
}