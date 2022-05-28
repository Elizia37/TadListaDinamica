#ifndef LISTAHETEROGENEA_H_INCLUDED
#define LISTAHETEROGENEA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define RET 0
#define TRI 1
#define CIR 2
#define PI 3.14159

typedef struct retangulo
{
    float h;
    float b;
}Retangulo;
typedef struct triangulo
{
    float h;
    float b;
}Triangulo;
typedef struct circulo
{
    float r;
}Circulo;
typedef struct listaGen
{
    int tipo; //o tipo nao é ponteiro só escolhe a alternativa
    void *info; //info é definida pelo tipo definio como constante
    struct listaGen *prox;
}ListaGen;
ListaGen* cria_Ret(float h, float b);
ListaGen* cria_Tri(float h, float b);
ListaGen* cria_Cir(float r);
float area_ret(Retangulo *r);
float area_tri(Triangulo *t);
float area_cir(Circulo* c);
ListaGen* insereInicioH(ListaGen* l, float h, float b);
void imprimeHet2(ListaGen* l);

/*int main()
{
    printf("Hello world!\n");
    setlocale(LC_ALL,"");

    ListaGen *p;
    p=NULL;

   // p=cria_Ret(2,3);
   // p=insereInicioH(p,2,3);
     //p=insereInicioH(p,7,5);
    imprimeHet2(p);




      //Lista *p1=inicializa();

   /* int op, valor, v;
    float h, b;
    do
    {
        printf("\n");
        printf("\n\t(MENU)");
        printf("\n1-criar lista");
        printf("\n2-insere no inicio");
        printf("\n3-insere no fim");
        printf("\n4-insere na ordem");
        printf("\n5-busca valor");
        printf("\n6-retira elemento");
        printf("\n7-imprime");
        printf("\n8-libera lista");
        printf("\n9-limpar tela");
        printf("\n10-sair");
        printf("\n11- clonar");
        printf("\nEscolha a opção: ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:

            printf("Qual area deseja? Retangulo[0], Triangulo[1],Circulo[2]");
            scanf("%d",&op);
            printf("Digite altura: ");
            scanf("%f",&h);
            printf("Digite base: ");
            scanf("%f",&b);
            if(op==0)
                p = cria_Ret(h,b);
            else if(op==1)
                p = cria_Tri(h,b);
             else
                p = cria_Cir(h,b);
            break;
        case 2:

            p=insereInicioH(p);

            break;
        case 3:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=InsereFim2(p,valor);
            break;
        case 4:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=insereOrdenada2(p,valor);
            break;
        case 5:
            printf("digite um numero: ");
            scanf("%d",&valor);
            v=busca2(p,valor);
            if(v==-1)
                printf("Valor não encontrado");
            else
                printf("valor  encontrado %d:", v);
            break;
        case 6:
            printf("digite um numero: ");
            scanf("%d",&valor);

            //p=removeInicio2(p);
            //p=removeFim2(p);
            p=removeMeio2(p,valor);

            //p=retiraRecursiva(p,valor);
            break;
        case 7:
            imprime2(p);
            //imprimeRecursivo2(p);

            break;
        case 8:
            //p=libera(p);
            p=liberaRecursiva(p);
            printf("liberada com sucesso");

            break;
        case 9:
            system("cls");
            break;
        case 10:
            printf("\nsaindo do programa\n");
            exit(1);
        case 11:
            //p1=clonarLista(p);
            //printf("Imprimindo copia");
            // imprime(p1);
            break;
        default:
            printf("Escolha a opção do menu");
        }
    }
    while(op>0 || op<12);


    return 0;
}*/



#endif // LISTAHETEROGENEA_H_INCLUDED
