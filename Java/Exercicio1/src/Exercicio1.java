/*Exercício 1
Fazer as quatro operações matemáticas básicas, somar, subtrair, dividir e multiplicar

Algoritmo Exercici1
Programa
  
  Inteiro numero1, numero2, resultadoSoma, resultadoSubtracao, resultadoDivisao, resultadoMultiplicacao
Inicio
  
  Escreva("Digite o primeiro numero");
  Leia(numero1);
  
  Escreva("Digite o segundo numero");
  Leia(numero2);
  
  resultadoSoma = numero1 + numero2;
  resultadoSubtracao = numero1 - numero2;
  resultadoDivisao = numero1 / numero2;
  resultadoMulplicacao - numero1 * numero2;
  
  Escreva("A Soma é: " + resultadoSoma);
  Escreva("A Subtração é: " + resultadoSubtracao);
  Escreva("A Divisão é: " + resultadoDivisao);
  Escreva("A Multiplicação é: " + resultadoMultiplicacao);
  
  Escreva("Fim do Calculo");
  
Fim
*
Mostrar texto no console em java system.out.print("");
Ler variavel bibioteca import Java.Util.Scanners 
Scanner entradaDeInformacao = new Scanner(System.in)
*/
import java.util.Scanner;
public class Exercicio1 {
	
	public static void main(String[] args) {
		
		int numero1=0, numero2=0, resultadoSoma=0, resultadoSubtracao=0, resultadoDivisao=0, resultadoMultiplicacao=0;
		
		Scanner entradaDeDados = new Scanner(System.in);
		System.out.println("Digite o primeiro numero: ");
		numero1 = entradaDeDados.nextInt();
		
		System.out.println("Digite o segundo numero: ");
		numero2 = entradaDeDados.nextInt();
		
		resultadoSoma = numero1 + numero2;
		resultadoSubtracao = numero1 - numero2;
		resultadoDivisao = numero1 / numero2;
		resultadoMultiplicacao = numero1 * numero2;
		
		System.out.printf("A soma é: %d \n", resultadoSoma);
		System.out.printf("A subtracao é: %d \n", resultadoSubtracao);
		System.out.printf("A Divisao é: %d \n", resultadoDivisao);
		System.out.printf("A Multiplicacao e: %d \n", resultadoMultiplicacao);
		
		System.out.print("Fim do Exercicio");
		
		
	}

}
