#include <stdio.h>
#include <locale.h>

/*Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2
,deve-se usar 18 W de pot�ncia. Fa�a um programa que receba as duas dimens�es de um c�modo (em metros), calcule e mostre
a sua �rea (em m2)e a pot�ncia de ilumina��o que dever� ser utilizada. */

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float D1, D2, L, P;
	
    printf("Digite a largura do seu c�modo em metros: \n ");
    scanf("%f",&D1);
  
    printf("Digite o comprimento de seu c�modo em metros: \n ");
    scanf("%f",&D2);
    
    L = D1 * D2;
    
    printf("A �rea do seu c�modo correspode a: %.2f m^2 \n", L);
    
    P = L * 18;
    
    printf("A pot�ncia de ilumina��o que deva ser usada �: %.2f W \n", P);
return 0;

}
