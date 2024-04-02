#include <stdio.h> 
#include <locale.h>

/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. */
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float horas, salarioM, horasEx, cal;
	
	
	printf(" Qual o número de horas trabalhadas? \n");
	scanf("%f", &horas);
	
	printf(" \n Qual é o salário mínimo? \n");
	scanf("%f", &salarioM);
	
	printf("\n número de horas extras: \n");
	scanf("%f", &horasEx);
	
    horas =  1.0/8.0 * salarioM;
    horasEx= 1.0/4.0 * salarioM;
    
    salarioM = horas + horasEx;
	
	
	printf(" \n O salário a receber é: %.2f\n",salarioM);
	
	return 0;
	
}
