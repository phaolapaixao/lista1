#include <stdio.h>
#include <locale.h>
/* 1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, subtracao;
  
    printf("Digete o primeiro número: \n");
    scanf("%d", &num1);
    
    printf("Digite o segundo número:  \n");
    scanf("%d", &num2);

    subtracao = num1 - num2;
  
    printf( "A subtração entre o primeiro e segundo número é: %d \n", subtracao);
    
  return 0;
  
  
  }
