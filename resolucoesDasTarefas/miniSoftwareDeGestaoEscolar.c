/*
Curso: Learn C Programming
By: Unknown Code

Tarefa Nível Junior:

Faz um programa que recebe os nomes, as idades, o gênero e calcule a média final de cada aluno. O programa deve averiguar as médias desses 4 alunos (2 de sexo M e 2 de sexo F) e informar se: a nota for menor que 9 retorna reprovado; a nota for igual a 9 ou 10 retorna recurso; e se a nota for maior que 10 retorna aprovado. Entre os alunos que tiveram uma nota positiva, o programa deverá verificar entre eles quem tem a média maior do que os outros e classificar o 1°, 2°,  e o 3° da turma.
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Fazendo uma configuração básica no software

    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    // Os dados do primeiro aluno:
    // Primeiro declara o nome

    char nomeA[61];

    // Depois declara a idade

    int idadeA;

    // E por fim declarar o gênero

    char generoA;

    // Agora vai declarar as três notas do
    // primeiro trimestre

    float primeiraNotaDoPrimeiroTrimestreA, segundaNotaDoPrimeiroTrimestreA, terceiraNotaDoPrimeiroTrimestreA;

    // Depois vai declarar novamente as três
    // notas do segundo trimestre

    float primeiraNotaDoSegundoTrimestreA, segundaNotaDoSegundoTrimestreA, terceiraNotaDoSegundoTrimestreA;

    // E depois vai fazer o mesmo com o
    // terceiro trimestre

    float primeiraNotaDoTerceiroTrimestreA, segundaNotaDoTerceiroTrimestreA, terceiraNotaDoTerceiroTrimestreA;

    // No fim vai declarar variáveis para
    // calcular as médias

    float mediaPrimeiroTrimestreA, mediaSegundoTrimestreA, mediaTerceiroTrimestreA, mediaFinalA;

    printf("==========================================\n");
    printf("\tMINI SOFTWARE ESCOLAR\n");
    printf("==========================================\n");

    // Os dados do primeiro aluno

    printf("\n\n*DADOS DO PRIMEIRO ALUNO\n\n");
    printf("\nDigite o nome: ");
    fgets(nomeA, 61, stdin);
    printf("Digite a idade: ");
    scanf("%d", &idadeA);
    printf("Informe o gênero (M/F)?\n");
    scanf(" %c", &generoA);

    // Vamos receber suas notas do
    // primeiro trimestre

    printf("\n\nI - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoPrimeiroTrimestreA);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoPrimeiroTrimestreA);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoPrimeiroTrimestreA);

    // Agora vamos calcular e achar a média

    mediaPrimeiroTrimestreA = (primeiraNotaDoPrimeiroTrimestreA + segundaNotaDoPrimeiroTrimestreA + terceiraNotaDoPrimeiroTrimestreA) / 3;

    printf("A média do primeiro trimestre é: %.2f", mediaPrimeiroTrimestreA);

    // Depois vamos receber suas notas do
    // segundo trimestre

    printf("\n\nII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoSegundoTrimestreA);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoSegundoTrimestreA);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoSegundoTrimestreA);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreA = (primeiraNotaDoSegundoTrimestreA + segundaNotaDoSegundoTrimestreA + terceiraNotaDoSegundoTrimestreA) / 3;

    printf("A média do segundo trimestre é: %.2f", mediaSegundoTrimestreA);

    // E por fim vamos receber suas notas do
    // terceiro trimestre

    printf("\n\nIII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoTerceiroTrimestreA);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoTerceiroTrimestreA);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoTerceiroTrimestreA);

    // Agora vamos calcular e achar a média

    mediaTerceiroTrimestreA = (primeiraNotaDoTerceiroTrimestreA + segundaNotaDoTerceiroTrimestreA + terceiraNotaDoTerceiroTrimestreA) / 3;

    printf("A média do terceiro trimestre é: %.2f", mediaTerceiroTrimestreA);

    // Vamos agora calcular a média final

    printf("\n\nMÉDIA FINAL:\n\n");

    mediaFinalA = (mediaPrimeiroTrimestreA + mediaSegundoTrimestreA + mediaTerceiroTrimestreA) / 3;

    printf("A média final é de: %.f ", mediaFinalA);
    printf("valores.");

    // Agora vamos manipular esses dados
    // para ver o estado do primeiro aluno
    // se o mesmo foi aprovado, reprovado
    // ou a recurso

    printf("\n\nESTADO:\n\n");

    if (generoA == 'M' || generoA == 'F')
    {
        if (mediaFinalA > 10)
        {
            printf("Aprovado");
        }
        else if (mediaFinalA == 9 || mediaFinalA == 10)
        {
            printf("Recurso");
        }
        else
        {
            printf("Reprovado");
        }
    }

    // Vamos fazer o mesmo processo para
    // o segundo aluno

    // Os dados do segundo aluno:
    // Primeiro declara o nome

    char nomeB[61];

    // Depois declara a idade

    int idadeB;

    // E por fim declarar o gênero

    char generoB;

    // Agora vai declarar as três notas do
    // primeiro trimestre

    float primeiraNotaDoPrimeiroTrimestreB, segundaNotaDoPrimeiroTrimestreB, terceiraNotaDoPrimeiroTrimestreB;

    // Depois vai declarar novamente as três
    // notas do segundo trimestre

    float primeiraNotaDoSegundoTrimestreB, segundaNotaDoSegundoTrimestreB, terceiraNotaDoSegundoTrimestreB;

    // E depois vai fazer o mesmo com o
    // terceiro trimestre

    float primeiraNotaDoTerceiroTrimestreB, segundaNotaDoTerceiroTrimestreB, terceiraNotaDoTerceiroTrimestreB;

    // No fim vai declarar variáveis para
    // calcular as médias

    float mediaPrimeiroTrimestreB, mediaSegundoTrimestreB, mediaTerceiroTrimestreB, mediaFinalB;

     // Os dados do segundo aluno

    printf("\n\n\n*DADOS DO SEGUNDO ALUNO\n\n");
    printf("\nDigite o nome: ");
    scanf(" %s", nomeB);
    printf("Digite a idade: ");
    scanf(" %d", &idadeB);
    printf("Informe o gênero (M/F)?\n");
    scanf(" %c", &generoB);

    // Vamos receber suas notas do
    // primeiro trimestre

    printf("\n\nI - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoPrimeiroTrimestreB);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoPrimeiroTrimestreB);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoPrimeiroTrimestreB);

    // Agora vamos calcular e achar a média

    mediaPrimeiroTrimestreB = (primeiraNotaDoPrimeiroTrimestreB + segundaNotaDoPrimeiroTrimestreB + terceiraNotaDoPrimeiroTrimestreB) / 3;

    printf("A média do primeiro trimestre é: %.2f", mediaPrimeiroTrimestreB);

    // Depois vamos receber suas notas do
    // segundo trimestre

    printf("\n\nII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoSegundoTrimestreB);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoSegundoTrimestreB);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoSegundoTrimestreB);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreB = (primeiraNotaDoSegundoTrimestreB + segundaNotaDoSegundoTrimestreB + terceiraNotaDoSegundoTrimestreB) / 3;

    printf("A média do segundo trimestre é: %.2f", mediaSegundoTrimestreB);

    // E por fim vamos receber suas notas do
    // terceiro trimestre

    printf("\n\nIII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoTerceiroTrimestreB);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoTerceiroTrimestreB);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoTerceiroTrimestreB);

    // Agora vamos calcular e achar a média

    mediaTerceiroTrimestreB = (primeiraNotaDoTerceiroTrimestreB + segundaNotaDoTerceiroTrimestreB + terceiraNotaDoTerceiroTrimestreB) / 3;

    printf("A média do terceiro trimestre é: %.2f", mediaTerceiroTrimestreB);

    // Vamos agora calcular a média final

    printf("\n\nMÉDIA FINAL:\n\n");

    mediaFinalB = (mediaPrimeiroTrimestreB + mediaSegundoTrimestreB + mediaTerceiroTrimestreB) / 3;

    printf("A média final é de: %.f ", mediaFinalB);
    printf("valores.");

    // Agora vamos manipular esses dados
    // para ver o estado do primeiro aluno
    // se o mesmo foi aprovado, reprovado
    // ou a recurso

    printf("\n\nESTADO:\n\n");

    if (generoB == 'M' || generoB == 'F')
    {
        if (mediaFinalB > 10)
        {
            printf("Aprovado");
        }
        else if (mediaFinalB == 9 || mediaFinalB == 10)
        {
            printf("Recurso");
        }
        else
        {
            printf("Reprovado");
        }
    }

     // Vamos fazer o mesmo processo para
    // o terceiro aluno

    // Os dados do terceiro aluno:
    // Primeiro declara o nome

    char nomeC[61];

    // Depois declara a idade

    int idadeC;

    // E por fim declarar o gênero

    char generoC;

    // Agora vai declarar as três notas do
    // primeiro trimestre

    float primeiraNotaDoPrimeiroTrimestreC, segundaNotaDoPrimeiroTrimestreC, terceiraNotaDoPrimeiroTrimestreC;

    // Depois vai declarar novamente as três
    // notas do segundo trimestre

    float primeiraNotaDoSegundoTrimestreC, segundaNotaDoSegundoTrimestreC, terceiraNotaDoSegundoTrimestreC;

    // E depois vai fazer o mesmo com o
    // terceiro trimestre

    float primeiraNotaDoTerceiroTrimestreC, segundaNotaDoTerceiroTrimestreC, terceiraNotaDoTerceiroTrimestreC;

    // No fim vai declarar variáveis para
    // calcular as médias

    float mediaPrimeiroTrimestreC, mediaSegundoTrimestreC, mediaTerceiroTrimestreC, mediaFinalC;

    // Os dados do terceiro aluno

    printf("\n\n\n*DADOS DO TERCEIRO ALUNO\n\n");
    printf("\nDigite o nome: ");
    scanf(" %s", nomeC);
    printf("Digite a idade: ");
    scanf(" %d", &idadeC);
    printf("Informe o gênero (M/F)?\n");
    scanf(" %c", &generoC);

    // Vamos receber suas notas do
    // primeiro trimestre

    printf("\n\nI - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoPrimeiroTrimestreC);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoPrimeiroTrimestreC);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoPrimeiroTrimestreC);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreC = (primeiraNotaDoSegundoTrimestreC + segundaNotaDoSegundoTrimestreC + terceiraNotaDoSegundoTrimestreC) / 3;

    printf("A média do primeiro trimestre é: %.2f", mediaPrimeiroTrimestreC);

    // Depois vamos receber suas notas do
    // segundo trimestre

    printf("\n\nII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoSegundoTrimestreC);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoSegundoTrimestreC);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoSegundoTrimestreC);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreC = (primeiraNotaDoSegundoTrimestreC + segundaNotaDoSegundoTrimestreC + terceiraNotaDoSegundoTrimestreC) / 3;

    printf("A média do segundo trimestre é: %.2f", mediaSegundoTrimestreC);

    // E por fim vamos receber suas notas do
    // terceiro trimestre

    printf("\n\nIII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoTerceiroTrimestreC);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoTerceiroTrimestreC);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoTerceiroTrimestreC);

    // Agora vamos calcular e achar a média

    mediaTerceiroTrimestreC = (primeiraNotaDoTerceiroTrimestreC + segundaNotaDoTerceiroTrimestreC + terceiraNotaDoTerceiroTrimestreC) / 3;

    printf("A média do terceiro trimestre é: %.2f", mediaTerceiroTrimestreC);

    // Vamos agora calcular a média final

    printf("\n\nMÉDIA FINAL:\n\n");

    mediaFinalC = (mediaPrimeiroTrimestreC + mediaSegundoTrimestreC + mediaTerceiroTrimestreC) / 3;

    printf("A média final é de: %.f ", mediaFinalC);
    printf("valores.");

    // Agora vamos manipular esses dados
    // para ver o estado do primeiro aluno
    // se o mesmo foi aprovado, reprovado
    // ou a recurso

    printf("\n\nESTADO:\n\n");

    if (generoC == 'M' || generoC == 'F')
    {
        if (mediaFinalC > 10)
        {
            printf("Aprovado");
        }
        else if (mediaFinalC == 9 || mediaFinalC == 10)
        {
            printf("Recurso");
        }
        else
        {
            printf("Reprovado");
        }
    }

    // Vamos fazer o mesmo processo para
    // o quarto aluno

    // Os dados do terceiro aluno:
    // Primeiro declara o nome

    char nomeD[61];

    // Depois declara a idade

    int idadeD;

    // E por fim declarar o gênero

    char generoD;

    // Agora vai declarar as três notas do
    // primeiro trimestre

    float primeiraNotaDoPrimeiroTrimestreD, segundaNotaDoPrimeiroTrimestreD, terceiraNotaDoPrimeiroTrimestreD;

    // Depois vai declarar novamente as três
    // notas do segundo trimestre

    float primeiraNotaDoSegundoTrimestreD, segundaNotaDoSegundoTrimestreD, terceiraNotaDoSegundoTrimestreD;

    // E depois vai fazer o mesmo com o
    // terceiro trimestre

    float primeiraNotaDoTerceiroTrimestreD, segundaNotaDoTerceiroTrimestreD, terceiraNotaDoTerceiroTrimestreD;

     // No fim vai declarar variáveis para
    // calcular as médias

    float mediaPrimeiroTrimestreD, mediaSegundoTrimestreD, mediaTerceiroTrimestreD, mediaFinalD;

    // Os dados do terceiro aluno

    printf("\n\n\n*DADOS DO QUARTO ALUNO\n\n");
    printf("\nDigite o nome: ");
    scanf(" %s", nomeD);
    printf("Digite a idade: ");
    scanf(" %d", &idadeD);
    printf("Informe o gênero (M/F)?\n");
    scanf(" %c", &generoD);

    // Vamos receber suas notas do
    // primeiro trimestre

    printf("\n\nI - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoPrimeiroTrimestreD);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoPrimeiroTrimestreD);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoPrimeiroTrimestreD);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreD = (primeiraNotaDoSegundoTrimestreD + segundaNotaDoSegundoTrimestreD + terceiraNotaDoSegundoTrimestreD) / 3;

    printf("A média do primeiro trimestre é: %.2f", mediaPrimeiroTrimestreD);

    // Depois vamos receber suas notas do
    // segundo trimestre

    printf("\n\nII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoSegundoTrimestreD);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoSegundoTrimestreD);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoSegundoTrimestreD);

    // Agora vamos calcular e achar a média

    mediaSegundoTrimestreD = (primeiraNotaDoSegundoTrimestreD + segundaNotaDoSegundoTrimestreD + terceiraNotaDoSegundoTrimestreD) / 3;

    printf("A média do segundo trimestre é: %.2f", mediaSegundoTrimestreD);

    // E por fim vamos receber suas notas do
    // terceiro trimestre

    printf("\n\nIII - TRIMESTRE\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNotaDoTerceiroTrimestreD);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNotaDoTerceiroTrimestreD);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNotaDoTerceiroTrimestreD);

    // Agora vamos calcular e achar a média

    mediaTerceiroTrimestreD = (primeiraNotaDoTerceiroTrimestreD + segundaNotaDoTerceiroTrimestreD + terceiraNotaDoTerceiroTrimestreD) / 3;

    printf("A média do terceiro trimestre é: %.2f", mediaTerceiroTrimestreD);

    // Vamos agora calcular a média final

    printf("\n\nMÉDIA FINAL:\n\n");

    mediaFinalD = (mediaPrimeiroTrimestreD + mediaSegundoTrimestreD + mediaTerceiroTrimestreD) / 3;

    printf("A média final é de: %.f ", mediaFinalD);
    printf("valores.");

    // Agora vamos manipular esses dados
    // para ver o estado do primeiro aluno
    // se o mesmo foi aprovado, reprovado
    // ou a recurso

    printf("\n\nESTADO:\n\n");

    if (generoD == 'M' || generoD == 'F')
    {
        if (mediaFinalD > 10)
        {
            printf("Aprovado");
        }
        else if (mediaFinalD == 9 || mediaFinalD == 10)
        {
            printf("Recurso");
        }
        else
         {
            printf("Reprovado");
        }
    }

    // Agora vamos manipular as médias dos 4 alunos comparando-as a fim de definir o 1°, 2°, 3° e o último

    printf("\n\n\n*RESULTADOS\n\n");

    if ((mediaFinalA > mediaFinalB) && (mediaFinalA > mediaFinalC) && (mediaFinalA > mediaFinalD))
    {
        printf("• O 1° da turma é %s ", nomeA);
        printf("que saiu com %.f ", mediaFinalA);
        printf("valores.");

        if ((mediaFinalA > mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalB > mediaFinalD))
        {
            printf("\n\n• O 2° da turma é %s ", nomeB);
            printf("que saiu com %.f ", mediaFinalB);
            printf("valores.");

            if ((mediaFinalA > mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalC > mediaFinalD) && (mediaFinalC < mediaFinalA))
            {
                printf("\n\n• O 3° da turma é %s ", nomeC);
                printf("que saiu com %.f ", mediaFinalC);
                printf("valores.");

                if ((mediaFinalA > mediaFinalD) && (mediaFinalB > mediaFinalD) && (mediaFinalC > mediaFinalD))
                {
                    printf("\n\n• O último da turma é %s ", nomeD);
                    printf("que saiu com %.f ", mediaFinalD);
                    printf("valores.");
                }
            }
        }
    }

      else if ((mediaFinalA < mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalB > mediaFinalD))
    {
        printf("• O 1° da turma é %s ", nomeB);
        printf("que saiu com %.f ", mediaFinalB);
        printf("valores.");

        if ((mediaFinalA < mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalC > mediaFinalD) && (mediaFinalC > mediaFinalA))
        {
            printf("\n\n• O 2° da turma é %s ", nomeC);
            printf("que saiu com %.f ", mediaFinalC);
            printf("valores.");

            if ((mediaFinalA < mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalC > mediaFinalD) && (mediaFinalA < mediaFinalD) && (mediaFinalD < mediaFinalB))
            {
                printf("\n\n• O 3° da turma é %s ", nomeD);
                printf("que saiu com %.f ", mediaFinalD);
                printf("valores.");

                if ((mediaFinalA < mediaFinalD) && (mediaFinalB > mediaFinalA) && (mediaFinalC > mediaFinalA))
                {
                    printf("\n\n• O último da turma é %s ", nomeA);
                    printf("que saiu com %.f ", mediaFinalA);
                    printf("valores.");
                }
            }
        }
    }

    else if ((mediaFinalC > mediaFinalA) && (mediaFinalB < mediaFinalC) && (mediaFinalC > mediaFinalD))
    {
        printf("• O 1° da turma é %s ", nomeC);
        printf("que saiu com %.f ", mediaFinalC);
        printf("valores.");

        if ((mediaFinalC > mediaFinalA) && (mediaFinalA > mediaFinalB) && (mediaFinalA > mediaFinalD))
        {
            printf("\n\n• O 2° da turma é %s ", nomeA);
            printf("que saiu com %.f ", mediaFinalA);
            printf("valores.");

            if ((mediaFinalC > mediaFinalA) && (mediaFinalA > mediaFinalD) && (mediaFinalD > mediaFinalB) && (mediaFinalD < mediaFinalC))
            {
                printf("\n\n• O 3° da turma é %s ", nomeD);
                printf("que saiu com %.f ", mediaFinalD);
                printf("valores.");

                if ((mediaFinalA > mediaFinalB) && (mediaFinalB < mediaFinalD) && (mediaFinalC > mediaFinalB))
                {
                    printf("\n\n• O último da turma é %s ", nomeB);
                    printf("que saiu com %.f ", mediaFinalB);
                    printf("valores.");
                }
            }
        }
    }

     else if ((mediaFinalD > mediaFinalA) && (mediaFinalD > mediaFinalB) && (mediaFinalD > mediaFinalC))
    {
        printf("• O 1° da turma é %s ", nomeD);
        printf("que saiu com %.f ", mediaFinalD);
        printf("valores.");

        if ((mediaFinalA < mediaFinalB) && (mediaFinalB > mediaFinalC) && (mediaFinalB < mediaFinalD))
        {
            printf("\n\n• O 2° da turma é %s ", nomeB);
            printf("que saiu com %.f ", mediaFinalB);
            printf("valores.");

            if ((mediaFinalA < mediaFinalB) && (mediaFinalA > mediaFinalC) && (mediaFinalA < mediaFinalD))
            {
                printf("\n\n• O 3° da turma é %s ", nomeA);
                printf("que saiu com %.f ", mediaFinalA);
                printf("valores.");

                if ((mediaFinalC < mediaFinalA) && (mediaFinalC < mediaFinalB) && (mediaFinalC < mediaFinalD))
                {
                    printf("\n\n• O último da turma é %s ", nomeC);
                    printf("que saiu com %.f ", mediaFinalC);
                    printf("valores.");
                }
            }
        }
    }

    printf("\n");
    return 0;
}