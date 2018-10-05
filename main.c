#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"

int main(int argc, char *argv[]) {
	
	double a;
	char menu;

	do{
		printf("El siguiente programa hace conversiones fahrenheit-celcius.\n");
		printf("1) Celcius a Fahrenheit.\n");
		printf("2) Fahrenheit a Celcius.\n");
		printf("0) Salir.\n");
		scanf("%c",&menu);
		fflush(stdin);
		
		if(menu == '1'){
			printf("Ingresa la temperatura en Grados Celius : ");
			scanf("%lf",&a);
			Fahrenheit(a);
			fflush(stdin);
			system("pause");
			system("cls");
		}else if(menu == '2'){
			printf("Ingresa la temperatura en Grados Fahrenheit : ");
			scanf("%lf",&a);
			Celcius(a);
			fflush(stdin);
			system("pause");
			system("cls");
		}else if(menu == '0'){
			printf("MADE BY : Juan Carlos Calderon Davila.\n");
		}else if(menu!= '1' || menu!= '2'){
			printf("Incorrecto intente de nuevo.");
		}
	}while(menu != '0');
	
	system("pause");
	return 0;
}
