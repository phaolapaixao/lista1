#include <stdio.h> 
#include <locale.h>

/*Fa�a um programa que receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero
de horas extras trabalhadas, calcule e mostre o sal�rio a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do sal�rio m�nimo;
b) a hora extra vale 1/4 do sal�rio m�nimo
c) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras. */
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float horas, salarioM, horasEx, cal;
	
	
	printf(" Qual o n�mero de horas trabalhadas? \n");
	scanf("%f", &horas);
	
	printf(" \n Qual � o sal�rio m�nimo? \n");
	scanf("%f", &salarioM);
	
	printf("\n n�mero de horas extras: \n");
	scanf("%f", &horasEx);
	
    horas =  1.0/8.0 * salarioM;
    horasEx= 1.0/4.0 * salarioM;
    
    salarioM = horas + horasEx;
	
	
	printf(" \n O sal�rio a receber �: %.2f\n",salarioM);
	
	return 0;
	
}
