#include <stdio.h>
#include <locale.h>
/* 1. Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, num3, multiplicacao;
  
    printf("Digete o primeiro n�mero: \n");
    scanf("%d", &num1);
   
    printf("Digite o segundo n�mero:  \n");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: \n");
    scanf("%d", &num3);

    multiplicacao = num1 *  num2 * num3;
  
    printf( "A multiplica��o entre o primeiro, segundo e terceiro n�mero �: %d \n", multiplicacao);
    
  return 0;
  
  
  }
