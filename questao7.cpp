
#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.*/

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float pesoAtual, peso, novopeso;
	
	  printf("Digite o seu peso atual: \n ");
	  scanf("%f", &pesoAtual);
	
	  	
	  peso = (pesoAtual * 15/100); 
	  novopeso = pesoAtual + peso; 
	  
	  
	printf("seu novo peso após engordar é: %.2f \n ", novopeso);

	
	  peso = (pesoAtual * 20/100); 
	  novopeso= pesoAtual - peso;
	
	printf("seu novo peso após emagrecer é: %.2f \n ", novopeso);
	
return 0;

}  
	

