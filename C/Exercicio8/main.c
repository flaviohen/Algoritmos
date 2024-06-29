#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
	Exercício 8
Fazer um vetor com uma quantidade de número 10 números 
aleatórios inteiro em um vetor e ordená-los em ordem
Uma forma de ordenação é pegar cada valor no vetor e comparar com cada um dos valores no vetor e verificar com cada valor se é maior  com cada valor da posição e fazer a troca das posições caso seja maior.

Algoritmo - Exercicio 8
Programa

  inteiro vetorInteiro [];
  inteiro tamanhoDoVetor = 0;
  inteiro armazenaValorTemporario = 0, posicaoTrocando, proximaPosicaoVerificar;

Inicio

   Escreva("Digite a quantidade elemento para o vetor: ");
   Leia(TamanhoDoVetor);
   vetorInteiro = inteiro[tamanhoDoVetor];

   Para inteiro posicaoNoVetor inicia com 0; enquanto posicaoNoVetor < tamanhoDoVetor; posicaoNoVetor soma mais 1 e faça  
        Escreva("Coloque o numero aleatorio no vetor");
        Leia(vetorInteiro[posicaoNoVetor]);
   FimPara
   
   
   Para inteiro posicaoVetor inicia com 0; enquanto posicaoVetor < tamanhoDoVetor; posicaoVetor soma mais 1 e faça
        Escreva(vetorInteiro[posicaoVetor]);
   FimPara
   
   
   //Ordenação em forma crescente
   Para inteiro posicaoVetor inicia 0; enquanto posicaoVetor < tamanhoDoVetor; posicaoVetor soma mais 1 e faça

      enquanto(posicoesASeremPercorridas menor tamanhoVetor)
      Inicio
	posicaoTrocando recebe posicoesASeremPercorridas;
	proximaPosicaoVerificar recebe posicoesASeremPercorridas mais 1;

	se(vetorInteiro[posicaoTrocando] maior vetorInteiro[proximaPosicaoVerificar])
		armazenaValorTemporario recebe vetorInteiro[posicaoTrocando];
		vetorInteiro[posicaoTrocando] recebe vetorInteiro[proximaPosicaoVerificar];
		vetorInteiro[proximaPosicaoVerificar] recebe armazenaValorTemporario;
		
		se(posicoesASeremPercorridas igual (tamanhoVetor menos 1))
			posicoesASeremPercorridas recebe tamanhoVetor mais 1;
		fim_se
	fim_se
	posicoesASeremPercorridas soma mais 1;
      Fim_enquanto
      posicoesAsSeremPercorridas recebe 0;
   FimPara
     
     Para inteiro posicaoVetor inicia com 0; enquanto posicaoVetor < tamanhoDoVetor; posicaoVetor soma mais 1 e faça
        Escreva(vetorInteiro[posicaoVetor]);
     FimPara 
Fim

 */

int main(int argc, char *argv[]) {
	
	int tamanhoVetor = 0, armazenaValorTemporario = 0, posicaoTrocando, proximaPosicaoVerificar, posicoesAseremPercorridas = 0;
	
	printf("Digite a quantidade de elementos para o vetor: ");
	scanf("%d", &tamanhoVetor);
	
	int vetorInteiro[tamanhoVetor];
	
	for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		printf("Digite o valor para a posicao %d do Vetor: ", posicaoVetor );
		scanf("%d",&vetorInteiro[posicaoVetor]);
	}
	
	for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		printf("[%d] = %d \n", posicaoVetor, vetorInteiro[posicaoVetor]);
	}
	
	//ordenando vetor em ordem crescente
	for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		while(posicoesAseremPercorridas < tamanhoVetor){
			
			posicaoTrocando = posicoesAseremPercorridas;
			proximaPosicaoVerificar = posicoesAseremPercorridas + 1;
			
			if(vetorInteiro[posicaoTrocando] > vetorInteiro[proximaPosicaoVerificar]){
				armazenaValorTemporario = vetorInteiro[posicaoTrocando];
				vetorInteiro[posicaoTrocando] = vetorInteiro[proximaPosicaoVerificar];
				vetorInteiro[proximaPosicaoVerificar] = armazenaValorTemporario;
				
				if(posicoesAseremPercorridas == (tamanhoVetor - 1)){
					posicoesAseremPercorridas = tamanhoVetor + 1;
				}				
			}
			posicoesAseremPercorridas++;
		}
		posicoesAseremPercorridas = 0;
	}
	
	printf("\n");
	for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		printf("[%d] = %d \n", posicaoVetor, vetorInteiro[posicaoVetor]);
	}
	
	getch();
}