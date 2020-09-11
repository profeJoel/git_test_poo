#include<stdio.h>

int main()
{
	int v[3], i;
	printf("Ingrese los valores en el vector\n");

	for(i=0; i<3; i++)
	{
		printf("Posicion %d: \n", i+1);
		scanf("%d", &v[i]);
	}

	if(v[0] > v[1] && v[0] > v[2])
		printf("El valor mayor es: %d\n", v[0]);
	if(v[1] > v[0] && v[1] > v[2])
		printf("El valor mayor es: %d\n", v[1]);
	if(v[2] > v[1] && v[2] > v[0])
		printf("El valor mayor es: %d\n", v[2]);

	return 0;
}