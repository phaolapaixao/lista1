# include <stdio.h>
#include <locale.h>

/* 15. Jo�o recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar
multa de 2% sobre cada conta. Fa�a um programa que calcule e mostre quanto restar� do sal�rio de
Jo�o.*/



int main () {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float salario, conta1, conta2, calculadora;
	
	printf("Digite o valor do seu s�lario: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor da primeira conta: \n");
	scanf("%f", &conta1);
	
	printf("Digite o valor da segunda conta: \n");
	scanf("%f", &conta2);
	
	calculadora = salario - (conta1 + conta2);
	
	printf("Do seu s�lario restarar apenas: R$ %.2f \n", calculadora);
	
return 0;

}
