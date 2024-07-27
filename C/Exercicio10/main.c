#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
	Exercício 10
Fazer um algoritmo que em que liste somente os números primos de 1 a 120

  
Programa Exercicio10

int quantidadeNumeroPrimo;
int vetorInteiro = int[];
int vetorNumerosPrimos = int[];
logico ehNumeroPrimo = 0;


Inicio

  Escreva("Digite ate que numero voce deseja saber os numeros primos: ");
  Leia(quantidadeNumeroPrimo);
 
  
  Para inteiro numero inicia 1; enquanto numero <= quantidadeNumeroPrimo; numero soma mais 1 e faça
      vetorInteiro[numero - 1] = numero;
  FimPara 


  Para inteiro numero inicia 0; enquanto numero <= vetorInteiro.tamanho; numero soma mais 1 e faça
  
     se vetorInteiro[numero] > 0 && vetorInteiro[numero] != 0 && vetorInteiro[numero] != 1 
    
  	se vetorInteiro[numero] % 2 == 0 || vetorInteiro[numero] == 2
	    
	  ehNumeroPrimo = 1;
	
	fimSe 
	
	se ehNumeroPrimo == 0
        
		se vetorInteiro[numero] == 5
			
			ehNumeroPrimo = 1;

		senao se vetorInteiro[numero] % 10 == 5 || vetorInteiro[numero] % 10 == 0
		
			ehNumeroPrimo = 0;
		fimSe

	fimSe

    fimSe

    se ehNumeroPrimo == 1
    	vetorNumeroPrimo[vetorNumerosPrimo.tamanho + 1] = vetorInteiro[numero];	
    fimSe
  FimPara

  Para inteiro numero inicia 0; enquanto numero <= vetorNumerosPrimo.tamanho; numero soma mais 1 e faça
  	
	Escreva(vetorNumerosPrimos[numero]);
	
  FimPara


  Escreva("Fim do Exercício");
Fim

 */

int main(int argc, char *argv[]) {
	
	int ateQualNumero, ehNumeroPrimo = 0;
	
	printf("Escreva ate qual quantidade deseja saber os numeros primos: ");
	scanf("%d", &ateQualNumero);
	
	int vetorInteiro[ateQualNumero];
	int vetorNumerosPrimos[ateQualNumero];
	
	int tamanhoVetorInteiro = ateQualNumero;
	int tamanhoVetorNumerosPrimos = ateQualNumero;
	
	for(int numero = 1; numero <= ateQualNumero; numero++){
		vetorInteiro[numero - 1] = numero;
	}
	int contador = 0;
	for(int numero = 0; numero <= ateQualNumero; numero++){
		
		if(vetorInteiro[numero] > 0 && vetorInteiro[numero] != 0 && vetorInteiro[numero] != 1){
			
			if(vetorInteiro[numero] % 2 != 0 || vetorInteiro[numero] == 2){
				ehNumeroPrimo = 1;
			}
			if(ehNumeroPrimo == 0){
				if(vetorInteiro[numero] == 5){
					ehNumeroPrimo = 1;
				}
				else if(vetorInteiro[numero] % 10 == 0 || vetorInteiro[numero] % 10 == 5){
					ehNumeroPrimo = 0;
				}
			}
			if(ehNumeroPrimo == 1){
				vetorNumerosPrimos[contador] = vetorInteiro[numero];
				contador++;
			}	
		}
		ehNumeroPrimo = 0;
				
	}
	
	for(int numero = 0; numero < contador; numero++){	
		printf("\n %d", vetorNumerosPrimos[numero]);
	}
	
	printf("\n Fim do Exercicio");
	getch();
}