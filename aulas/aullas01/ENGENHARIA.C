#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_PARTICIPANTES 100  // Limite máximo de participantes

// Estrutura para armazenar o nome e a pontuação de cada participante
typedef struct {
    char nome[50];
    int pontuacao;
} Participante;

int main() {
    setlocale(LC_ALL, "");
    
    // Definindo perguntas e respostas do quiz sobre engenharia civil
    char perguntas[10][256] = {
        "1. Qual é a unidade padrão de força no SI?\n a) Joule\n b) Newton\n c) Pascal\n d) Kilograma",
        "2. Qual destes materiais é mais comumente usado em fundações de prédios?\n a) Aço\n b) Madeira\n c) Concreto\n d) Vidro",
        "3. Qual a função principal das vigas em uma estrutura?\n a) Suporte das paredes\n b) Conectar colunas\n c) Distribuir cargas\n d) Reduzir a tensão",
        "4. Qual destes testes é usado para determinar a resistência de concreto?\n a) Teste de esclerometria\n b) Teste de impacto\n c) Teste de tração\n d) Teste de compressão",
        "5. Qual é o principal agente responsável pela corrosão do aço em estruturas?\n a) Oxigênio\n b) Água\n c) Cloro\n d) Enxofre",
        "6. O que é fator de forma nas juntas de dilatação?\n a) Proporção entre largura e profundidade\n b) Tipo de material usado\n c) Tempo de cura\n d) Espessura da manta",
        "7. Qual é o principal objetivo do uso de impermeabilização em lajes?\n a) Evitar perda de calor\n b) Prevenir infiltração de água\n c) Reduzir peso\n d) Melhorar estética",
        "8. O que é resistência característica do concreto?\n a) Maior resistência registrada\n b) Média de todas as resistências\n c) Valor para 95% de confiança\n d) Resistência após 1 semana",
        "9. Qual destes é um método de sondagem em solos?\n a) SPT\n b) Esclerometria\n c) Ultrassom\n d) Schmidt",
        "10. O que indica uma fissura coesiva em argamassa?\n a) Falha na superfície\n b) Quebra do substrato\n c) Problema de adesão\n d) Carga inadequada"
    };
    
    char respostas[10] = {'b', 'c', 'c', 'd', 'c', 'a', 'b', 'c', 'a', 'a'};
    
    Participante ranking[MAX_PARTICIPANTES];  // Array para armazenar o ranking
    int totalParticipantes = 0;               // Contador de participantes no ranking

    char escolha;
    int pontos = 0;
    char nome[50];

    // Loop principal do menu
    while (1) {
        printf("\nMenu Principal:\n");
        printf("1. Iniciar Quiz\n");
        printf("2. Exibir Ranking\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &escolha);

        // Validação da entrada do menu
        if (escolha < '1' || escolha > '3') {
            printf("Opcao invalida! Escolha entre 1 e 3.\n");
            continue;
        }
        
        if (escolha == '1') {
            // Obtendo o nome do participante
            printf("Digite seu nome: ");
            scanf(" %49[^\n]", nome);

            // Iniciando o quiz
            pontos = 0;  // Redefine a pontuação antes de cada novo quiz
            char resposta;

            for (int i = 0; i < 10; i++) {
                printf("\n%s\n", perguntas[i]);
                printf("Digite a letra da sua resposta: ");
                scanf(" %c", &resposta);

                // Validação da entrada da resposta
                if (resposta < 'a' || resposta > 'd') {
                    printf("Resposta invalida! Tente novamente com a, b, c, ou d.\n");
                    i--; // Permite que o usuário tente novamente a mesma pergunta
                    continue;
                }

                if (resposta == respostas[i]) {
                    printf("Correto!\n");
                    pontos++;
                } else {
                    printf("Incorreto. A resposta correta era: %c\n", respostas[i]);
                }
            }
            
            // Armazenando o nome e a pontuação do participante no ranking
            strcpy(ranking[totalParticipantes].nome, nome);
            ranking[totalParticipantes].pontuacao = pontos;
            totalParticipantes++;

            printf("\nQuiz concluído! Você acertou %d de 10 perguntas!\n", pontos);

        } else if (escolha == '2') {
            // Exibindo o ranking
            printf("\nRanking dos Participantes:\n");
            
            // Ordenando o ranking por pontuação em ordem decrescente
            for (int i = 0; i < totalParticipantes - 1; i++) {
                for (int j = i + 1; j < totalParticipantes; j++) {
                    if (ranking[j].pontuacao > ranking[i].pontuacao) {
                        Participante temp = ranking[i];
                        ranking[i] = ranking[j];
                        ranking[j] = temp;
                    }
                }
            }

            // Imprimindo o ranking ordenado
            for (int i = 0; i < totalParticipantes; i++) {
                printf("%d. %s - %d pontos\n", i + 1, ranking[i].nome, ranking[i].pontuacao);
            }
        } else if (escolha == '3') {
            // Sair do programa
            printf("Saindo do programa.\n");
            break;
        }
    }

    return 0;
}