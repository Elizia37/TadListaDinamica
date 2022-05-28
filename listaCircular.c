#include "listaCircular.h"
#include <stdio.h>
#include <stdlib.h>

ListaCir* inicializaListaCir()
{
    return NULL;
}
ListaCir* criaListaCir()
{
    ListaCir* l=(ListaCir*)malloc(sizeof(ListaCir));
    if(l==NULL)
        return NULL;
    return l;
}
int listaVaziaCir(ListaCir* l)
{
    if(l==NULL)
        return 0;
    else
        return 1;
}
void liberaListaCir(ListaCir* l)
{
    ListaCir* aux=NULL, *novo=l;
    if(l==NULL)
        printf("Lista vazia");
    while(novo->prox!=l)
    {
        aux=novo->prox;
        free(aux);
        novo=aux;

        printf("\nfree");
    }
    free(l);
    printf("\nfreetotal");
}
ListaCir* InsereInicioCir(ListaCir* l, int v) // função mais elegante
{
    ListaCir* novo= criaListaCir();
    if(novo==NULL)
        return NULL;
    novo->info=v;
    if(l==NULL)
    {
        l=novo;
        novo->prox=l;
        return l;
    }
    novo->prox=l->prox;
    l->prox=novo;
    l=novo;
    return l;
}
ListaCir* InsereInicioCir2(ListaCir* l, int v) //função com auxiliar percorrendo a lista
{
    ListaCir *aux=l;
    ListaCir* novo= criaListaCir();
    if(novo==NULL)
        return NULL;
    novo->info=v;
    if(l==NULL)
    {
        l=novo;
        novo->prox=novo;
    }
    else
    {
        while(aux->prox!=l)
        {
            aux=aux->prox;
        }
        aux->prox=novo;
        novo->prox=l;
        l=novo;
    }

    return l;
}
ListaCir* insereFimCir(ListaCir* l, int v)
{
    ListaCir* novo=criaListaCir();
    if(novo==NULL)
        return NULL;
    novo->info=v;
    ListaCir* aux=l;

    if(l==NULL)
    {
        l=novo;
        novo->prox=novo;
    }
    else
    {
        while(aux->prox!=l)
        {
            aux=aux->prox;
        }
        aux->prox=novo;
        novo->prox=l;
    }
    return l;
}
ListaCir* insereMeioCir(ListaCir* l, int v)
{
    ListaCir* ant=l, *aux=l;
    ListaCir* novo=criaListaCir();
    if(novo==NULL)
        return NULL;
    novo->info=v;
    if(l==NULL)
    {
        printf("\nentrou aqui 1--");
        l=novo;
        novo->prox=novo;
        printf("%p 1:",l);
        return l;
    }
    if(aux->info > v)//ver
    {
        while(aux->prox!=l)
            aux=aux->prox;

        novo->prox=l;
        aux->prox=novo;
        l=novo;
        printf("\nentrou aqui 2--");
        printf("%p 2:",l);
        return l;
    }
    ant=l;
    aux=l->prox;
    while(aux!=l && aux->info < v)
    {
        ant=aux;
        aux=aux->prox;
    }
    printf("\nentrou aqui 3--");

    ant->prox=novo;
    novo->prox=aux;
    printf("%p 3:",l);
    return l;
}


