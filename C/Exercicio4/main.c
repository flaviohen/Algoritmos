#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Exercício 4
Leia um número e informe se o número é par ou ímpar, para determinar um número par ou ímpar 
você deve utilizar o operador modulo "%" de 2 se o resultado for 0 o número é par, senão o número é ímpar.

Algoritmo Exercicio 4

Programa

inteiro numero

Inicio
  
  Escreva("Digite um número");
  Leia(numero);
  
  se(numero % 2 == 0){
    Escreva("Este numero é par");
  }
  senão{
    Escreva("Este numero é impar");
  }
  
  Escreva("Fim do Exercicio");
  
Fim
 
 */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite o numero: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("Este numero e par");
	}
	else{
		printf("Este numero e impar");
	}
	
	printf("\n Fim do Exercicio");
	getch();
}