#include "listaDinamica.h"
#include <stdlib.h>
//Lista sem nó cabeça
Lista* inicializa()
{
    return NULL;
}
Lista* criaLista()
{
    Lista* novo=(Lista*)malloc(sizeof(Lista));
    if(novo==NULL)
        printf("Erro na alocação");
    return novo;
}
//funçoes insere
Lista* insereInicio(Lista* l, int v)
{
    Lista* novo=criaLista();
    novo->info=v;
    novo->prox=l;

    return novo;
}
Lista* insereFim(Lista*l, int v)
{

    Lista* novo=criaLista();
    Lista* ant=NULL;
    Lista* p=l;
    novo->info=v;

    while(p!=NULL)
    {
        ant=p;
        p=p->prox;
    }
    if(ant==NULL)
    {
        novo->prox=l;
        l=novo;
    }
    else
    {
        novo->prox=NULL;
        ant->prox=novo;
    }
    return l;
}

Lista* insereOrdenada(Lista *l, int v)
{
    Lista* ant=NULL;
    Lista *p=l;
    Lista* novo=criaLista();
    novo->info=v;

    while(p!=NULL && p->info<v)
    {
        ant=p;
        p=p->prox;
    }
    if(ant==NULL)
    {
        novo->prox=l;
        l=novo;
    }
    else
    {
        novo->prox=ant->prox;
        ant->prox=novo;
    }

    return l;
}
Lista* vazia(Lista* l)
{
    return (l==NULL);
}
//busca

int* busca (Lista* l, int v)
{
    Lista* p;
    for(p=l; p!=NULL; p=p->prox)

        if(p->info==v)
            return p->info;

    return -1;

}
Lista* retira(Lista* l, int v)
{
    Lista* ant=NULL;
    Lista* p=l;

    while(p!=NULL && p->info!=v)
    {
        ant=p;
        p=p->prox;
    }
    if(p==NULL)
    {
        printf("Numero inexistente");
        return l;
    }
    if(ant==NULL)
    {
        l=p->prox;

    }
    else
    {
        ant->prox=p->prox;
    }
    free(p);
    printf("Excluído com sucesso");
    return l;
}
Lista* retiraRecursiva(Lista* l, int v)
{
    if(vazia(l))
    return l;
    if(l->info==v)
    {
        Lista* aux=l; //cria auxiliar para dá free e nao perder a lista
        l=l->prox;
        free(aux);
    }
    else
    {
        l->prox=retiraRecursiva(l->prox,v);
    }
    return l;
}
Lista* libera(Lista *l)
{
    Lista* aux;
    Lista* p=l;
    while(p!=NULL)
    {
        aux=p->prox;
        free(p);
        p=aux;
    }
    printf("Lista liberada!");
    return p;
}
Lista* liberaRecursiva(Lista* l)
{
    if(!vazia(l))
    {
        l=liberaRecursiva(l->prox);
        free(l);
    }

    return l;
}
void imprime(Lista* l)
{
    Lista *p;
    for(p=l; p!=NULL; p=p->prox)
    {
        printf("\n%d",p->info);
    }
}
void imprimeRecursivo(Lista *l)
{
    if(vazia(l))
        return;
    printf("\nvalor: %d",l->info);
    imprimeRecursivo(l->prox);
}
void imprimeRecursivoInverso(Lista *l)
{
    if(vazia(l))
        return;

    imprimeRecursivo(l->prox);
     printf("\nvalor: %d",l->info);
}
Lista* clonarLista(Lista* l){ //verificar função clonar

  Lista* copia=(criaLista());
  while(l){
    copia->info = l->info;
    copia->prox =l->prox ;
    l = NULL ;

  }
  return copia;
}
