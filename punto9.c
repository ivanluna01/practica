#include <stdio.h>

// Funci�n para sumar dos n�meros
int resta(int a, int b) {
	return a - b;
}

// Funci�n para multiplicar dos n�meros
int div(int a, int b) {
	return a / b;
}


int main() {
	int opcion, num1, num2, resultado;
	
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &num2);
	
	printf("Seleccione la operaci�n:\n");
	printf("1. resta\n");
	printf("2. div\n");
	scanf("%d", &opcion);
	
	switch (opcion) {
	case 1:
		resultado = resta(num1, num2);
		printf("La suma es: %d\n", resultado);
		break;
		
	case 2:
		resultado = div(num1, num2);
		printf("El producto es: %d\n", resultado);
		break;
		
	default:
		printf("Opci�n no v�lida\n");
		break;
	}
	
	return 0;
}

