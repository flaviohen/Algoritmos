#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
Exercicio 7
Crie um vetor com uma quantidade de valores e leia o vetor e mostre na tela.

Algoritmo Exercicio7
Programa

 inteiro variavelRepresentaVetor = inteiro[]
 
 Inicio
   
   variavelRepresentaVetor[0] = 1;
   variavelRepresentaVetor[1] = 2;
   variavelRepresentaVetor[2] = 3;
   
   para cada inteiro numeroIndice que inicia com 0; enquanto numeroIndice for menor igual a variavelRepresentaVetor.tamanho igual a 3; numeroIndice soma mais 1 e faça
      Escreva("Valor no vetor: " + variavelRepresentaVetor[numeroIndice]);
   fim_para
   
  Escreva("Fim do Exercicio");
 Fim
 */

int main(int argc, char *argv[]) {
	
	int variavelRepresentaVetor[3];
	
	variavelRepresentaVetor[0] = 1;
	variavelRepresentaVetor[1] = 2;
	variavelRepresentaVetor[2] = 3;
	
	for(int numeroIndice = 0; numeroIndice < 3; numeroIndice = numeroIndice = numeroIndice + 1){
		printf("Valor no vetor: %d \n", variavelRepresentaVetor[numeroIndice]);	
	}
	
	printf("Fim do Exercicio");
	getch();
}