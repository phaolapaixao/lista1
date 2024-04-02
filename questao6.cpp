#include <stdio.h>
#include <locale.h>
/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.*/

 int main () {

  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int  salario, calculadora, extra;
  salario= 1500;
  
    printf("O sálario de um funcionario X é de: %d R$ \n ",salario);


     extra = (salario * 4/ 100);
	 calculadora = salario + extra;  
   
    printf("Com a comissão de 4 porcento ficou: %d R$ ",calculadora);
    
  return 0;
}
  
