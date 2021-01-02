#ifndef PAC_H
#define PAC_H

#define CIMA 'w'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BAIXO 's'
#define BOMBA 'b'

int acabou();
int ehdirecao(char direcao);
void move(char direcao);

void fantasmas();
int praondefantasmavai(int xatual,int yatual,int* xdestino, int* ydestino);
void explodepilula2(int x,int y,int somax, int somay,int qtd);
void explodepilula();

#endif