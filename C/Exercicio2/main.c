#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Exercicio 2 - 
Fazer uma calculadora com a opção das quatro operações matemáticas 

Algoritmo - Exercicio2
Programa

 Real numero1, numero2, resultado
 caractere operacaoMatematica
 
Inicio
  
  Escreva("Digite o primeiro número:");
  Leia(numero1);
  
  Escreva("Escolha a operação matemática");
  Escreva("+ - Soma");
  Escreva("- - Subtrair");
  Escreva("/ - Dividir");
  Escreva("* - Multiplicar");
  Leia(operacaoMatematica);
  
  Escreva("Digite o segundo número"):
  Leia(numero2);
  
  escolha(operacao){
  
          caso "+":
              resultado = numero1 + numero2;
              Escreva("Resultado Soma: " + resultado);          
          pare;
          caso "-":
			resultado = numero1 - numero2;	
            Escreva("Resultado Subtração:" + resultado)
          pare:
          caso "/":
              se(numero2 == 0){
                  Escreva("Não é possível dividir por zero");
              }
              senão{
                resultado = numero1 / numero2;
                Escreva("Resultado Divisão: " + resultado);
              }      
          pare;
          caso "*":
              resultado = numero1 * numero2;
              Escreva("Resultado Multiplicação: " + resultado);
          pare;
  }
  
  Escreva("Fim do calculo.");
  
Fim
*/

int main(int argc, char *argv[]) {
	
	float numero1, numero2, resultado;
	char operacaoMatematica;
	
	printf("Digite o primeiro numero: \n ");
	scanf("%f", &numero1);
	
	printf("Escolha a operacao matematica \n");
	printf("+ = soma \n");
	printf("- = subtracao \n");
	printf("/ = divisao \n");
	printf("* = Multiplicacao \n");
	scanf("%s", &operacaoMatematica);
	
	printf("Digite o segundo numero: \n ");
	scanf("%f", &numero2);
	
	switch(operacaoMatematica)
	{
		case '+':
			resultado = numero1 + numero2;
			printf("O resultado e: %.2f", resultado);
			break;
		case '-':
			resultado = numero1 - numero2;
			printf("O resultado e: %.2f", resultado);
			break;
		case '/':
			if(numero2 == 0){
				printf("Não e possivel dividir por 0");
				break;
			}
			else{
				resultado = numero1 / numero2;
				printf("O resultado e: %.2f", resultado);
				break;
			}
		case '*':
			resultado = numero1 * numero2;
			printf("O resultado e: %.2f", resultado);
			break;
		default:
			printf("A operacao matematica digitada nao e uma escolha");
	}
	
	printf("\n Fim do Exercicio");
	
	getch();
}