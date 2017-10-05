#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	//variáveis da fórmula velocidade média
	float di, df, ti, tf, vkm, vms;
	
	printf("Calculadora de velocidade média \n\n");
	
	//Identeificação dos valores
	printf("Informe a distância final (km): \n");
	scanf("%f", &df);
			
	printf("Informe a distância inicial (km): \n");
	scanf("%f", &di);
			
	printf("Informe o tempo final (h): \n");
	scanf("%f", &tf);
			
	printf("Informe o tempo inicial (h): \n");
	scanf("%f", &ti);
	
	//Cálculo realizado através da fórmula de velocidade média da física
	vkm = (df - di)/(tf - ti);
	vms = vkm/3.6;
			
	printf("\n\n");
	printf("A velocidade média é: %.2f m/s", vms);		

}
