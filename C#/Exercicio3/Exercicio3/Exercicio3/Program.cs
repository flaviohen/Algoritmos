using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio3
{
    internal class Program
    {
        /*
         Exercicio 3 - 
        Fazer a troca de valores entre variáveis atribua um valor a cada variável e faça a substituição de valor, ou seja,
        o valor de uma variável deve ser atribuído a outra variável e mostre o resultado.

        Algoritmo Exercicio 3

        Programa
            Inteiro valor1, valor2, armazenamentoTemporario
        Inicio

        Escreva("Digite o valor para a primeiro variavel: ");
        Leia(valor1);

        Escreva("Digite o valor para a segunda variavel: ");
        Leia(valor2);

        Escreva("O valor da primeira variavel é: " + valor1);
        Escreva("O valor da segunda variavel é: " + valor2);

        Escreva("Troque os valores das variaveis, ou seja, coloque o primeiro valor na segunda variavel e segundo valor na primeira variavel");

        armazenamentoTemporario = valor1;
        valor1 = valor2;
        valor2 = armazenamentoTemporario;
  
        Escreva("O valor da primeira variavel agora é: " + valor1);
        Escreva("O valor da segunda variavel agora é: " + valor2);

        Escreva("Fim do exercicio");

        Fim
        */
        static void Main(string[] args)
        {
            int valor1, valor2, armazenamentoTemporario;

            Console.WriteLine("Digite o valor da primeira variavel: ");
            valor1 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Digite o valor da segunda variavel: ");
            valor2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("O valor da primeira variavel e: " + valor1);
            Console.WriteLine("O valor da segunda variavel e: " + valor2);

            Console.WriteLine("Trocando valores...");

            armazenamentoTemporario = valor1;
            valor1 = valor2;
            valor2 = armazenamentoTemporario;

            Console.WriteLine("O valor da primeira variavel agora e: " + valor1);
            Console.WriteLine("O valor da segunda variavel agora e: " + valor2);

            Console.WriteLine("Fim do Exercicio");
            Console.ReadKey();
        }
    }
}
