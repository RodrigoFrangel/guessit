#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

// FUNÇÕES AUXILIARES
// Exibe a mensagem de boas-vindas ao jogador
void exibirMensagemBoasVindas()
{
    printf("==========================\n");
    printf("Bem-vindo ao GuessIt! 🎲🎉\n");
    printf("==========================\n");
    printf("Tente adivinhar o número secreto gerado pelo bot.\n\n");
}

// Configura a dificuldade do jogo com base na escolha do jogador
void configurarDificuldade(int *intervaloMin, int *intervaloMax, int *tentativas)
{
    int escolha;
    printf("Escolha a dificuldade:\n1. Fácil\n2. Médio\n3. Difícil\n4. Personalizado\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        *intervaloMin = 1;
        *intervaloMax = 10;
        *tentativas = 5;
        break;
    case 2:
        *intervaloMin = 1;
        *intervaloMax = 50;
        *tentativas = 5;
        break;
    case 3:
        *intervaloMin = 1;
        *intervaloMax = 100;
        *tentativas = 5;
        break;
    case 4:
        printf("\nEscolha o valor inicial do intervalo de números: ");
        scanf("%d", intervaloMin);
        do
        {
            printf("Escolha o valor final do intervalo de números: ");
            scanf("%d", intervaloMax);
            if (*intervaloMin >= *intervaloMax)
            {
                printf("O valor final deve ser maior que o inicial. Tente novamente.\n");
            }
        } while (*intervaloMin >= *intervaloMax);
        do
        {
            printf("Escolha o número de tentativas (maior que 0): ");
            scanf("%d", tentativas);
            if (*tentativas <= 0)
            {
                printf("O número de tentativas deve ser maior que 0. Tente novamente.\n");
            }
        } while (*tentativas <= 0);
        break;
    default:
        printf("Escolha inválida! Configurando para Fácil.\n");
        *intervaloMin = 1;
        *intervaloMax = 10;
        *tentativas = 5;
    }
}

// Realiza as tentativas do jogador para adivinhar o número do bot
bool realizarTentativas(int intervaloMin, int intervaloMax, int tentativas, int *pontuacaoJogador)
{
    int numeroBot, palpite;
    bool acertou = false;

    numeroBot = intervaloMin + rand() % (intervaloMax - intervaloMin + 1); // Número do bot gerado

    for (int i = 0; i < tentativas; i++)
    {
        printf("Escolha um número entre %d e %d: ", intervaloMin, intervaloMax);
        scanf("%d", &palpite);

        if (palpite > numeroBot)
        {
            printf("Você errou! O número secreto é menor.\n");
        }
        else if (palpite < numeroBot)
        {
            printf("Você errou! O número secreto é maior.\n");
        }
        else
        {
            printf("\nVOCÊ ACERTOU!");
            printf("\nNúmero do bot: %d\n", numeroBot);
            *pontuacaoJogador += 1;
            acertou = true;
            break;
        }
    }

    if (!acertou)
    {
        printf("\nVOCÊ PERDEU! :(");
        printf("\nO número do bot era: %d\n", numeroBot);
    }

    return acertou;
}

// Exibe o placar atual entre o jogador e o bot
void exibirPlacar(int pontuacaoJogador, int pontuacaoBot)
{
    printf("\n--- Placar ---\n");
    printf("Jogador: %d | Bot: %d\n", pontuacaoJogador, pontuacaoBot);
}

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int pontuacaoJogador = 0, pontuacaoBot = 0, repetirJogo = 1;
    int intervaloMin, intervaloMax, tentativas;

    srand(time(NULL));

    exibirMensagemBoasVindas();

    while (repetirJogo == 1)
    {
        configurarDificuldade(&intervaloMin, &intervaloMax, &tentativas);

        // Três rodadas de jogo por vez
        for (int rodada = 0; rodada < 3; rodada++)
        {
            printf("\n--- Rodada %d ---\n", rodada + 1);

            // O bot marca um ponto se o jogador não acertar
            if (!realizarTentativas(intervaloMin, intervaloMax, tentativas, &pontuacaoJogador))
            {
                pontuacaoBot++;
            }
        }

        exibirPlacar(pontuacaoJogador, pontuacaoBot);

        printf("Quer jogar novamente? (0 = Não; 1 = Sim): ");
        scanf("%d", &repetirJogo);

        pontuacaoJogador = 0;
        pontuacaoBot = 0;
    }

    printf("\nObrigado por jogar GuessIt! Até a próxima! 😁\n");
    return 0;
}
