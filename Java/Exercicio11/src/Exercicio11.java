
/*
 Exercícios 11
Fazer um algoritmo que diga se um numero é primo ou não 
Verifique se o número é natural, positivo e diferente de zero ou um.
Verifique se o número é par ou ímpar. 
  Se for par, exceto o número 2 (que é o único número primo par), ele não é primo.
Verifique se o número termina com 5 ou zero. 
  Se sim, exceto o número 5 (que é o único número primo que termina com 5), ele não é primo.
 

Algoritmo Exercicio11

Programa

inteiro numeroPrimo, ehNumeroPrimo = 0;

Inicio
    
    Escreva("Digite o numero que deseja saber se e primo: ");
    Leia(numeroPrimo);
    
    se numeroPrimo modulo 2 diferente de 0 ou numeroPrimo igual a 2
      ehNumeroPrimo = 1;
    fimSe

    se ehNumeroPrimo igual a 0
      se numeroPrimo == 5
         ehNumeroPrimo = 1;
      senao se numeroPrimo modulo de 10 igual 5 ou numeroPrimo modulo de 10 == 0 
      	 ehNumeroPrimo = 0;
      fimSe
    fimSe	
    
    se(ehNumeroPrimo == 0){
      Escreva("Este numero nao e primo");
    }
    else{
      Escreva("Este numero e primo");
    }
    
    Escreva("Fim do Exercicio");
Fim 
 */

import java.util.Scanner;
public class Exercicio11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner entradaDeDados = new Scanner(System.in);
		int numeroPrimo, ehNumeroPrimo = 0;
		System.out.printf("Digite o numero que deseja saber se e primo: ");
		
		numeroPrimo = entradaDeDados.nextInt();
		
		if(numeroPrimo > 0 && numeroPrimo != 0 && numeroPrimo != 1) {
			if(numeroPrimo % 2 != 0 || numeroPrimo == 2) {
				ehNumeroPrimo = 1;
			}
			if(ehNumeroPrimo == 0) {
				if(numeroPrimo == 5) {
					ehNumeroPrimo = 1;
				}
				else if(numeroPrimo % 10 == 5 || numeroPrimo % 10 == 0){
					ehNumeroPrimo = 0;
				}
			}
		}
		
		if(ehNumeroPrimo == 0) {
			System.out.printf("Este numero nao e primo.");
		}
		else {
			System.out.printf("Este numero e primo");
		}
		
		System.out.printf("\n Fim do Exercicio");

	}

}
