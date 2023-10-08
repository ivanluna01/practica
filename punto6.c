#include <stdio.h>

// Definici�n de la macro N
#define N 10

int main() {
	// Declarar un vector de tama�o N
	int vector[N];
	
	printf("Ingrese %d valores para poblar el vector:\n", N);
	
	// Poblar el vector con valores ingresados por el usuario
	for (int i = 0; i < N; i++) {
		printf("Ingrese el valor para la posici�n %d: ", i);
		scanf("%d", &vector[i]);
	}
	
	// Mostrar los valores del vector por pantalla
	printf("Valores del vector:\n");
	for (int i = 0; i < N; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	return 0;
}

