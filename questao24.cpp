#include <stdio.h> 
#include <locale.h>

/*Fa�a um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por v�rios pa�ses e precisa converter seu dinheiro em d�lares, marco alem�o e libra esterlina. Sabe-
-se que a cota��o do d�lar � de R$ 1,80; do marco alem�o, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as convers�es e mostr�-las. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int reais, dolar, marco, libra;
	
	printf("\n Qual a quantidade de dinheiro em R$: \n ");
	scanf("%d", &reais);
	
	dolar = reais / 1.80;
	
	printf("\n DOLAR: \n %.2d", dolar);
	
	marco = reais / 2.00;
	
	printf("\n MARCO ALEM�O: \n %.2d", marco);
	
	libra = reais / 3.77;
	
	printf("\n LIBRA ESTERLINA: \n %.2d", libra);
	
	
	
	return 0;
	
}
