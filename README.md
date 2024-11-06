# GuessIt: Jogo de Adivinhação com Números 
![GitHub repo size](https://img.shields.io/github/repo-size/RodrigoFrangel/safe-pass?style=for-the-badge)
![GitHub language count](https://img.shields.io/github/languages/count/RodrigoFrangel/safe-pass?style=for-the-badge)

<img src="guessit_logo.png" alt="Banner do repositório">

> Bem-vindo ao GuessIt, um jogo divertido e desafiador onde o objetivo é adivinhar o número secreto gerado pelo bot. Cada rodada oferece uma oportunidade de testar seus conhecimentos e habilidades em adivinhação! 🧠💡

## ✏️ Descrição
**GuessIt** é um jogo de adivinhação desenvolvido em linguagem C como parte da matéria de **Programação Estruturada** do curso de **Análise e Desenvolvimento de Sistemas**. Neste jogo, o jogador compete contra o bot para adivinhar um número secreto escolhido aleatoriamente dentro de um intervalo. O jogo oferece diferentes níveis de dificuldade, além da opção de personalizar o intervalo de números e o número de tentativas.


## 🎲 Como Jogar:
- **Escolha de Dificuldade**: Escolha entre os níveis de dificuldade:
  - **Fácil**: Intervalo de 1 a 10, 5 tentativas.
  - **Médio**: Intervalo de 1 a 50, 5 tentativas.
  - **Difícil**: Intervalo de 1 a 100, 5 tentativas.
- **Tentativas**: O jogador tem um número limitado de tentativas para adivinhar o número secreto.
- **Placar**: O placar é atualizado a cada rodada, com o bot ganhando um ponto caso o jogador não acerte o número secreto.
- **Rodadas**: São jogadas 3 rodadas por vez, com o objetivo de acumular pontos.

## 👨‍💻 Exemplo de Execução
```bash
==========================
Bem-vindo ao GuessIt! 🎲🎉
==========================
Tente adivinhar o número secreto gerado pelo bot.

Escolha a dificuldade:
1. Fácil
2. Médio
3. Difícil
4. Personalizado
Escolha: 2

--- Rodada 1 ---
Escolha um número entre 1 e 50: 25
Você errou! O número secreto é maior.

Escolha um número entre 1 e 50: 40

VOCÊ ACERTOU!
Número do bot: 40

--- Rodada 2 ---
Escolha um número entre 1 e 50: 10
Você errou! O número secreto é menor.

Escolha um número entre 1 e 50: 5
Você errou! O número secreto é maior.

--- Rodada 3 ---
Escolha um número entre 1 e 50: 35
Você errou! O número secreto é maior.

--- Placar ---
Jogador: 1 | Bot: 2
Quer jogar novamente? (0 = Não; 1 = Sim): 1
```

## 🤓 Colaboradores
Este projeto foi desenvolvido por:
- [Rodrigo Frangel](https://github.com/RodrigoFrangel)
- [Rafael Dourado](https://github.com/Douradorf)
- [Yuri de Oliveira](https://github.com/YuriOliiv)


## 🤝 Contribuições
Sinta-se à vontade para contribuir para o projeto! Caso tenha sugestões ou melhorias, abra uma *issue* ou envie um ***pull request***.
