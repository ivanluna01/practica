#include <stdio.h>
// punto 2.
int main(int argc, char *argv[]) {
	int grados [10] = { 12, 4, -7, 90, 4, 56, 23, -90, 1, 12 };
	for (int i=9;i>=0;i--){
		printf("\n%d",grados[i]);
	}
	
	return 0;
}

