#include <stdio.h> 
#include <locale.h>

/*Fa�a um programa que receba a medida de dois �ngulos de um tri�ngulo, calcule e mostre a medida do
terceiro �ngulo. Sabe-se que a soma dos �ngulos de um tri�ngulo � 180 graus. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int Ang1, Ang2, Ang3, soma;
	
	printf("\n Digite a medida do 1� �ngulo: \n ");
	scanf("%d", &Ang1);
	
	printf("\n Digite a medida do 2� �ngulo: \n ");
	scanf("%d", &Ang2);
	
	soma = Ang1 + Ang2;
	Ang3 = 180 - soma;
	
	printf("\nA medida do terceiro �ngulo �: %.2d \n", Ang3);
	
	return 0;
	
}
