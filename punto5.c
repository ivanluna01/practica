#include <stdio.h>

int main() {
	int grados[10] = {12, 4, -7, 90, 4, 56, 23, -90, 1, 12};
	
	printf("Los valores 4, 90, 56, -90 y 12 son:\n");
	
	for (int i = 0; i < 10; i++) {
		if (grados[i] == 4 || grados[i] == 90 || grados[i] == 56 || grados[i] == -90 || grados[i] == 12) {
			printf("%d\n", grados[i]);
		}
	}
	
	return 0;
}


