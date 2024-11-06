/*
Construa um programa que calcule a soma de dois numeros inteiros
*/
#include <stdio.h>

int main() {   
  int a, b, soma;  
  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d e %d é %d\n", a, b, soma);
  printf("seno de 0 eh %f\n", sin(0));
  return 0;