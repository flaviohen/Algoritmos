using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio8
{
    internal class Program
    {
        /*Exercício 8
        Fazer um vetor com uma quantidade de número 10 números
        aleatórios inteiro em um vetor e ordená-los em ordem
        Uma forma de ordenação é pegar cada valor no vetor e comparar com cada um dos valores no vetor e verificar com cada valor se é maior  com cada valor da posição e fazer a troca das posições caso seja maior.
        Algoritmo - Exercicio 8
        Programa

        inteiro vetorInteiro[];
        inteiro tamanhoDoVetor = 0;
        inteiro armazenaValorTemporario = 0, posicaoTrocando, proximaPosicaoVerificar;

        Inicio

           Escreva("Digite a quantidade elemento para o vetor: ");
        Leia(TamanhoDoVetor);
        vetorInteiro = inteiro[tamanhoDoVetor];

   Para inteiro posicaoNoVetor inicia com 0; enquanto posicaoNoVetor<tamanhoDoVetor; posicaoNoVetor soma mais 1 e faça
        Escreva("Coloque o numero aleatorio no vetor");
        Leia(vetorInteiro[posicaoNoVetor]);
        FimPara


        Para inteiro posicaoVetor inicia com 0; enquanto posicaoVetor<tamanhoDoVetor; posicaoVetor soma mais 1 e faça
     
             Escreva(vetorInteiro[posicaoVetor]);
        FimPara


        //Ordenação em forma crescente
        Para inteiro posicaoVetor inicia 0; enquanto posicaoVetor<tamanhoDoVetor; posicaoVetor soma mais 1 e faça
     
           enquanto(posicoesASeremPercorridas menor tamanhoVetor)
      Inicio
    posicaoTrocando recebe posicoesASeremPercorridas;
        se(posicoesASeremPercorridas diferente (tamanhoVetor menos 1))
            proximaPosicaoVerificar recebe posicoesASeremPercorridas mais 1;
        fim_se

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

     Para inteiro posicaoVetor inicia com 0; enquanto posicaoVetor<tamanhoDoVetor; posicaoVetor soma mais 1 e faça
        Escreva(vetorInteiro[posicaoVetor]);
        FimPara
   Fim
        */
        static void Main(string[] args)
        {
            int tamanhoVetor, armazenaValorTemporario, posicaoTrocando, proximaPosicaoVerificar = 0, posicoesASeremPercorridas = 0;

            Console.WriteLine("Digite a quantidade de elementos para o vetor: ");
            tamanhoVetor = Convert.ToInt32(Console.ReadLine());

            int[] vetorInteiro = new int[tamanhoVetor];

            for (int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
                Console.WriteLine("Digite o valor na posicao " + posicaoVetor + "do Vetor: ");
                vetorInteiro[posicaoVetor] = Convert.ToInt32(Console.ReadLine());
            }

            for (int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
                Console.WriteLine("[" + posicaoVetor + "] = " + vetorInteiro[posicaoVetor]);
            }

            //ordernando o vetor em ordem crescente
            for (int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
                while (posicoesASeremPercorridas < tamanhoVetor) {

                    posicaoTrocando = posicoesASeremPercorridas;
                    if (posicoesASeremPercorridas != (tamanhoVetor - 1)) {
                        proximaPosicaoVerificar = posicoesASeremPercorridas + 1;
                    }

                    if (vetorInteiro[posicaoTrocando] > vetorInteiro[proximaPosicaoVerificar]) {
                        armazenaValorTemporario = vetorInteiro[posicaoTrocando];
                        vetorInteiro[posicaoTrocando] = vetorInteiro[proximaPosicaoVerificar];
                        vetorInteiro[proximaPosicaoVerificar] = armazenaValorTemporario;

                        if (posicoesASeremPercorridas == (tamanhoVetor - 1)) {
                            posicoesASeremPercorridas = tamanhoVetor + 1;
                        }
                    }
                    posicoesASeremPercorridas++;
                }
                posicoesASeremPercorridas = 0;
            }
            Console.WriteLine(" ");
            for (int posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
                Console.WriteLine("[" + posicaoVetor + "] = " + vetorInteiro[posicaoVetor]);
            }
        }
    }
}
