#include <stdio.h>
#include <locale.h>
/* 1. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, num3, multiplicacao;
  
    printf("Digete o primeiro número: \n");
    scanf("%d", &num1);
   
    printf("Digite o segundo número:  \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    multiplicacao = num1 *  num2 * num3;
  
    printf( "A multiplicação entre o primeiro, segundo e terceiro número é: %d \n", multiplicacao);
    
  return 0;
  
  
  }
