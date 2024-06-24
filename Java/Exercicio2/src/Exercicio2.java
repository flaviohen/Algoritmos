
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
              Escreva("Resultado Soma: " + ((Inteiro)resultado));          
          pare;
          caso "-":
		se(numero1 maior que numero2){
			resultado = numero1 - numero2;
		}
		senao{
			resultado = numero2 - numero1;	
		}
              Escreva("Resultado Subtração:" + ((Inteiro)resultado))
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

import java.util.Scanner;
public class Exercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		float numero1, numero2, resultado;
		String operadorMatematico;
		Scanner entradaDeDados = new Scanner(System.in);
		
		System.out.println("Digite o primeiro numero: ");
		numero1 = entradaDeDados.nextInt();
		
		System.out.println("Escolha a operacao Matematica");
		System.out.println("+ = Soma");
		System.out.println("- = Subtracao");
		System.out.println("/ = Divisao");
		System.out.println("* = Multiplicacao");
		
		operadorMatematico = entradaDeDados.next();
		
		System.out.println("Digite o segundo numero: ");
		numero2 = entradaDeDados.nextInt();
		
		switch(operadorMatematico) {
		
		case "+":
			resultado = numero1 + numero2;
			System.out.printf("O resultado e: %.2f", resultado);
			break;
		case "-":
			resultado = numero1 - numero2;
			System.out.printf("O resultado e: %.2f", resultado);
			break;
		case "/":
			if(numero2 == 0) {
				System.out.print("Não é possivel fazer divisão por zero");
			}
			else {
				resultado = numero1 / numero2;
				System.out.printf("O resultado e: %.2f", resultado);
				break;
			}
		case "*":
			resultado = numero1 * numero2;
			System.out.printf("O resultado e %.2f", resultado);
			break;
		default:
			System.out.print("Operador matematico não reconhecido");
		}
		
		System.out.print("\n Fim do Exercicio");
	}
}
