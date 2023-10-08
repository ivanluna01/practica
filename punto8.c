#include <stdio.h>

// Definición de macros para las dimensiones de la matriz
#define M 3  // Número de filas
#define N 3  // Número de columnas

int main() {
	int matriz[M][N];
	
	printf("Ingrese los valores para la matriz %dx%d:\n", M, N);
	
	// Llenar la matriz con valores ingresados por el usuario
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("Ingrese el valor para la posición (%d, %d): ", i , j );
			scanf("%d", &matriz[i][j]);
		}
	}
	
	// Mostrar la matriz por pantalla
	printf("La matriz ingresada es:\n");
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
