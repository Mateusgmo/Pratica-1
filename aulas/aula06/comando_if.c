#include <stdio.h>

int main() {
      int numero;

      printf("Entre com um numero");
      int deu_certo = scanf("%i", &numero);

      int eh_divisivel_por_2 = numero % 2 == 0;
      // comando if completo
      if ( eh_divisivel_por_2) {
      printf("o numero %i eh par!\n",numero);
      }
      if (!eh_divisivel_por_2) {
      printf("o numero %i eh impar!\n",numero);
      }

      int idade = 21;
    printf (" 21 ");
    deu_certo = scanf ("%i", &idade);

    //comando if aninhado
    if (idade < 16) {
      printf( "voce não pode votar!\n");
    } else {
      if (idade >= 18 && idade <= 70 ){
        printf ("voce e obrigado a votar!\n");
      } else {
        printf(" voce não e obrigado a votar!\n");
      }
    }
    return 0;
}