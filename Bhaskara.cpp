#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	//Definição de variáveis, opção do usuário e variáveis da fórmula de bhaskara
	int op, delta, a, b, c, rPos, rNeg;
	
	printf("Calculadora da fórmula de bhaskara \n");
	printf("1 - Calcular delta \n");
	printf("2 - Calcular bhaskara \n");
	printf("Informe sua opção: ");
	scanf("%i", &op);
	printf("\n\n");
	
	switch(op){
		//Cálculo para descobrir o valro de delta, de acordo com a fórmula matemática.
		case 1:			
			printf("Fórmula a ser realizada: delta = b² - 4.a.c");
			printf("\n\n\n");
			
			printf("Informe o valor de b: \n");
			scanf("%i", &b);
			
			printf("Informe o valor de a: \n");
			scanf("%i", &a);
			
			printf("Informe o valor de c: \n");
			scanf("%i", &c);
			
			delta = (pow(b,2)) - (4 * a * c);
			
			printf("O valor de delta é: %i", delta);
			break;
		//cálculo para descobrir qual o valor de x na fórmula de bhaskara
		case 2:
			printf("Fórmula a ser realizada: x = -b +- raiz de delta/2.a");
			printf("\n\n\n");
			
			printf("Informe o valor de b: \n");
			scanf("%i", &b);
			
			printf("Informe o valor de a: \n");
			scanf("%i", &a);
			
			printf("Informe o valor de delta: \n");
			scanf("%i", &delta);
			
			//Cálculo do valor positivo de x
			rPos = (-b + sqrt(delta)) / (2*a);
			printf("O valor positivo de x é: %i", rPos);
			
			printf("\n\n");
			
			//Cálculo do valor negativo de x
			rNeg = (-b - sqrt(delta)) / (2*a);
			printf("O valor negativo de x é: %i", rNeg);
			
			break;
	}
	
}
