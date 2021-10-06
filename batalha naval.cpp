#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>


//DEFINIÇÃO DO TAMANHO DO TABULEIRO DA BATALHA NAVAL.
#define MAXL 20
#define MAXC 50




int main(){
setlocale(LC_ALL, "Portuguese");

//VARIAVÉIS.
    char tabuleiro1[MAXL][MAXC],tabuleiro2[MAXL][MAXC];
    int x, y,v,w,i,j,c=0,z=0,a,b,d=0,t;

//DESCRIÇÃO DO JOGO.
 printf("\n\t\t\t\**************************************************");
 printf("\n\t\t\t\t\tJOGO BATALHA NAVAL");
 printf("\n\t\t\t\**************************************************\n\n");

//LAÇO PARA OS TABULEIROS 1 e 2.
     printf("\t\tTABULEIRO 1  \t\t\t\t\t\tTABULEIRO 2\n\n");

    for(x=0; x<MAXL; x++){

             for(y=0; y<MAXC;y++){
                      tabuleiro1[x][y] = '*';
                      printf("%c", tabuleiro1[x][y]);
             }
             printf("\t");




    for(v=x; v<=x; v++){
             for(w=0; w<MAXC;w++){
                      tabuleiro2[v][w] = '*';
                      printf("%c", tabuleiro2[v][w]);
             }


    }
             printf("\n");
    }
//POSICIONAMENTO DO NAVIO DE CADA JOGADOR:
        printf("\n\nJOGADOR 1 SELECIONE A POSIÇÃO DO NAVIO DO JOGADOR 2\n");
        printf("\nLinha: ");
        scanf("%d", &a);
        printf("\nColuna: ");
        scanf("%d", &b);
//LAÇO PARA O JOGADOR 2 NÃO VIZUALIZAR A LOCALIZAÇÃO DO SEU NAVIO
        for(t=0; t<100; t++){
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");


        printf("\nJOGADOR 2 SELECIONE A POSIÇÃO DO NAVIO DO JOGADOR 1\n");
        printf("\nLinha:");
        scanf("%d", &i);
        printf("\nColuna:");
        scanf("%d", &j);

//LAÇO PARA O JOGADOR 1 NÃO VIZUALIZAR A LOCALIZAÇÃO DO SEU NAVIO
        for(t=0; t<100; t++){
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");

        printf("\n\tNAVIOS POSICIONADOS. O JOGO COMEÇOU\n ");

     do{
//LAÇO PARA CADA ESCOLHA DE LINHA E COLUNA COM SEUS RESPECTIVOS LIMITES JOGADOR 1 E JOGADOR 2.
               printf("\n\tJOGADOR 1 Digite as coordenadas do tiro (linha e coluna):\n");
         do{
               printf("\n\tLinha(Entre 0 e 19); ");
               do{
                scanf("%d", &x);
                if(x<0 || x>19){
                printf("\n\tDIGITE UM NÚMERO ENTRE 0 E 19: ");
                 }
               }while(x<0 || x>19);


               printf("\n\tColuna(Entre 0 e 49); ");
               do{
               scanf("%d", &y);
               if(y<0 || y>49){
               printf("\n\tDIGITE UM NÚMERO ENTRE 0 E 49: ");
                }
               }while(y<0 || y>49);

//CONDIÇÃO PAARA A RESTRIÇÃO DE JOGADA REPETIDA PARA O JOGADOR 1.

               if(tabuleiro1[x][y] !='*')
                printf("\n\tCOORDENADA JÁ ESCOLHIDA!! ESCOLHA NOVAMENTE OUTRAS COORDENADAS JOGADOR 1\n");
           }
               while(tabuleiro1[x][y] !='*');


               printf("\n\tJOGADOR 2 Digite as coordenadas do tiro (linha e coluna):\n");
         do{
               printf("\n\tLinha(Entre 0 e 19); ");
               do{
                scanf("%d", &v);
                if(v<0 || v>19){
                printf("\n\tDIGITE UM NÚMERO ENTRE 0 E 19: ");
                 }
               }while(v<0 || v>19);



               printf("\n\tColuna(Entre 0 e 49); ");
               do{
               scanf("%d", &w);
               if(w<0 || w>49){
               printf("\n\tDIGITE UM NÚMERO ENTRE 0 E 49: ");
                }
               }while(w<0 || w>49);

//CONDIÇÃO PAARA A RESTRIÇÃO DE JOGADA REPETIDA PARA O JOGADOR 2.

               if(tabuleiro2[v][w] !='*')
                printf("\n\tCOORDENADA JÁ ESCOLHIDA!! ESCOLHA NOVAMENTE OUTRAS COORDENADAS JOGADOR 2\n");
           }
               while(tabuleiro1[v][w] !='*');





//CONDIÇÃO PARA ACERTAR O NAVIO (N), E SE ERRAR ACERTA A ÁGUA (A) DO JOGADOR 1 E 2.
               if(x>=a && x<= a+2 && y>=b && y<=b+4){
                    tabuleiro1[x][y] = 'N';
                    printf("\n\tJOGADOR 1 ACERTOU O NAVIO!!\n");
                    c++;
               }
               else{
                    tabuleiro1[x][y] = 'A';
                    printf("\n\tJOGADOR 1 ERROU!!\n");
               }

               if(v>=i && v<= i+2 && w>=j && w<=j+4){
                    tabuleiro2[v][w] = 'N';
                     printf("\n\tJOGADOR 2 ACERTOU O NAVIO!!\n");
                    d++;
               }
               else{
                    tabuleiro2[v][w] = 'A';
                    printf("\n\tJOGADOR 2 ERROU!!\n\n");
               }

             printf("\n\t\tTABULEIRO 1  \t\t\t\t\t\tTABULEIRO 2\n\n");

             printf("\n");

             for(x=0; x<MAXL; x++){
             for(y=0; y<MAXC;y++){
                      printf("%c", tabuleiro1[x][y]);
             }
             printf("\t");


             for(v=x; v<=x; v++){
             for(w=0; w<MAXC;w++){

                      printf("%c", tabuleiro2[v][w]);
             }

             }
             printf("\n");
             }

    }

// LAÇO QUE INDICA O NÚMERO POSSÍVEL DE JOGADAS PARA ACERTAR O NAVIO, FEITO ISSO O JOGADOR VENCE.
         while(c<15 && d<15);

//CONDIÇÃO PARA EMPATE E VITÓRIA DO JOGADOR 1 OU JOGADOR 2.
            if(c==15 && d==15 ){
            printf("\nEMPATARAM!\n ");
            }
            else if(c==15 ){
            printf("\nJOGADOR 1 VENCEU!!! O NAVIO AFUNDOU!\n ");
            }
            else if(d==15 ){
            printf("\nJOGADOR 2 VENCEU!!! O NAVIO AFUNDOU!\n ");
            }

return 0;

}



