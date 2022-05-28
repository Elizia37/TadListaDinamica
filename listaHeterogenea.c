#include "listaHeterogenea.h"

ListaGen* cria_Ret(float h, float b)
{
    Retangulo *r=(Retangulo*)malloc(sizeof(Retangulo));
    r->b=b;
    r->h=h;

    ListaGen *l=(ListaGen*)malloc(sizeof(ListaGen));
    l->tipo=RET;
    l->info=r;
    l->prox=NULL;

    return l;
}
ListaGen* cria_Tri(float h, float b)
{
    Triangulo *t=(Triangulo*)malloc(sizeof(Triangulo));
    t->b=b;
    t->h=h;

    ListaGen *l=(ListaGen*)malloc(sizeof(ListaGen));
    l->tipo=TRI;
    l->info=t;
    l->prox=NULL;

    return l;
}
ListaGen* cria_Cir(float r)
{
    Circulo *c=(Circulo*)malloc(sizeof(Circulo));
    c->r=r;

    ListaGen *l=(ListaGen*)malloc(sizeof(ListaGen));
    l->tipo=CIR;
    l->info=c;
    l->prox=NULL;

    return l;
}
float area_ret(Retangulo *r)
{
    return r->b*r->h;
}
float area_tri(Triangulo *t)
{
    return (t->b*t->h)/2;
}
float area_cir(Circulo* c)
{
    return PI*c->r*c->r;
}
float area(ListaGen *l)
{
    float a;
    switch (l->tipo)
    {
    case RET:
        a=area_ret(l->info); //parametro tipo ListaGen
        break;

    case TRI:
        a=area_tri(l->info);
        break;

    case CIR:
        a=area_ret(l->info);
        break;

    default:
        printf("Parametro invalido");
    }
    return a;
}
float maiorArea(ListaGen* l)
{
    float maior=0.0, a;
    ListaGen *p=l;
    for(; p!=NULL; p=p->prox)
    {
        a=area(p);
        if(a<maior)
            maior=a;
    }

    return a;
}
/*ListaGen* insereInicioH(ListaGen* l, float h, float b)
{
    int static cont=0;
    Retangulo* r=(Retangulo*)malloc(sizeof(Retangulo));
    ListaGen* novo=cria_Ret(h,b);
    novo->info=r;
    novo->tipo=RET;
    novo->prox=l;
    l=novo;
    cont++;
    printf("\n%d", cont);
     printf("\narea: %f - base: %f", (novo->info)r->h, r->b);
    return l;
}*/
void imprimeHet2(ListaGen* l)
{

    ListaGen* p=l;
    Retangulo* r;
    p->info=r;
    for(; p!=NULL; p=p->prox)
    {
        printf("\narea: %f - base: %f", r->h, r->b);
    }
}
