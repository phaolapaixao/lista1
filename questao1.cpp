#include <stdio.h>
#include <locale.h>
/* 1. Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, subtracao;
  
    printf("Digete o primeiro n�mero: \n");
    scanf("%d", &num1);
    
    printf("Digite o segundo n�mero:  \n");
    scanf("%d", &num2);

    subtracao = num1 - num2;
  
    printf( "A subtra��o entre o primeiro e segundo n�mero �: %d \n", subtracao);
    
  return 0;
  
  
  }
