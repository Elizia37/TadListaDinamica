#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaDinamica.h"
#include "listaDuplamenteDinamica.h"
#include "listaHeterogenea.h"
#include "listaCircular.h"


int main()
{
    printf("Hello world!\n");
    setlocale(LC_ALL,"");
    int tam, v, pos, valor;

    ListaCir* p=inicializaListaCir();
    //v=listaVaziaCir(p);
    //printf("\n1-vazio: %d",v);

    criaListaCir(p);
    //p=InsereInicioCir(p,1);
  // p=InsereInicioCir(p,2);
    p=InsereInicioCir(p,3);
    printf("\nponteiro 1: %p",p);
    p=InsereInicioCir(p,4);
    printf("\nponteiro 2: %p",p);
   //p=insereFimCir(p,10);
    p=insereFimCir(p,30);
    p=insereFimCir(p,20);
    p=insereFimCir(p,40);
    p=insereFimCir(p,50);
    p=insereFimCir(p,60);
    p=insereFimCir(p,70);
    p=insereMeioCir(p,40);
    p=insereMeioCir(p,30);
     p=insereMeioCir(p,50);
    p=insereMeioCir(p,5);
    printf("\nponteiro 3: %p",p);
    imprimeListaCircular(p);

  tam=tamanhoListaCir(p);
    printf("\ntam: %d",tam);
    /*p=removeMeioCir(p,4);
// p=removeMeioCir(p,70);
 //p=removeInicioCir(p);
    p=removeMeioCir(p,40);
    p=removeMeioCir(p,30);
    p=removeMeioCir(p,20);
  //  p=removeMeioCir(p,3);*/

  //  pos=buscaPosCir(p,-1);
  //  printf("\nposição na lista %d",pos);
  //  valor=buscaValorCir(p,4);
   // printf("\nvalor na lista %d",valor);
 liberaListaCir(p);
  /* p=removeInicioCir(p);
      p=removeInicioCir(p);
    p=removeFimCir(p);
     p=removeFimCir(p);*/

    //v=vazia(p);*/
    // printf("\n1-vazio: %d",v);

  imprimeListaCircular(p);
    tam=tamanhoListaCir(p);
    printf("\ntam: %d",tam);
v=listaVaziaCir(p);
printf("\n1-vazio: %d",v);

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
     while(op>0 || op<12);*/


    return 0;
}
