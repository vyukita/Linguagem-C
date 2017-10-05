#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	//vari�veis da f�rmula velocidade m�dia
	float di, df, ti, tf, vkm, vms;
	
	printf("Calculadora de velocidade m�dia \n\n");
	
	//Identeifica��o dos valores
	printf("Informe a dist�ncia final (km): \n");
	scanf("%f", &df);
			
	printf("Informe a dist�ncia inicial (km): \n");
	scanf("%f", &di);
			
	printf("Informe o tempo final (h): \n");
	scanf("%f", &tf);
			
	printf("Informe o tempo inicial (h): \n");
	scanf("%f", &ti);
	
	//C�lculo realizado atrav�s da f�rmula de velocidade m�dia da f�sica
	vkm = (df - di)/(tf - ti);
	vms = vkm/3.6;
			
	printf("\n\n");
	printf("A velocidade m�dia �: %.2f m/s", vms);		

}
