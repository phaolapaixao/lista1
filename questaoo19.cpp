#include <stdio.h>
#include <locale.h>

/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2
,deve-se usar 18 W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2)e a potência de iluminação que deverá ser utilizada. */

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float D1, D2, L, P;
	
    printf("Digite a largura do seu cômodo em metros: \n ");
    scanf("%f",&D1);
  
    printf("Digite o comprimento de seu cômodo em metros: \n ");
    scanf("%f",&D2);
    
    L = D1 * D2;
    
    printf("A área do seu cômodo correspode a: %.2f m^2 \n", L);
    
    P = L * 18;
    
    printf("A potência de iluminação que deva ser usada é: %.2f W \n", P);
return 0;

}
