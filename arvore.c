
#include<stdio.h>
#include<stdlib.h>
#include"arvore.h"

struct produto
{
    int matricula;
    int tipo;
    float preco;
    int qtdProduto;
};

struct arv
{
    struct   produto info;
    struct arv*esq;
    struct arv*dir;
};

int conta=0;

Arv* inicializa_Arvore (void)
{
    return NULL;
}

int  adm()
{
    int opc;

    printf("\n\n________________Seleciones as opções ____________\n\n");
    printf("1 Inserir \n");
    printf("2 Procura Produto pelo codigo\n");
    printf("3 Mostra todos os elementos no estoque\n \n");
    printf("4 Reservar materiais mediante solicitações\n");
    printf("5 Decidir onde vai guarda o produto\n");
    printf("6 Imprimir os valores de um produto\n");
    printf("7 sai do sistema \n ");

    scanf("%d",&opc);

    return opc;

}


Arv *inserirProdutoTeste(Arv * l,Produto i)
{
    Arv *novo=(Arv*)malloc (sizeof(Arv));
    novo->info.matricula =i.matricula;
    novo->info.tipo=i.tipo;
    novo->info.preco=i.preco;
    novo->info.qtdProduto=i.qtdProduto;


    conta++; // variavel global[
    printf("\n conta %d",conta);
    if (conta %2 ==0)
    {

        printf("\n valor inserido na direita");
        novo->dir=l;

    }
    else
    {
        printf("\n valor inserido na esquerda");
        novo->esq=l;

    }



    return novo;
}

Arv *  DigitaStruct( Arv *recebe3 )
{

    Produto p1;
    printf(" Int\n");
    printf("Digite matricula :\n");
    scanf("%d",&p1.matricula);
    printf("Digite tipo :\n");
    scanf("%d",&p1.tipo);
    printf("Digite preco float :\n");
    scanf("%f",&p1.preco);


    printf("Digite qtdProduto :\n");
    scanf("%d",&p1.qtdProduto);


    return inserirProdutoTeste(recebe3,p1);
}

void controleFuncionario()

{
    Arv *creb=inicializa_Arvore();

    int reposta;
    do
    {
        reposta=adm();

        if(reposta==1)

        {

            creb=DigitaStruct(creb);


        }
        if(reposta==3)
        {
            //imprimeTodosProduto(creb);
            imprimeArvores(creb);
        }

    }
    while(reposta!=7);
    libera(creb);
}





Arv* inserirProduto( Arv * l, Produto i)
{
    Arv*novo =(Arv*)malloc(sizeof(Arv));



    novo->info =i;
    novo->dir=l;
    novo->esq=l;
    return novo;
}

int diviso=0; // variavel global

void imprimeArvores (Arv* a)
{
    diviso++;
    if (!vazia(a))
    {
        printf("_______________PRODUTOS___________________\n");
        if (diviso %2 ==0)
        {
            printf("\n lado direito");

            printf("  matricula  : %d \n",a->info.matricula);
            printf("  qtd        : %d \n",a->info.qtdProduto);
            printf("  tipo       : %d \n",a->info.tipo);
            printf("  preco      : %f \n",a->info.preco);
        }
        else
        {
            printf("\n lado esquerdo");

            printf("  matricula  : %d \n",a->info.matricula);
            printf("  qtd        : %d \n",a->info.qtdProduto);
            printf("  tipo       : %d \n",a->info.tipo);
            printf("  preco      : %f \n",a->info.preco);
        }



        imprimeArvores(a->esq); /* mostra sae */
        imprimeArvores(a->dir); /* mostra sad */
    }
}


void imprimeTodosProduto(Arv *l)
{

    Arv*recebe;

    for (recebe = l; recebe != NULL; recebe = recebe->dir)
    {
        printf("_______________PRODUTOS___________________\n");
        printf("_________________DIR_______________________\n");
        printf("  matricula  : %d \n",recebe->info.matricula);
        printf("  qtd        : %d \n",recebe->info.qtdProduto);
        printf("  tipo       : %d \n",recebe->info.tipo);
        printf("  preco      : %f \n",recebe->info.preco);



    }
    printf("\n");
    for (recebe = l; recebe != NULL; recebe = recebe->esq)
    {
        printf("_________________ESQ______________________\n");
        printf("  matricula  : %d \n",recebe->info.matricula);
        printf("  qtd        : %d \n",recebe->info.qtdProduto);
        printf("  tipo       : %d \n",recebe->info.tipo);
        printf("  preco      : %f \n",recebe->info.preco);



    }
}


