#include <stdio.h> 
#include <locale.h>

/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las. */

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int reais, dolar, marco, libra;
	
	printf("\n Qual a quantidade de dinheiro em R$: \n ");
	scanf("%d", &reais);
	
	dolar = reais / 1.80;
	
	printf("\n DOLAR: \n %.2d", dolar);
	
	marco = reais / 2.00;
	
	printf("\n MARCO ALEMÃO: \n %.2d", marco);
	
	libra = reais / 3.77;
	
	printf("\n LIBRA ESTERLINA: \n %.2d", libra);
	
	
	
	return 0;
	
}
