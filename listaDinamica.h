#ifndef LISTADINAMICA_H_INCLUDED
#define LISTADINAMICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
int info;
struct lista *prox;
}Lista;

Lista* inicializa();
Lista* criaLista();
Lista* insereInicio(Lista* l, int v);
Lista* insereFim(Lista*l, int v);
Lista* insereOrdenada(Lista *l, int v);
Lista* retira(Lista* l, int v);
Lista* retiraRecursiva(Lista* l, int v);
Lista* vazia(Lista* l);
int* busca (Lista* l, int v);
Lista* libera(Lista *l);
Lista* liberaRecursiva(Lista* l);
void imprime(Lista*l);
void imprimeRecursivo(Lista *l);
void imprimeRecursivoInverso(Lista *l);// avaliar
Lista* clonarLista(Lista* l);


/*int main()
{
    printf("Hello world!\n");
    setlocale(LC_ALL,"");

    Lista *p;
    Lista *p1=inicializa();

    int op, valor, v;
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
            p=inicializa();

            break;
        case 2:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=insereInicio(p, valor);
            break;
        case 3:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=insereFim(p,valor);
            break;
        case 4:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=insereOrdenada(p,valor);
            break;
        case 5:
            printf("digite um numero: ");
            scanf("%d",&valor);
            v=busca(p,valor);
            if(v==-1)
                printf("Valor não encontrado");
            else
                printf("valor não encontrado %d:", v);
            break;
        case 6:
            printf("digite um numero: ");
            scanf("%d",&valor);
            // p=retira(p,valor);
            p=retiraRecursiva(p,valor);
            break;
        case 7:
            //imprime(p);
            imprimeRecursivo(p);

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
            p1=clonarLista(p);
            printf("Imprimindo copia");
            imprime(p1);
            break;
        default:
            printf("Escolha a opção do menu");
        }
    }
    while(op>0 || op<12);


    return 0;
}*/


#endif // LISTADINAMICA_H_INCLUDED
