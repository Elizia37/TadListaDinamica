#ifndef LISTADUPLAMENTEDINAMICA_H_INCLUDED
#define LISTADUPLAMENTEDINAMICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct lista2
{
    int info;
    struct lista2 *ant;
    struct lista2 *prox;
}Lista2;

Lista2* inicializa2();
Lista2* criaLista2();
Lista2* insereInicio2(Lista2* l,int v);
Lista2* insereOrdenada2(Lista2* l, int v);
Lista2* InsereFim2(Lista2* l, int v);
void imprimeRecursivoInverso2(Lista2 *l);
void imprimeRecursivo2(Lista2 *l);
void imprime2(Lista2*l);
int busca2(Lista2* l, int v);
Lista2* removeInicio2(Lista2* l);
Lista2* removeMeio2(Lista2* l, int v);
Lista2* removeFim2(Lista2* l);




/*int main()
{
    printf("Hello world!\n");
    setlocale(LC_ALL,"");

    Lista2 *p;
    p=NULL;

  //Lista *p1=inicializa();

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
            p=criaLista2();

            break;
        case 2:
            printf("digite um numero: ");
            scanf("%d",&valor);
            p=insereInicio2(p, valor);
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
}
*/

#endif // LISTADUPLAMENTEDINAMICA_H_INCLUDED
