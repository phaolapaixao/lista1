#include <stdio.h>
#include <locale.h>
/* Fa�a um programa que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo
segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto, n�o � necess�rio se preocupar
com valida��es.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, divisao;
  
    printf("Digete o primeiro n�mero: \n");
    scanf("%d", &num1);
   
    printf("Digite o segundo n�mero:  \n");
    scanf("%d", &num2);


    divisao = num1 / num2;
  
    printf( "A divis�o entre o primeiro e segundo n�mero �: %d \n", divisao);
    
  return 0;
  
  
  }
