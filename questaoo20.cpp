#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
sua ponta.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a, D, hipotenusa; // angulo, distancia
	
	printf("Digite a medida do ângulo formado por uma escada apoiada no chão: \n ");
	scanf("%f", &a);
	
		
	printf("Digite a distanância que a escada está da parede: \n ");
	scanf("%f", &D);
	
	a = a * M_PI / 180;
	hipotenusa = D / (cos(a));
	
	printf("A medida da escada para que possa alcançar a sua ponta é de: \n %.2f ", hipotenusa);
	
	return 0;	
	
}
