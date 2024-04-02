#include <stdio.h>
#include <locale.h>
/* Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%..*/
  int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  preco, calculadora, desconto;
  
    printf("Digite o preço do produto: \n");
    scanf("%d", &preco);


     calculadora= (preco * 10/ 100);
	 desconto = preco - calculadora;  
  
    printf("O valor era: %d R$ \n", preco);
    printf("Com o desconto de 10 porcento o valor atual é de: %d R$ ", desconto);
    
  return 0;
  
  
  
  
  
  }
