using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio7
{
    internal class Program
    {
        /*Exercicio 7
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
        */
        static void Main(string[] args)
        {
            int[] variavelRepresentaVetor = new int[3];

            variavelRepresentaVetor[0] = 1;
            variavelRepresentaVetor[1] = 2;
            variavelRepresentaVetor[2] = 3;

            for (int numeroIndice = 0; numeroIndice < 3; numeroIndice = numeroIndice + 1) {
                Console.WriteLine("O valor no Vetor[" + numeroIndice + "] = " + variavelRepresentaVetor[numeroIndice]);
            }
            Console.WriteLine("Fim do Exercicio");
;        }
    }
}
