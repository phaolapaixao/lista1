/*Fa�a um programa que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado.*/

#include <stdio.h> 
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float area, lado;
	
	printf("Digite a medida do lado do quadrado: \n");
	scanf("%f", &lado);
	
		
	   area = lado * lado;
	
	printf("A �rea do quadrado �: %.2f \n", area);
	
return 0;

}
