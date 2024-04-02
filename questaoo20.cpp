#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Fa�a um programa que receba a medida do �ngulo formado por uma escada apoiada no ch�o e a dis-
t�ncia em que a escada est� da parede, calcule e mostre a medida da escada para que se possa alcan�ar
sua ponta.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a, D, hipotenusa; // angulo, distancia
	
	printf("Digite a medida do �ngulo formado por uma escada apoiada no ch�o: \n ");
	scanf("%f", &a);
	
		
	printf("Digite a distan�ncia que a escada est� da parede: \n ");
	scanf("%f", &D);
	
	a = a * M_PI / 180;
	hipotenusa = D / (cos(a));
	
	printf("A medida da escada para que possa alcan�ar a sua ponta � de: \n %.2f ", hipotenusa);
	
	return 0;	
	
}
