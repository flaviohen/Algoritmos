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

import java.util.Scanner;
public class Exercicio5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int qualTabuada;
		Scanner entradaDeDados = new Scanner(System.in);
		
		System.out.printf("Digite o numero da tabuada que deseja: ");
		qualTabuada = entradaDeDados.nextInt();
		
		for(int numeroMultiplicado = 0; 
				numeroMultiplicado <= 10; 
				numeroMultiplicado = numeroMultiplicado + 1) 
		{
			System.out.printf("%d X %d = %d", qualTabuada, numeroMultiplicado, (qualTabuada * numeroMultiplicado));
			System.out.printf("\n");
		}
		
		System.out.printf("Fim do Exercicio");
	}

}
