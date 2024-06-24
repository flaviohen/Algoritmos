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

import java.util.Scanner;
public class Exercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int numero;
		Scanner entradaDeDados = new Scanner(System.in);
		System.out.printf("Digite um numero: ");
		numero = entradaDeDados.nextInt();
		
		if(numero % 2 == 0) {
			System.out.println("Este numero e par");
		}
		else {
			System.out.println("Este numero e impar");
		}
		
		System.out.println("Fim do Exercicio");

	}

}
