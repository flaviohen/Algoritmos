using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio9
{
    internal class Program
    {
        /*
        Exercício 9
        Fazer uma matriz com uma quantidade de colunas e linhas e atribuir números aos blocos da matriz e mostrar os numeros da matriz

        Algoritmo Exercicio9
        Programa
        inteiro matriz;
        inteiro linhas, colunas;

        Inicio

        Escreva("Digite a quantidade de linhas da matriz: ");
        Leia(linhas);
        Escreva("Digite a quantidade de colunas da matriz: ");
        Leia(colunas);

        matriz = new Inteiro[linhas][colunas];
  inteiro contador = 0;

        Para inteiro varredordeLinhas inicia com 0; enquanto varredorDeLinhas<linhas; varredorDeLinhas soma mais 1 e faça
        
               Para inteiro varredordeColunas inicia com 0; enquanto varredorDeColunas<colunas; varredorDeColunas soma mais 1 e faça
        
                    Leia(matriz[varredorDeLinhas][varredorDeColunas]);
        Fim_Para
        Escreva("/n");
        Fim_Para

      Para inteiro varredordeLinhas inicia com 0; enquanto varredorDeLinhas<linhas; varredorDeLinhas soma mais 1 e faça
      
             Para inteiro varredordeColunas inicia com 0; enquanto varredorDeColunas<colunas; varredorDeColunas soma mais 1 e faça
      
                  Escreva("["+varredordeLinhas+"]["+varredorDeColunas+"]" = " + matriz[varredorDeLinhas][varredorDeColunas]);

             Fim_Para
             Escreva("/n");
        Fim_Para
      Escreva("Fim do Exercicio");
        Fim*/
        static void Main(string[] args)
        {
            int linhas = 0, colunas = 0;

            Console.WriteLine("Digite a quantidade de linhas da matriz: ");
            linhas = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Digite a quantidade de colunas da matriz: ");
            colunas = Convert.ToInt32(Console.ReadLine());

            int[,] matriz = new int[linhas, colunas];

            for (int linha = 0; linha < linhas; linha++) {
                for (int coluna = 0; coluna < colunas; coluna++) {
                    Console.WriteLine("Digite o valor na matriz para a posicao [" + linha + "][" + coluna + "]");
                    matriz[linha, coluna] = Convert.ToInt32(Console.ReadLine());
                }
            }

            Console.WriteLine("");

            for (int linha = 0; linha < linhas; linha++) {
                for (int coluna = 0; coluna < colunas; coluna++) {
                    Console.WriteLine("[" + linha + "]["+coluna+"] = " + matriz[linha,coluna]);
                }
            }
            Console.WriteLine("Fim do Exercicio");
        }
    }
}
