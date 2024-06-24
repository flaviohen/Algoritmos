#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
Exercicio 3 - 
Fazer a troca de valores entre variáveis atribua um valor a cada variável e faça a substituição de valor, ou seja, 
o valor de uma variável deve ser atribuído a outra variável e mostre o resultado.

Algoritmo Exercicio 3

Programa

  Inteiro valor1, valor2, armazenamentoTemporario

Inicio
  
  Escreva("Digite o valor para a primeiro variavel: ");
  Leia(valor1);
  
  Escreva("Digite o valor para a segunda variavel: ");
  Leia(valor2);
  
  Escreva("O valor da primeira variavel é: " + valor1);
  Escreva("O valor da segunda variavel é: " + valor2);
  
  Escreva("Troque os valores das variaveis, ou seja, coloque o primeiro valor na segunda variavel e segundo valor na primeira variavel");
  
  armazenamentoTemporario = valor1;
  valor1 = valor2;
  valor2 = armazenamentoTemporario;
  
  Escreva("O valor da primeira variavel agora é: " + valor1);
  Escreva("O valor da segunda variavel agora é: " + valor2);
  
  Escreva("Fim do exercicio");
  
Fim
 */

int main(int argc, char *argv[]) {
	
	int valor1, valor2, armazenamentoTemporario;
	
	printf("Digite o valor para a primeira variavel: ");
	scanf("%d", &valor1);
	printf("\n");
	
	printf("Digite o valor para a segunda variavel: ");
	scanf("%d", &valor2);
	printf("\n");
	
	printf("\n o valor da primeira variavel e: %d",valor1);
	printf("\n o valor da segunda variavel e %d", valor2);
	
	printf("\n Trocando os valores...");
	
	armazenamentoTemporario = valor1;
	valor1 = valor2;
	valor2 = armazenamentoTemporario;
	
	printf("\n o valor da primeira variavel agora e: %d", valor1);
	printf("\n o valor da segunda variavel agora e: %d", valor2);
	
	printf("\n Fim do Exercicio");
	
	getch();
}