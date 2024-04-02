/* Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
Exemplo:
Digite um número: 5*/

#include <stdio.h>
#include <locale.h>

int main () {	
setlocale(LC_ALL, "Portuguese_Brazil");
int num;

printf("Digite um número:");
scanf("%d", &num);

printf("%dx0=%d\n", num,num*0);
printf("%dx1=%d\n", num,num*1);
printf("%dx2=%d\n", num,num*2);
printf("%dx3=%d\n", num,num*3);
printf("%dx4=%d\n", num,num*4);
printf("%dx5=%d\n", num,num*5);
printf("%dx6=%d\n", num,num*6);
printf("%dx7=%d\n", num,num*7);
printf("%dx8=%d\n", num,num*8);
printf("%dx9=%d\n", num,num*9);
printf("%dx10=%d\n", num,num*10);

return 0;
}
