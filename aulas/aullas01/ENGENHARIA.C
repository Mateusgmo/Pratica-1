#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    // Definindo perguntas e respostas do quiz sobre engenharia civil
    char perguntas[10][256] = {
        "1. Qual � a unidade padr�o de for�a no SI?\n a) Joule\n b) Newton\n c) Pascal\n d) Kilograma",
        "2. Qual destes materiais � mais comumente usado em funda��es de pr�dios?\n a) A�o\n b) Madeira\n c) Concreto\n d) Vidro",
        "3. Qual a fun��o principal das vigas em uma estrutura?\n a) Suporte das paredes\n b) Conectar colunas\n c) Distribuir cargas\n d) Reduzir a tens�o",
        "4. Qual destes testes � usado para determinar a resist�ncia de concreto?\n a) Teste de esclerometria\n b) Teste de impacto\n c) Teste de tra��o\n d) Teste de compress�o",
        "5. Qual � o principal agente respons�vel pela corros�o do a�o em estruturas?\n a) Oxig�nio\n b) �gua\n c) Cloro\n d) Enxofre",
        "6. O que � fator de forma nas juntas de dilata��o?\n a) Propor��o entre largura e profundidade\n b) Tipo de material usado\n c) Tempo de cura\n d) Espessura da manta",
        "7. Qual � o principal objetivo do uso de impermeabiliza��o em lajes?\n a) Evitar perda de calor\n b) Prevenir infiltra��o de �gua\n c) Reduzir peso\n d) Melhorar est�tica",
        "8. O que � resist�ncia caracter�stica do concreto?\n a) Maior resist�ncia registrada\n b) M�dia de todas as resist�ncias\n c) Valor para 95% de confian�a\n d) Resist�ncia ap�s 1 semana",
        "9. Qual destes � um m�todo de sondagem em solos?\n a) SPT\n b) Esclerometria\n c) Ultrassom\n d) Schmidt",
        "10. O que indica uma fissura coesiva em argamassa?\n a) Falha na superf�cie\n b) Quebra do substrato\n c) Problema de ades�o\n d) Carga inadequada"
    };

    char respostas[10] = {'b', 'c', 'c', 'd', 'c', 'a', 'b', 'c', 'a', 'a'};
    char escolha;
    int pontos = 0;

    // Loop principal do menu
    while (1) {
        printf("\nMenu Principal:\n");
        printf("1. Iniciar Quiz\n");
        printf("2. Exibir Resultado\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &escolha);

        // Valida��o da entrada do menu
        if (escolha < '1' || escolha > '3') {
            printf("Opcao invalida! Escolha entre 1 e 3.\n");
            continue;
        }

        if (escolha == '1') {
            // Iniciando o quiz
            pontos = 0;  // Redefine a pontua��o antes de cada novo quiz
            char resposta;

            for (int i = 0; i < 10; i++) {
                printf("\n%s\n", perguntas[i]);
                printf("Digite a letra da sua resposta: ");
                scanf(" %c", &resposta);

                // Valida��o da entrada da resposta
                if (resposta < 'a' || resposta > 'd') {
                    printf("Resposta invalida! Tente novamente com a, b, c, ou d.\n");
                    i--; // Permite que o usu�rio tente novamente a mesma pergunta
                    continue;
                }

                if (resposta == respostas[i]) {
                    printf("Correto!\n");
                    pontos++;
                } else {
                    printf("Incorreto. A resposta correta era: %c\n", respostas[i]);
                }
            }
            printf("\nQuiz conclu�do!\n");

        } else if (escolha == '2') {
            // Exibindo o resultado final
            printf("\nVoc� acertou %d de 10 perguntas!\n", pontos);
            pontos = 0;  // Redefine a pontua��o ap�s exibir o resultado
        } else if (escolha == '3') {
            // Sair do programa
            printf("Saindo do programa.\n");
            break;
        }
    }

    return 0;
}