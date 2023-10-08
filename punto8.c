#include <stdio.h>

// Definici�n de macros para las dimensiones de la matriz
#define M 3  // N�mero de filas
#define N 3  // N�mero de columnas

int main() {
	int matriz[M][N];
	
	printf("Ingrese los valores para la matriz %dx%d:\n", M, N);
	
	// Llenar la matriz con valores ingresados por el usuario
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("Ingrese el valor para la posici�n (%d, %d): ", i , j );
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
