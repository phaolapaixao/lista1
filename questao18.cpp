#include <stdio.h>
#include <locale.h>

/* Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180*(C + 32)/100.*/

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float  C, F;
	
	printf("Digite o valor da temperatura em °C: \n");
	scanf("%f", &C);
	
/*	F = 180*(C + 32)/100; */

	F = C * 1.8 + 32;
	
	printf("O valor convertido para Fahrenhait é; %.2f \n",F);
	
	return 0;
}
