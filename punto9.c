#include <stdio.h>

// Función para sumar dos números
int resta(int a, int b) {
	return a - b;
}

// Función para multiplicar dos números
int div(int a, int b) {
	return a / b;
}


int main() {
	int opcion, num1, num2, resultado;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	printf("Seleccione la operación:\n");
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
		printf("Opción no válida\n");
		break;
	}
	
	return 0;
}

