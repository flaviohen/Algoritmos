
/*Exercicio 3 - 
Fazer a troca de valores entre variáveis atribua um valor a cada variável e faça a substituição de valor, ou seja, 
o valor de uma variável deve ser atribuído a outra variável e mostre o resultado.

Algoritmo Exercicio 3

Programa

  Inteiro valor1, valor2, armazenamentoTemporario

Inicio
  
  Escreva("Digite o valor para a primeiro variavel: ");
  Leia(valor1);
  
  Escreva("Digite o valor para a segunda variavel: ");
  Leia(valor2);
  
  Escreva("O valor da primeira variavel é: " + valor1);
  Escreva("O valor da segunda variavel é: " + valor2);
  
  Escreva("Troque os valores das variaveis, ou seja, coloque o primeiro valor na segunda variavel e segundo valor na primeira variavel");
  
  armazenamentoTemporario = valor1;
  valor1 = valor2;
  valor2 = armazenamentoTemporario;
  
  Escreva("O valor da primeira variavel agora é: " + valor1);
  Escreva("O valor da segunda variavel agora é: " + valor2);
  
  Escreva("Fim do exercicio");
  
Fim
*/
import java.util.Scanner;
public class Exercicio3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int valor1, valor2, armazenamentoTemporario;
		Scanner entradaDeDados = new Scanner(System.in);
		
		System.out.println("Digite o valor da primeira variavel: ");
		valor1 = entradaDeDados.nextInt();
		
		System.out.println("Digite o valor da segunda variavel: ");
		valor2 = entradaDeDados.nextInt();
		
		System.out.printf("O valor da primeira variavel e: %d \n", valor1);
		System.out.printf("O valor da segunda variavel e: %d \n", valor2);
		
		System.out.println("\n Trocando os valores...");
		
		armazenamentoTemporario = valor1;
		valor1 = valor2;
		valor2 = armazenamentoTemporario;
		
		System.out.printf("O valor da primeira variavel agora e: %d \n", valor1);
		System.out.printf("O valor da segunda variavel agora e: %d \n", valor2);
		
		System.out.printf("\n Fim do Exercicio");

	}

}
