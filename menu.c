#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int cliente;

     printf("Produtos\n");

   FILE *file;

      file = fopen ("produtos.txt","r");
      if (file== NULL){
        printf ("Arquivo nao pode ser acessado");
        getchar();
        exit(0);
      }
      char produtos1 [100];

      while (fgets(produtos1,100,file)!=NULL){

        printf("%s",produtos1);
      }
      fclose(file);

        printf("\n\t\tSistema Budega IMD\n");

		printf( "_______________________________________________\n" );
		printf( "\n\t\tMENU PRINCIPAL\n\n" );
		printf( "-----------------------------------------------\n" );
		printf(" Escolha uma das seguintes opções:\n\n" );
		printf("  1.Clientes\n");
		printf("  2.Fornecedor\n");
		printf("  3.Leitura de Arquivos\n");
		printf("  4.Catálogo de Produtos\n");
		printf("  5. Faturamentos\n");
		printf( "-----------------------------------------------\n" );
		printf( "\t\t\t\tS - Sair\n" );
		printf( "_______________________________________________\n" );
    scanf("%d",&opcao);
   switch (opcao){
      case 1:


    printf("\n1. Filtrar produtos por preço\n ");
    printf("\n2 Filtrar produtos por estoque \n ");
    printf("\n3 Voltar ao Menu principal \n ");
    printf("\n4 Voltar ao Menu principal \n ");

    scanf("%d",&cliente);

   if (cliente ==1){
    printf("Filtrar produtos por preço");
   }
   else if (cliente==2){
     printf("\n Filtrar produtos por estoque \n ");
   }
   else if (cliente==3){

    printf("\n3 Carrinho de compras \n ");


   }
   else if (cliente==4){

    printf("\n4 Voltar ao Menu principal \n ");


   }
    
}
   system("pause");
    return 0;
}
