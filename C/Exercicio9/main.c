#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* 
	Exercício 9
Fazer uma matriz com uma quantidade de colunas e linhas e atribuir números aos blocos da matriz e mostrar os numeros da matriz

Algoritmo Exercicio9
Programa
  inteiro matriz;
  inteiro linhas, colunas;
   
Inicio
  
  Escreva("Digite a quantidade de linhas da matriz: ");
  Leia(linhas);
  Escreva("Digite a quantidade de colunas da matriz: ");
  Leia(colunas);
  
  matriz = new Inteiro[linhas][colunas];
  inteiro contador = 0;

Para inteiro varredordeLinhas inicia com 0; enquanto varredorDeLinhas < linhas; varredorDeLinhas soma mais 1 e faça
       Para inteiro varredordeColunas inicia com 0; enquanto varredorDeColunas < colunas; varredorDeColunas soma mais 1 e faça
            Leia(matriz[varredorDeLinhas][varredorDeColunas]);
       Fim_Para 
       Escreva("/n");
  Fim_Para
  
Para inteiro varredordeLinhas inicia com 0; enquanto varredorDeLinhas < linhas; varredorDeLinhas soma mais 1 e faça
       Para inteiro varredordeColunas inicia com 0; enquanto varredorDeColunas < colunas; varredorDeColunas soma mais 1 e faça
            Escreva("["+varredordeLinhas+"]["+varredorDeColunas+"]" = " + matriz[varredorDeLinhas][varredorDeColunas]);
       Fim_Para 
       Escreva("/n");
  Fim_Para
Escreva("Fim do Exercicio");
Fim
*/

int main(int argc, char *argv[]) {
	
	int linhas, colunas;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d", &linhas);
	
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas];
	
	for(int linha = 0; linha < linhas; linha++)
	{
		for(int coluna = 0; coluna < colunas; coluna++){
			printf("Digite o valor para linha %d e coluna %d \n", linha, coluna);
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	printf("\n");
	
	for(int linha = 0; linha < linhas; linha++)
	{
		for(int coluna = 0; coluna < colunas; coluna++)
		{
			printf("[%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
		}
	}
	
	printf("Fim do Exercicio");
	getch();
}