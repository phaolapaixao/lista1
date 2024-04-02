#include <stdio.h>
#include <locale.h>
#include <math.h>

/* 16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipo-
tenusa.*/

int main () {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float catetoad, catetopos, hipotenusa;
	
	
	printf("Digite o valor do cateto adjacente: \n");
	scanf("%f", &catetoad);
	
	
	printf("Digite o valor do cateto oposto: \n");
	scanf("%f", &catetopos);
	
	hipotenusa =  sqrt(pow(catetopos,2) + pow(catetoad, 2));
	
	printf("O valor da hiotenusa é igual a: %.2f \n",hipotenusa);
	
	
	
	
	
	return 0;
	
	
}

