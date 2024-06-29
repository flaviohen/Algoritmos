using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio6
{
    internal class Program
    {
        /*
         Exercício 6
        Fazer um algoritmo que calcule o fatorial – 
        Exemplo Fatorial de 5 = 5x4x3x2x1 = resultado fatorial

        Algoritmo Exercicio6

        Programa
  
        inteiro fatorialDe = 0, fatorial = 1;
        Inicio

            Escreva("Digite o numero deseja saber o fatorial: ");
            Leia(fatorialDe);
  
        Para cada variavel inteiro inicio igual fatorialDe; enquanto inicio maior igual a 1; subtraia inicio menos 1 e faça
        InicioPara
            fatorial = fatorial vezes inicio           
        FimPara 
   
        Escreva("O fatorial é: " + fatorial);
  
        Escreva("Fim do Exercicio");
      Fim
         */
        static void Main(string[] args)
        {
            int fatorialDe = 0, fatorial = 1;

            Console.WriteLine("Digite o numero que deseja saber o fatorial: ");
            fatorialDe = Convert.ToInt32(Console.ReadLine());

            for (int inicio = fatorialDe; inicio >= 1; inicio = inicio - 1) {
                fatorial = fatorial * inicio;
            }
            Console.WriteLine("O fatorial e: " + fatorial);
            Console.WriteLine("Fim do Exercicio");
            Console.ReadKey();
        }
    }
}
