using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio2
{
    internal class Program
    {
        /*
        Exercicio 2 - 
        Fazer uma calculadora com a opção das quatro operações matemáticas

        Algoritmo - Exercicio2
        Programa
    
            Real numero1, numero2, resultado
            caractere operacaoMatematica

        Inicio

            Escreva("Digite o primeiro número:");
            Leia(numero1);

            Escreva("Escolha a operação matemática");
            Escreva("+ - Soma");
            Escreva("- - Subtrair");
            Escreva("/ - Dividir");
            Escreva("* - Multiplicar");
            Leia(operacaoMatematica);

            Escreva("Digite o segundo número") :
            Leia(numero2);

            escolha(operacao)
            {

                caso "+":
                    resultado = numero1 + numero2;
                    Escreva("Resultado Soma: " + resultado);
                pare;
                caso "-":
	                 resultado = numero1 - numero2;
                     Escreva("Resultado Subtração:" + resultado)
                    pare:
                caso "/":
                        se(numero2 == 0){
                        Escreva("Não é possível dividir por zero");
                        }
                        senão
                        {
                            resultado = numero1 / numero2;
                            Escreva("Resultado Divisão: " + resultado);
                        }
                        pare;
                caso "*":
                    resultado = numero1 * numero2;
                    Escreva("Resultado Multiplicação: " + resultado);
                    pare;
             }

        Escreva("Fim do calculo.");

        Fim */

        static void Main(string[] args)
        {
            double numero1, numero2, resultado;
            string operadorMatematico;

            Console.WriteLine("Digite o primeiro numero: ");
            numero1 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Escolha o operador Matematico");
            Console.WriteLine("+ = Soma");
            Console.WriteLine("- = Subtracao");
            Console.WriteLine("/ = Divisao");
            Console.WriteLine("* = Multiplicacao");
            operadorMatematico = Console.ReadLine();

            Console.WriteLine("Digite o segundo numero: ");
            numero2 = Convert.ToDouble(Console.ReadLine());

            switch (operadorMatematico)
            {
                case "+":
                    resultado = numero1 + numero2;
                    Console.WriteLine("O resultado e: " + resultado);
                    break;
                case "-":
                    resultado = numero1 - numero2;
                    Console.WriteLine("O resultado e: " + resultado);
                    break;
                case "/":
                    if (numero2 == 0)
                    {
                        Console.WriteLine("Não é possivel fazer divisao por zero");
                    }
                    else {
                        resultado = numero1 / numero2;
                        Console.WriteLine("O resultado e: " + resultado);
                    }
                    break;
                case "*":
                    resultado = numero1 * numero2;
                    Console.WriteLine("O resultado e: " + resultado);
                    break;
                default:
                    break;
            }

            Console.WriteLine("Fim do Exercicio");
            Console.ReadKey();
        }
    }
}
