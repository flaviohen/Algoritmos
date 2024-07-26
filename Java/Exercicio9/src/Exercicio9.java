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


import java.util.Scanner;
public class Exercicio9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int colunas = 0, linhas = 0;
		Scanner dadosDeEntrada = new Scanner(System.in);
		
		System.out.printf("Digite a quantidade de colunas da matriz: ");
		linhas = dadosDeEntrada.nextInt();
		
		System.out.printf("Digite a quantidade de linhas da matriz");
		colunas = dadosDeEntrada.nextInt();
		
		int[][] matriz = new int[linhas][colunas];
		
		for(int linha = 0; linha < linhas; linha++) {
			for(int coluna = 0; coluna < colunas; coluna++) {
				System.out.printf("Digite o valor na posicao [%d][%d] da matriz: ", linha, coluna);
				matriz[linha][coluna] = dadosDeEntrada.nextInt();
			}
		}
		
		System.out.printf("/n");
		
		for(int linha = 0; linha < linhas; linha++) {
			for(int coluna = 0; coluna < colunas; coluna++) {
				System.out.printf("[%d][%d] = %d \n", linha, coluna, matriz[linha][coluna]);
			}
		}
		
		System.out.printf("Fim do Exercicio");
	}

}
