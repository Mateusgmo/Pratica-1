#include <stdio.h>

int main(){
    int nota = 0;

    printf("Entre com a nota do motorista:");
    int deu_certo = scanf("%i", &nota);

    if (nota == 1){
        printf("Ganhou 1 estrela!\n");
    } else if (nota == 2) {
        printf ("Ganhou 2 estralas!n");
    } else if (nota == 3) {
        printf ("Ganhou 3 estralas!n");
    } else if (nota == 4) {
        printf ("Ganhou 4 estralas!n");
    } else if (nota == 5) {
       printf ("Ganhou 5 estralas!n");
    } else {
        printf("Nota invalida!\n");
    }
         int main() {
    int numero;

    printf("Entre com um numero: ");
    int deu_certo = scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;

    // comando if completo
    if (eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }

    int idade = 0;
    printf("Entre com a sua idade: ");
    deu_certo = scanf("%i", &idade);

    // comando if aninhado
    if (idade < 16) {
        printf("Você não pode votar!\n");
    } else {
        if (idade >= 18 && idade <= 70) {
            printf("Você é obrigado a votar!\n");
        } else {
            printf("Você não é obrigado a votar!\n");
        }
    }

    float media = 0.0f;
    printf("Entre com a sua media final: ");
    deu_certo = scanf("%f", &media);

    // if encadeado
    if (media >= 9.0f && media <= 10.0f) {
        printf("Sua mencao eh SS\n");
    } else if (media >= 7.0f && media <= 8.9f) {
        printf("Sua mencao eh MS\n");
    } else if (media >= 5.0f && media <= 6.9f) {
        printf("Sua mencao eh MM\n");
    } else if (media >= 3.0f && media <= 4.9f) {
        printf("Sua mencao eh MI\n");
    } else if (media >= 0.1f && media <= 2.9f) {
        printf("Sua mencao eh II\n");
    } else {
        printf("Sua mencao eh SR\n");
    }

int main() {
    int nota = 0;

    printf("Entre com a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);

    // if (nota == 1) {
    //     printf("Ganhou 1 estrela!\n");
    // } else if (nota == 2) {
    //     printf("Ganhou 2 estrelas!\n");
    // } else if (nota == 3) {
    //     printf("Ganhou 3 estrelas!\n");
    // } else if (nota == 4) {
    //     printf("Ganhou 4 estrelas!\n");
    // } else if (nota == 5) {
    //     printf("Ganhou 5 estrelas!\n");
    // } else {
    //     printf("Nota invalida!\n");
    // }

    switch(nota) {
        case 1: printf("Ganhou 1 estrela!\n");
        case 2: printf("Ganhou 2 estrelas!\n");
        case 3: printf("Ganhou 3 estrelas!\n");
        case 4: printf("Ganhou 4 estrelas!\n");
        case 5: printf("Ganhou 5 estrelas!\n");
        default: printf("Nota invalida!\n");
    }
    

    return 0;
}
         
