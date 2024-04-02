/* Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2*/

#include <stdio.h> 
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float area, baseMaior, baseMenor, altura;
	
	printf("Digite a base maior do triangulo: \n");
	scanf("%f", &baseMaior);
	
    printf("Digite a base menor do triangulo: \n");
	scanf("%f", &baseMenor);
	
    printf("Digite a altura do triangulo: \n");
	scanf("%f", &altura);
		
	   area = (baseMaior + baseMenor) * altura / 2; 
	
	printf("A área do triangulo é: %.2f \n", area);
	
return 0;
}
