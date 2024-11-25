voiusing System;

class Program
{
    static void Main()
    {
        // Solicita o número de pacientes
        Console.Write("Informe o número de pacientes: ");
        int numPacientes = int.Parse(Console.ReadLine());

        // Inicializa a variável para armazenar a maior idade
        int maiorIdade = 0;

        // Solicita as idades dos pacientes e encontra a maior
        for (int i = 1; i <= numPacientes; i++)
        {
            Console.Write($"Informe a idade do paciente {i}: ");
            int idade = int.Parse(Console.ReadLine());

            // Verifica se a idade atual é maior que a maior idade registrada
            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }
        }

        // Exibe a idade do paciente mais idoso
        Console.WriteLine($"A idade do paciente mais idoso é: {maiorIdade}");
    }
}

