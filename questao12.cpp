/*Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule
e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha.*/

#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "Portuguese_Brazil");

float salario, salarioFuncionario, calculo;

salario = 1500;

printf("Qual � o valor do seu sal�rio:  \n");
scanf("%f",&salarioFuncionario);

calculo = salarioFuncionario / salario;


printf("Considerando o sal�rio  m�nimo como 1500, voc� recebe: %.2f salarios m�nimos", calculo);
	
	
	return 0;
}
