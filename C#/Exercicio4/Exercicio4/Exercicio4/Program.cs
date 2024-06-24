using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio4
{
    internal class Program
    {
        /*Exercício 4
        Leia um número e informe se o número é par ou ímpar, para determinar um número par ou ímpar
        você deve utilizar o operador modulo "%" de 2 se o resultado for 0 o número é par, senão o número é ímpar.

        Algoritmo Exercicio 4

        Programa

        inteiro numero

        Inicio


            Escreva("Digite um número");
            Leia(numero);

            se(numero % 2 == 0)
            {
                Escreva("Este numero é par");
            }
            senão{
                Escreva("Este numero é impar");
            }

        Escreva("Fim do Exercicio");

        Fim
        */

        static void Main(string[] args)
        {
            int numero;

            Console.WriteLine("Digite um numero: ");
            numero = Convert.ToInt32(Console.ReadLine());

            if (numero % 2 == 0)
            {
                Console.WriteLine("O numero e par");
            }
            else {
                Console.WriteLine("O numero e impar");
            }
            Console.WriteLine("Fim do Exercicio");
            Console.ReadKey();
        }
    }
}
