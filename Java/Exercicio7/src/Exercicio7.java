/*
 Exercicio 7
Crie um vetor com uma quantidade de valores e leia o vetor e mostre na tela.

Algoritmo Exercicio7
Programa

 inteiro variavelRepresentaVetor = inteiro[]
 
 Inicio
   
   variavelRepresentaVetor[0] = 1;
   variavelRepresentaVetor[1] = 2;
   variavelRepresentaVetor[2] = 3;
   
   para cada inteiro numeroIndice que inicia com 0; enquanto numeroIndice for menor que variavelRepresentaVetor.tamanho igual a 3; numeroIndice soma mais 1 e faça
      Escreva("Valor no vetor: " + variavelRepresentaVetor[numeroIndice]);
   fim_para
   
  Escreva("Fim do Exercicio");
 Fim
 * */

import java.util.Scanner;
public class Exercicio7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int variavelRepresentaVetor[] = new int[3];
		
		variavelRepresentaVetor[0] = 1;
		variavelRepresentaVetor[1] = 2;
		variavelRepresentaVetor[2] = 3;
		
		for(int numeroIndice = 0; numeroIndice < variavelRepresentaVetor.length; numeroIndice = numeroIndice + 1) {
			System.out.printf("Valor no Vetor[%d] = %d\n", numeroIndice, variavelRepresentaVetor[numeroIndice]);
		}
		
		System.out.printf("Fim do Exercicio");

	}

}
