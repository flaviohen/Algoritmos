#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
Exercício 5
Faça um algoritmo que mostre a tabuada de um número escolhido.

Algoritmo Exercicio5
Programa
Inicio
  inteiro QualTabuada;
  
  Escreva("Digite o numero da tabuada que deseja: ");
  Leia(QualTabuada);
  
  Para cada inteiro numeroMultiplicado que inicia com 0; enquanto numeroMultiplicado for menor igual a 10; numeroMultiplicado soma mais 1 faça
    Inicio    
       Escreva(QualTabuada juntar " X " juntar numeroMultiplicado juntar " = " juntar QualTabuada vezes numeroMultiplicado);
       Escreva(novaLinha);
    Fim
  FimPara
  Escreva("Fim do Exercicio"); 
Fim
*/

int main(int argc, char *argv[]) {
	
	int qualTabuada;
	
	printf("Digite o numero da tabuada que deseja: ");
	scanf("%d", &qualTabuada);
	
	for(int numeroMultiplicado = 0; numeroMultiplicado <=10; numeroMultiplicado = numeroMultiplicado + 1){
		printf("%d X %d = %d", qualTabuada, numeroMultiplicado, (qualTabuada * numeroMultiplicado));
		printf("\n");
	}
	printf("Fim do Exercicio");
	getch();
}