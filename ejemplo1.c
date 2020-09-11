#include<stdio.h>

int main()
{
	int edad;
	do{
		printf("Ingrese su edad (en anhos): \n");
		scanf("%d", &edad);
	}while(edad<0 || edad>130);

	if(edad>=18)
		printf("Usted es Mayor de edad, tomese un vinito\n");
	else
		printf("Usted es Menor de edad, pura cocacola\n");

	return 0;
}