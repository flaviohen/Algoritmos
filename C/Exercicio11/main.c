#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Exercícios 11
Fazer um algoritmo que diga se um numero é primo ou não 
Verifique se o número é natural, positivo e diferente de zero ou um.
Verifique se o número é par ou ímpar. 
  Se for par, exceto o número 2 (que é o único número primo par), ele não é primo.
Verifique se o número termina com 5 ou zero. 
  Se sim, exceto o número 5 (que é o único número primo que termina com 5), ele não é primo.
Divida o número pelos primeiros números primos, como 2, 3, 5, 7, 11, 13, etc. Se o número for 
divisível por algum deles, ele não é primo. Se não for divisível por nenhum deles, ele é primo.
Dica: Pare de dividir quando o quadrado do número primo for maior que o 
número que você está testando. Por exemplo, se você estiver testando o número 103, 
pare na divisão por 11, porque (11^2 = 121), que é maior que 103 
 

Algoritmo Exercicio11

Programa

inteiro numeroPrimo, ehNumeroPrimo = 0;

Inicio
    
    Escreva("Digite o numero que deseja saber se e primo: ");
    Leia(numeroPrimo);
    
    se(Negacao(numeroPrimo > 0 e numeroPrimo diferente de 0 e numeroPrimo diferente de 1)){
          ehNumeroPrimo igual a 1;
    }
    se(ehNumeroPrimo igual a 0){
        se(numero modulo de 2 igual a 0 ou numero igual a 2){
            ehNumeroPrimo igual a 1;
        }
    }
    se(ehNumeroPrimo igual a 0){
      se(Negacao(numero modulo de 10 == 5 ou numero modulo de 10 == 0) e numero diferente de 5){
          ehNumero igual a 1;
      }
    }
    se(ehNumeroPrimo igual a 0){
      se(Negacao(numero modulo de 2 igual a 0 ou 
                 numero modulo de 3 igual a 0 ou 
                 numero modulo 7 igual a 0 ou 
                 numero modulo de 11 igual a 0 ou 
                 numero modulo de 13 igual 0)){
         ehNumeroPrimo igual a 1;
      }
    }
    
    se(ehNumeroPrimo == 0){
      Escreva("Este numero nao e primo");
    }
    else{
      Escreva("Este numero e primo");
    }
    
    Escreva("Fim do Exercicio");
Fim  */

int main(int argc, char *argv[]) {
	
	int numeroPrimo, ehNumeroPrimo = 0;
	
	printf("Digite o numero que deseja saber se e primo: ");
	scanf("%d", &numeroPrimo);
	
	if(numeroPrimo > 0 && numeroPrimo != 0 && numeroPrimo != 1)
	{ 		
		if(numeroPrimo % 2 != 0 || numeroPrimo == 2){
		    
    		ehNumeroPrimo = 1;
		}	
		if(ehNumeroPrimo == 0)
		{	
			if(numeroPrimo == 5){
				ehNumeroPrimo = 1;
			}	
			else if(numeroPrimo % 10 == 5 || numeroPrimo % 10 == 0)
			{	
				ehNumeroPrimo = 0;
			}
		}
		/*if(ehNumeroPrimo == 0){
		
		if(numeroPrimo % 2 == 0 || 
		   		 numeroPrimo % 3 == 0 ||
		   		 numeroPrimo % 7 == 0 ||
		         numeroPrimo % 11 == 0 ||
		         numeroPrimo % 13 == 0)
			{
		   	       ehNumeroPrimo = 0;
			}
			else{
				ehNumeroPrimo = 1;
			}
		}*/	
	}
	
	if(ehNumeroPrimo == 0){
		printf("Este numero nao e primo");
	}
	else{
		printf("Este numero e primo");
	}
	
	printf("\n Fim do Exercicio");
	
	getch();
}