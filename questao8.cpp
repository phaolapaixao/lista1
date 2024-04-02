#include <stdio.h>
#include <locale.h>


/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float peso, pesoGrama;
	
	  printf("Digite o seu peso : \n ");
	  scanf("%f", &peso);
	
	  	
	  pesoGrama = peso* 1000;
	  
	  
	  
	printf("O seu peso em gramas é: %.2f \n ", pesoGrama);
	
return 0;

}  

