#include <stdio.h> 
#include <locale.h>

/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND = N * (N - 3)/2, em que N é o número de lados do
polígono. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int Nlados, ND;
	
	printf("\n Digite o número de lados de um polígono convexo: \n ");
	scanf("%d", &Nlados);
	
	ND = Nlados * (Nlados - 3)/2;
	
	printf("\n O número de diagonal desse poligono é: %.2d \n", ND);
	
	return 0;
	
}
	
	
