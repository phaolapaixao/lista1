#include <stdio.h>
#include <locale.h>
/* Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%..*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  preco, calculadora, desconto;
  
    printf("Digite o pre�o do produto: \n");
    scanf("%d", &preco);


     calculadora= (preco * 10/ 100);
	 desconto = preco - calculadora;  
  
    printf("O valor era: %d R$ \n", preco);
    printf("Com o desconto de 10 porcento o valor atual � de: %d R$ ", desconto);
    
  return 0;
  
  
  
  
  
  }
