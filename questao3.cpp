#include <stdio.h>
#include <locale.h>
/* Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  num1, num2, divisao;
  
    printf("Digete o primeiro número: \n");
    scanf("%d", &num1);
   
    printf("Digite o segundo número:  \n");
    scanf("%d", &num2);


    divisao = num1 / num2;
  
    printf( "A divisão entre o primeiro e segundo número é: %d \n", divisao);
    
  return 0;
  
  
  }