ListaCir* insereMeioCirOriginal(ListaCir* l, int v)
{
    ListaCir* ant=NULL, *aux=l;
    ListaCir* novo=criaListaCir();
    if(novo==NULL)
        return NULL;
    novo->info=v;
    if(l==NULL)
    {
        l=novo;
        novo->prox=novo;
    }
    else
    {
        while(aux->prox!=l && aux->info < v)
        {
            ant=aux;
            aux=aux->prox;
        }
        ant->prox=novo;
        novo->prox=aux;
    }
    return l;
}
void imprimeListaCircular(ListaCir* l)
{
    ListaCir* aux=l;
    if(aux!=NULL)
    {
        do
        {
            printf("\nLista circular %d e ponteiro: %p", aux->info, aux);
            aux=aux->prox;
        }
        while(aux!=l);
    }
}
int tamanhoListaCir(ListaCir* l)
{
    if(l==NULL)
        return -1;
    ListaCir* aux=l;
    int cont=0;
    do
    {
        cont++;
        aux=aux->prox;
    }
    while(aux!=l);
    return cont;
}
ListaCir* removeMeioCir2(ListaCir* l, int v)
{
    printf("\n entrou no removeMeioCir");
    ListaCir* ant=NULL, *no=l;
    if(l==NULL)                         // se lista é null
    {
        printf("\n é null?");
        printf("\nr: %p ",l);
        return NULL;
    }

    if(no->info==v)                         // v está no inicio
    {
        printf("\né o primeiro elemento da lista");
        l=no->prox;
        free(no);

        return l;
    }
    while(no->prox!=l && no->info!=v)
    {
        ant=no;
        no=no->prox;
    }
    if(no->info!=v)                             //nao achou o elemento
    {
        printf("\n não achou o elemento");
        return l;
    }
    printf("\n achou o elemento");
    ant->prox=no->prox;                         //achou o elemento
    free(no);
    return l;

    printf("\n entrou aki");
    if(no==no->prox)                        //só tinha um elemento
    {

        printf("\n só tinha um elemento");
        free(no);
        l=NULL;

        return l;
    }
    else                                    //percorre a lista
    {
        ListaCir* p=l;
        while(p->prox!=l)
        {
            p=p->prox;
        }
        printf("\n percorre a lista+++");
        p->prox=l->prox;
        l=l->prox;
        free(no);

        return l;
    }
    //return l;
}
ListaCir* removeMeioCir(ListaCir* l, int v)
{
    printf("\n entrou no removeMeioCir");
    ListaCir* ant=NULL, *no=l;
    if(l==NULL)                         // se lista é null
    {
        printf("\n é null?");
        printf("\nr: %p ",l);
        return NULL;
    }
    if(no->info==v)                         // v está no inicio
    {
        if(no->prox==l)                        //só tinha um elemento
        {
            printf("\n só tinha um elemento");
            free(no);
            l=NULL;
            //return l;
        }
        else if(no->prox!=l)
        {

            printf("\né o primeiro elemento da lista");
            free(no);
            printf("\ncu");
            l=no->prox;
            printf("\nremovido");
        }
        return l;
    }

    while(no->prox!=l && no->info!=v)
    {
        ant=no;
        no=no->prox;
    }

    if(no->info!=v)                             //nao achou o elemento
    {
        printf("\n não achou o elemento");
        return l;
    }
    printf("\n achou o elemento");
    ant->prox=no->prox;                         //achou o elemento
    free(no);

    return l;



}
/* else                                    //percorre a lista
 {
     ListaCir* p=l;
     while(p->prox!=l)
     {
         p=p->prox;
     }
     printf("\n percorre a lista+++");
     p->prox=l->prox;
     l=l->prox;
     free(no);

     return l;
 }
return l;
}*/
ListaCir* removeInicioCir(ListaCir *l)
{

    ListaCir* aux=l, *no=l;
    if(l==NULL)
        return l;

    if(l->prox==l)
    {
        l=NULL;
        free(l);
        return l;
    }
    while(aux->prox!=l)
    {
        aux=aux->prox;
    }
    aux->prox=no->prox;

    l=no->prox;
    free(no);

    return l;
}

ListaCir* removeFimCir(ListaCir* l)
{
    ListaCir *no=l,*ant=NULL;
    if(l==NULL)
        return NULL;
    if(l->prox==l)
    {
        l=NULL;
        free(l);
        return l;
    }

    while(no->prox!=l)
    {
        ant=no;
        no=no->prox;
    }
    ant->prox=no->prox;
    free(no);
    return l;
}
int buscaPosCir(ListaCir* l, int pos)
{
    int i=0;
    if(l==NULL || pos<=0)
    {
        printf("\nentrou no buraco negro");
        return 0;
    }
    ListaCir* aux=l;
    while(aux->prox!=l && aux->info!=pos)
    {
        aux=aux->prox;
        i++;
    }
    if(aux->info!=pos)
        return -1;
    else
        return i;
}
int buscaValorCir(ListaCir* l, int v)
{
    if(l==NULL)
        return NULL;
    ListaCir* aux=l;
    while(aux->prox!=l && aux->info!=v)
    {
        aux=aux->prox;
    }
    if(aux->info!=v)
        return 0;
    else
        return aux->info;
}
