#include <stdio.h> 
#include <locale.h>

/*Fa�a um programa que receba uma hora (uma vari�vel para hora e outra para minutos), calcule e
mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a convers�o anterior;
c) o total dos minutos convertidos em segundos.*/

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int hrs, min, total, seg,conversor;
	
	printf("\n Digite as horas:\n ");
	scanf("%d", &hrs);
	printf(" \nDigite os minutos:\n");
	scanf("%d", &min);
	
    conversor = hrs * 60;
	
	printf("\n A hora convertida em minutos �: \n %.2d",conversor);
	
	total = min + conversor;
	printf("\n Os minutos no total s�o: \n %.2d:", total);
	
    seg = total * 60;
	printf("\n Os minutos convertidos em segundos � \n %.2d:", seg);
	
	return 0;
	
}
