/*Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * dia-
gonal menor)/2.*/

#include <stdio.h> 
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float area, diagonalMaior, diagonalMenor;
	
	
	printf("Digite a diagonal maior do losangulo: \n");
	scanf("%f", &diagonalMaior);
	
	printf("Digite a diagonal menor do losangulo: \n");
	scanf("%f", &diagonalMenor);
	
		
	   area = diagonalMaior * diagonalMenor / 2;
	
	printf("A área do losangulo é: %.2f \n", area);
	
return 0;

}

