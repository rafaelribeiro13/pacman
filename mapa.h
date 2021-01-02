#ifndef _MAPA_H
#define _MAPA_H

#define HEROI '@'
#define FANTASMA 'F'
#define PILULA 'P'
#define PAREDE_HORIZONTAL '-'
#define PAREDE_VERTICAL '|'
#define VAZIO '.'

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;


struct posicao {
    int x;
    int y;
};

typedef struct posicao POSICAO;

int ehvalida(MAPA* m,int x, int y);
void andanomapa(MAPA* m,int xorigem, int yorigem,int xdestino,int ydestino);
void liberamapa(MAPA* m);

void alocamapa(MAPA* m);
void lemapa(MAPA* m);
int encontranomapa(MAPA* m, POSICAO* heroi,char c);

void copiamapa(MAPA* origem, MAPA* destino);
int podeandar(MAPA* m,char personagem,int x, int y);
int ehparede(MAPA* m,int x,int y);

int ehpersonagem(MAPA* m,char personagem, int x, int y);

#endif