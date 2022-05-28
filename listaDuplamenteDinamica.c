#include "listaDuplamenteDinamica.h"

Lista2* criaLista2()
{
    Lista2 *l=(Lista2*)malloc(sizeof(Lista2));
    if(l!=NULL)
    {
        l=NULL; //conteudo do inicio da minha lista é null, se l==null (ela nao existe)
    }
    else
    {
        printf("Erro de alocação");
    }
    return l;
}

Lista2* inicializa2()
{
    return NULL;
}
Lista2* insereInicio2(Lista2* l,int v)
{
    Lista2* novo=(Lista2*)malloc(sizeof(Lista2*));
    novo->info=v;
    novo->prox=(l);
    novo->ant=NULL;

    if(l!=NULL)
        l->ant=novo;
    l=novo;
    return l;
}

Lista2* InsereFim2(Lista2* l, int v)
{
    Lista2* aux=l;
    Lista2* novo=(Lista2*)malloc(sizeof(Lista2));
    novo->info=v;
    novo->prox=NULL;
    if(l==NULL)
    {
        novo->ant=NULL;
        l=novo;
    }
    else
    {
        while(aux->prox!=NULL)
        {
            aux=aux->prox;
        }
        aux->prox=novo;
        novo->ant=aux;
    }
    return l;
}
Lista2* insereOrdenada2(Lista2* l, int v) //corrigir
{
    Lista2* antes=NULL;
    Lista2* atual=l;
    Lista2* novo;
    novo=(Lista2*)malloc(sizeof(Lista2));
    novo->info=v;

    while(atual!=NULL && atual->info<v)
    {
        antes=atual;
        atual=atual->prox;
    }
    if(l==NULL) //a lista é vazia
    {
        printf("entrou aqui");
        novo->ant=NULL;
        novo->prox=NULL;
        l=novo;
        return l;
    }
    else
    {
        antes->prox=novo;
        novo->prox=atual;
        novo->ant=antes;
        if(atual!=NULL)
            atual->ant=novo;
    }
    return l;
}
void imprime2(Lista2* l)
{
    Lista2 *p;
    for(p=l; p!=NULL; p=p->prox)
    {
        printf("\n%d",p->info);
    }
}
void imprimeRecursivo2(Lista2 *l)
{
    if(vazia(l))
        return;
    printf("\nvalor: %d",l->info);
    imprimeRecursivo2(l->prox);
}
void imprimeRecursivoInverso2(Lista2 *l)
{
    if(vazia(l))
        return;

    imprimeRecursivo2(l->prox);
    printf("\nvalor: %d",l->info);
}
int vazia2(Lista2* l)
{
    if(l==NULL)
        return 1;
    if((l)==NULL)
        return 1;
    return 0;
}
int busca2(Lista2* l, int v)
{
    Lista2* p=l;
    for(; p!=NULL; p->prox)
        if(p->info==v)
            return v;
    return -1;
}
Lista2* removeInicio2(Lista2* l)
{
    Lista2* novo=l;
    if(l==NULL)
        return NULL;
    l=l->prox;
    if(novo->prox!=NULL)
        novo->prox->ant=NULL;

    return l;
}
Lista2* removeFim2(Lista2* l)
{
    Lista2* novo=l;
    if(l==NULL)
        return NULL;
    while(novo->prox!=NULL)
    {
        novo=novo->prox;
    }
    if(novo->ant==NULL)
        novo->prox=l;
    else
        novo->ant->prox=NULL;

    free(novo);
    return l;
}
Lista2* removeMeio2(Lista2* l, int v)
{
    Lista2* novo=l;

    if(l==NULL)
        return NULL;
    while (novo->prox!=NULL && novo->info!=v)
    {
        novo=novo->prox;
    }
    if(novo->ant==NULL)
        novo->prox->ant=novo->ant;
    else
        novo->ant->prox=novo->prox;

    free(novo);

    return l;
}


