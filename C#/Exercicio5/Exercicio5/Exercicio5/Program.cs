using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio5
{
    internal class Program
    {
        /*Exercício 5
            Faça um algoritmo que mostre a tabuada de um número escolhido.

        Algoritmo Exercicio5
        Programa
        Inicio
        inteiro QualTabuada;

        Escreva("Digite o numero da tabuada que deseja: ");
        Leia(QualTabuada);

        Para cada inteiro numeroMultiplicado que inicia com 0; enquanto numeroMultiplicado for menor igual a 10; numeroMultiplicado soma mais 1 faça
            Inicio
                Escreva(QualTabuada juntar " X " juntar numeroMultiplicado juntar " = " juntar QualTabuada vezes numeroMultiplicado);
                Escreva(novaLinha);
            Fim
        FimPara
        Escreva("Fim do Exercicio");
        Fim
        */
        static void Main(string[] args)
        {
            int qualTabuada;

            Console.WriteLine("Digite o numero da tabuada que deseja: ");
            qualTabuada = Convert.ToInt32(Console.ReadLine());

            for (int numeroMultiplicado = 0; numeroMultiplicado <= 10; numeroMultiplicado = numeroMultiplicado + 1) {

                Console.WriteLine(qualTabuada + "X" + numeroMultiplicado + " = " + (qualTabuada * numeroMultiplicado));
            }
            Console.WriteLine("Fim do Exercicio");
        }
    }
}
