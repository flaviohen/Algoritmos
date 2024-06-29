/*
 Exercício 6
Fazer um algoritmo que calcule o fatorial – 
Exemplo Fatorial de 5 = 5x4x3x2x1 = resultado fatorial

Algoritmo Exercicio6

Programa
  
  inteiro fatorialDe = 0, fatorial = 1;
Inicio

  Escreva("Digite o numero deseja saber o fatorial: ");
  Leia(fatorialDe);
  
  Para cada variavel inteiro inicio igual fatorialDe; enquanto inicio maior igual a 1; subtraia inicio menos 1 e faça
  InicioPara
     fatorial = fatorial vezes inicio           
  FimPara 
   
  Escreva("O fatorial é: " + fatorial);
  
  Escreva("Fim do Exercicio");
Fim
 * */

import java.util.Scanner;
public class Exercicio6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int fatorialDe = 0, fatorial = 1;
		Scanner entradaDeDados = new Scanner(System.in);
		
		System.out.printf("Digite o numero deseja saber o fatorial: ");
		fatorialDe = entradaDeDados.nextInt();
		
		for(int inicio = fatorialDe; inicio >= 1; inicio = inicio - 1) {
			
			fatorial = fatorial * inicio;
		}
		System.out.printf("O fatorial e: %d \n", fatorial);
		
		System.out.printf("Fim do Exercicio");

	}

}
