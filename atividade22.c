
#include <stdio.h>
{
    // Função que verifica se o número é triangular
    static bool EhTriangular(int n)
    {
        // Calcula o discriminante da equação quadrática
        int discriminante = 1 + 8 * n;
        
        // Verifica se o discriminante é um quadrado perfeito
        int raiz = (int)Math.Sqrt(discriminante);
        
        if (raiz * raiz == discriminante)
        {
            // Calcula o valor de k
            int k = (-1 + raiz) / 2;
            return k * (k + 1) / 2 == n;  // Verifica se a fórmula de T_k é igual a n
        }
        
        return false;  // Não é triangular
    }

    static void Main()
    {
        // Entrada do número
        Console.Write("Digite um número natural: ");
        int numero = int.Parse(Console.ReadLine());
        
        // Verifica se o número é triangular
        if (EhTriangular(numero))
        {
            Console.WriteLine($"{numero} é um número triangular.");
        }
        else
        {
            Console.WriteLine($"{numero} não é um número triangular.");
        }
    }
}
