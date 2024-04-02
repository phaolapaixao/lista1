#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
b) a área de uma esfera; sabe-se que A = p R2
;
c) o volume de uma esfera; sabe-se que V = 3/4 * p R3 */

int main () {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float c, p, R, A, v;
	
	p = 3.14;
	
	printf("Qual é o raio? \n");
	scanf("%f", &R);
	
	c = 2 * p * R;
	
	printf("O  comprimento da esfera é: %.2f \n",c);
	
	A = p * pow(R,2);
	 
	printf("A área da esfera é: %.2f \n",A);
	
	v = (3/4)* p * pow(R,3);
	
	printf("O volume da esfera é: %.2f \n",v);
	
	return 0;
}



