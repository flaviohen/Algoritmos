using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio1
{
    internal class Program
    {
        /*
        Exercicio 1
        Fazer as quatro operações matemáticas básicas, somar, subtrair, dividir e multiplicar

        Programa Exercicio 1

        Inteiro numero1, numero2, resultadoSoma, resultadoSubtracao, 
        resultadoDivisao, resultadoMultiplicacao;
        Inicio

            Escreva("Digite o primeiro numero");
            Leia(numero1);

            Escreva("Digite o segundo numero");
            Leia(numero2);

            resultadoSoma = numero1 + numero2;
            resultadoSubtracao = numero1 - numero2;
            resultadoDivisao = numero1 / numero2;
            resultadoMulplicacao - numero1* numero2;

            Escreva("A Soma é: " + resultadoSoma);
            Escreva("A Subtração é: " + resultadoSubtracao);
            Escreva("A Divisão é: " + resultadoDivisao);
            Escreva("A Multiplicação é: " + resultadoMultiplicacao);

            Escreva("Fim do Calculo");

         Fim
        */
        static void Main(string[] args)
        {
            int numero1, numero2, resultadoSoma, resultadoSubtracao, resultadoDivisao, resultadoMultiplicacao;

            Console.WriteLine("Digite o primeiro numero:");
            numero1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o segundo numero: ");
            numero2 = int.Parse(Console.ReadLine());

            resultadoSoma = numero1 + numero2;
            resultadoSubtracao = numero1 - numero2;
            resultadoDivisao = numero1 / numero2;
            resultadoMultiplicacao = numero1 * numero2;

            Console.WriteLine("A Soma é: " + resultadoSoma);
            Console.WriteLine("A Subtracao é: " + resultadoSubtracao);
            Console.WriteLine("A Divisao e: " + resultadoDivisao);
            Console.WriteLine("A Multiplicacao e: " + resultadoMultiplicacao);

            Console.WriteLine("Fim do Exercicio");
            Console.ReadKey();
        }
    }
}
