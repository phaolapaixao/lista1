#include <stdio.h>
#include <locale.h>
/* Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
derando peso 2 para a primeira e peso 3 para a segunda.*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  nota1, nota2, calculadora;
  
    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);
   
    printf("Digite a segunda nota:  \n");
    scanf("%d", &nota2);


     calculadora= ((nota1 * 2) + (nota2 * 3)) / 5; 
  
    printf( "sua média é: %d \n", calculadora);
    
  return 0;
  
  
  }
