/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/

#include<stdio.h>
#include <locale.h>

int main () {	
setlocale(LC_ALL, "Portuguese_Brazil");
int anoNascimento, anoAtual;
int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeSemanas = 0;

printf("Digite o ano de nascimento: ");
scanf("%d", &anoNascimento);

printf("Digite o ano atual: ");
scanf("%d", &anoAtual);

printf("%d - %d \n", anoAtual, anoNascimento);

idade = anoAtual - anoNascimento;
printf("A idade dessa pessoa em anos é: %d \n", idade);

idadeMeses = idade * 12;
printf("A idade dessa pessoa em meses é: %d \n", idadeMeses);

idadeDias = idade * 365;
printf("A idade dessa pessoa em Dias é: %d \n", idadeDias);

idadeSemanas = idade * 52179;
printf("A idade dessa pessoa em semanas é: %d \n", idadeSemanas);

return 0;
}


