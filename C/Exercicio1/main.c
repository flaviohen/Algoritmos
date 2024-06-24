#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Exercicio 1
Fazer as quatro operações matemáticas básicas, somar, subtrair, dividir e multiplicar

Programa Exercicio 1
  
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
*/
/*printf comando de escrita em c
  scanf comando de leitura em c
  %d para variaveis tipo inteiro
  exemplo printf("Mensagem %d", variavelTipoInteiro);
  exemplo scanf("% tipo da viariavel", &variavelArmazenaValor)*/
  
int numero1, numero2, resultadoSoma, resultadoSubtracao, resultadoDivisao, resultadoMultiplicacao;
int main(int argc, char *argv[]) {
	
	printf("Digite o primeiro numero:");
	scanf("%d",&numero1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&numero2);
	
	resultadoSoma = numero1 + numero2;
	resultadoSubtracao = numero1 - numero2;
	resultadoDivisao = numero1 / numero2;
	resultadoMultiplicacao = numero1 * numero2;
	
	printf("A Soma e: %d \n", resultadoSoma);
	printf("A Subtracao e: %d \n", resultadoSubtracao);
	printf("A Divisao e: %d \n", resultadoDivisao);
	printf("A Multiplicacao e: %d \n",resultadoMultiplicacao);
	printf("Fim do Exercicio 1");
	getch();	
}