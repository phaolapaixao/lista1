#include <stdio.h>
#include <locale.h>
/* Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.*/

 int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  salario, calculadora, extra;
  salario= 1500;
  
    printf("O s�lario de um funcionario X � de: %d R$ \n ",salario);


     extra = (salario * 4/ 100);
	 calculadora = salario + extra;  
   
    printf("Com a comiss�o de 4 porcento ficou: %d R$ ",calculadora);
    
  return 0;
}
  
