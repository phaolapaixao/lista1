#include <stdio.h> 
#include <locale.h>

/*Fa�a um programa que receba o n�mero de lados de um pol�gono convexo, calcule e mostre o n�mero
de diagonais desse pol�gono. Sabe-se que ND = N * (N - 3)/2, em que N � o n�mero de lados do
pol�gono. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int Nlados, ND;
	
	printf("\n Digite o n�mero de lados de um pol�gono convexo: \n ");
	scanf("%d", &Nlados);
	
	ND = Nlados * (Nlados - 3)/2;
	
	printf("\n O n�mero de diagonal desse poligono �: %.2d \n", ND);
	
	return 0;
	
}
	
	
