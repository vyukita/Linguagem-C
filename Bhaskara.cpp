#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	//Defini��o de vari�veis, op��o do usu�rio e vari�veis da f�rmula de bhaskara
	int op, delta, a, b, c, rPos, rNeg;
	
	printf("Calculadora da f�rmula de bhaskara \n");
	printf("1 - Calcular delta \n");
	printf("2 - Calcular bhaskara \n");
	printf("Informe sua op��o: ");
	scanf("%i", &op);
	printf("\n\n");
	
	switch(op){
		//C�lculo para descobrir o valro de delta, de acordo com a f�rmula matem�tica.
		case 1:			
			printf("F�rmula a ser realizada: delta = b� - 4.a.c");
			printf("\n\n\n");
			
			printf("Informe o valor de b: \n");
			scanf("%i", &b);
			
			printf("Informe o valor de a: \n");
			scanf("%i", &a);
			
			printf("Informe o valor de c: \n");
			scanf("%i", &c);
			
			delta = (pow(b,2)) - (4 * a * c);
			
			printf("O valor de delta �: %i", delta);
			break;
		//c�lculo para descobrir qual o valor de x na f�rmula de bhaskara
		case 2:
			printf("F�rmula a ser realizada: x = -b +- raiz de delta/2.a");
			printf("\n\n\n");
			
			printf("Informe o valor de b: \n");
			scanf("%i", &b);
			
			printf("Informe o valor de a: \n");
			scanf("%i", &a);
			
			printf("Informe o valor de delta: \n");
			scanf("%i", &delta);
			
			//C�lculo do valor positivo de x
			rPos = (-b + sqrt(delta)) / (2*a);
			printf("O valor positivo de x �: %i", rPos);
			
			printf("\n\n");
			
			//C�lculo do valor negativo de x
			rNeg = (-b - sqrt(delta)) / (2*a);
			printf("O valor negativo de x �: %i", rNeg);
			
			break;
	}
	
}
