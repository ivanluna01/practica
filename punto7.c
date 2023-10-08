#include <stdio.h>

// Definición de la macro N

int main() {
const int var= 10;
	
	// Declarar un vector de tamaño N
	int vector[var];
	
	printf("Ingrese %d valores para poblar el vector:\n", var);
	
	// Poblar el vector con valores ingresados por el usuario
	for (int i = 0; i < var; i++) {
		printf("Ingrese el valor para la posición %d: ", i);
		scanf("%d", &vector[i]);
	}
	
	// Mostrar los valores del vector por pantalla
	printf("Valores del vector:\n");
	for (int i = 0; i < var; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	return 0;
}
