#include <stdio.h> 
#include <locale.h>

/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int Ang1, Ang2, Ang3, soma;
	
	printf("\n Digite a medida do 1° ângulo: \n ");
	scanf("%d", &Ang1);
	
	printf("\n Digite a medida do 2° ângulo: \n ");
	scanf("%d", &Ang2);
	
	soma = Ang1 + Ang2;
	Ang3 = 180 - soma;
	
	printf("\nA medida do terceiro ângulo é: %.2d \n", Ang3);
	
	return 0;
	
}
