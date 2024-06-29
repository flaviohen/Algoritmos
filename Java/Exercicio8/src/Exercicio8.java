
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

 * */

import java.util.Scanner;
public class Exercicio8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	   int tamanhoVetor = 0, armazenaValorTemporario = 0, posicaoTrocando = 0, proximaPosicaoVerificar = 0, posicoesASeremPercorridas = 0;
	   Scanner entradaDeDados = new Scanner(System.in);
	   
	   System.out.printf("Digite a quantidade de elemento que quer no vetor: ");
	   tamanhoVetor = entradaDeDados.nextInt();
	   
	   int vetorInteiro[] = new int[tamanhoVetor];
	   
	   for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
		   System.out.printf("Digite o numero na posicao %d do vetor: ", posicaoVetor);
		   vetorInteiro[posicaoVetor] = entradaDeDados.nextInt();
	   }
	   
	   for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
		   System.out.printf("[%d] = %d \n", posicaoVetor, vetorInteiro[posicaoVetor]);
	   }
	   
	   //ordenando vetor em ordem crescente
	   for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) 
	   {
		   while(posicoesASeremPercorridas < tamanhoVetor) 
		   {			   
			   posicaoTrocando = posicoesASeremPercorridas;
			   if(posicoesASeremPercorridas != (tamanhoVetor - 1)) 
			   {
				   proximaPosicaoVerificar = posicoesASeremPercorridas + 1;
			   }
			   
			   if(vetorInteiro[posicaoTrocando] > vetorInteiro[proximaPosicaoVerificar]) 
			   {
				   armazenaValorTemporario = vetorInteiro[posicaoTrocando];
				   vetorInteiro[posicaoTrocando] = vetorInteiro[proximaPosicaoVerificar];
				   vetorInteiro[proximaPosicaoVerificar] = armazenaValorTemporario;
				   
				   if(posicoesASeremPercorridas == (tamanhoVetor - 1)) 
				   {
					   posicoesASeremPercorridas = tamanhoVetor + 1;
				   }
			   }
			   posicoesASeremPercorridas++;
		   }
		   posicoesASeremPercorridas = 0;
	   	}
	   System.out.printf("\n");
	   for(int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
		   System.out.printf("[%d] = %d \n", posicaoVetor, vetorInteiro[posicaoVetor]);
	   }
	   
	   System.out.printf("Fim do Exercicio");
	}

}
