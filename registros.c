
#include <stdio.h>
#include <stdlib.h>




typedef struct{
    char categoria[10];
    int codigo;
    float valor;
    char descricao[30];
    char fornecedor[10];
    int validade[3];
    int corredor;
    int prateleira;
}PRODUTO;

void scan(PRODUTO *x){
    printf("Digite a categoria: ");
    scanf("%s", (*x).categoria);
    printf("\nDigite o codigo: ");
    scanf("%d", (*x).codigo);
    printf("\nDigite o valor: ");
    scanf("%f", (*x).valor);
    printf("\nDigite a descricao: ");
    scanf("%s", (*x).descricao);
    printf("\nDigite o fornecedor: ");
    scanf("%s", (*x).fornecedor);
    printf("\nDigite a validade: \n");
    printf("dia: ");
    scanf("%d", (*x).validade[0]);
    printf("\nmes: ");
    scanf("%d", (*x).validade[1]);
    printf("\nano: ");
    scanf("%d", (*x).validade[2]);
    printf("\nDigite o corredor: \n");
    scanf("%d", (*x).corredor);
    printf("\nDigite a prateleira: \n");
    scanf("%d", (*x).prateleira);
}

void print(PRODUTO x){
    printf("Categoria: %s\n", x.categoria);
    printf("Codigo: %d\n", x.codigo);
    printf("Valor: %f\n", x.valor);
    printf("Descricao: %s\n", x.descricao);
    printf("Fornecedor: %s\n", x.fornecedor);
    printf("Validade: %d/", x.validade[0]);
    printf("%d/", x.validade[1]);
    printf("%d\n", x.validade[2]);
    printf("Corredor: %d", x.corredor);
    printf("Prateleira: %d", x.prateleira);
}



int main()
{
   
    PRODUTO Produtos[100];
    scan(&Produtos[0]);
    print(Produtos[0]);
}
