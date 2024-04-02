# include <stdio.h>
#include <locale.h>

/* 15. João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João.*/



int main () {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float salario, conta1, conta2, calculadora;
	
	printf("Digite o valor do seu sálario: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor da primeira conta: \n");
	scanf("%f", &conta1);
	
	printf("Digite o valor da segunda conta: \n");
	scanf("%f", &conta2);
	
	calculadora = salario - (conta1 + conta2);
	
	printf("Do seu sálario restarar apenas: R$ %.2f \n", calculadora);
	
return 0;

}
