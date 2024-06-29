#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
	Exercício 6
Fazer um algoritmo que calcule o fatorial – 
Exemplo Fatorial de 5 = 5x4x3x2x1 = resultado fatorial

Algoritmo Exercicio6

Programa
  
  inteiro fatorialDe = 0, fatorial = 0;
Inicio

  Escreva("Digite o numero deseja saber o fatorial: ");
  Leia(fatorialDe);
  
  Para cada variavel inteiro inicio igual fatorialDe; enquanto inicio maior igual a 1; subtraia inicio menos 1 e faça
  InicioPara
     fatorial = fatorial * inicio           
  FimPara 
   
  Escreva("O fatorial é: " + fatorial);
  
  Escreva("Fim do Exercicio");
Fim
*/

int main(int argc, char *argv[]) {
	
	int fatorialDe = 0, fatorial = 1;
	
	printf("Digite o numero deseja saber o fatorial: ");
	scanf("%d",&fatorialDe);
	
	for(int inicio = fatorialDe; inicio >= 1; inicio = inicio - 1){
		fatorial = fatorial * inicio;	
	}
	printf("O fatorial e: %d \n", fatorial);
	
	printf("Fim do Exercicio");
	
	getch();
}