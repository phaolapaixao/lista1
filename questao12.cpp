/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.*/

#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "Portuguese_Brazil");

float salario, salarioFuncionario, calculo;

salario = 1500;

printf("Qual é o valor do seu salário:  \n");
scanf("%f",&salarioFuncionario);

calculo = salarioFuncionario / salario;


printf("Considerando o salário  mínimo como 1500, você recebe: %.2f salarios mínimos", calculo);
	
	
	return 0;
}
