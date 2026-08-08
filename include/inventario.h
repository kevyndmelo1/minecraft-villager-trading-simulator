#ifndef INVENTARIO_H
#define INVENTARIO_H

typedef struct
{
    int esmeraldas;
    int ferros;
    int papeis;
    int livro_mending;
    int espada_diamante;
} inventario;

void exibir_inventario(inventario jogador);
void verificar_vitoria(inventario jogador);

#endif
