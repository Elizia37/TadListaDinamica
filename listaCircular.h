#ifndef LISTACIRCULAR_H_INCLUDED
#define LISTACIRCULAR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct listaCir
{
    int info;
    struct listaCir *prox;

}ListaCir;

ListaCir* inicializaListaCir();
ListaCir* insereFimCir(ListaCir* l, int v);
ListaCir* criaListaCir();
void liberaListaCir(ListaCir* l);
void imprimeListaCircular(ListaCir* l);
ListaCir* InsereInicioCir(ListaCir* l, int v);
ListaCir* InsereInicioCir2(ListaCir* l, int v);
ListaCir* insereMeioCir(ListaCir* l, int v);
ListaCir* insereFimCir(ListaCir* l, int v);
int tamanhoListaCir(ListaCir* l);
int listaVaziaCir(ListaCir* l);
ListaCir* removeMeioCir(ListaCir* l, int v);
ListaCir* removeInicioCir(ListaCir *l);
ListaCir* removeFimCir(ListaCir* l);
int buscaPosCir(ListaCir* l, int pos);
int buscaValorCir(ListaCir* l, int v);
#endif // LISTACIRCULAR_H_INCLUDED
