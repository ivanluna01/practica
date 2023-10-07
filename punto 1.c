#include <stdio.h>

int main(int argc, char *argv[]) {
	int grados [10] = { 12, 4, -7, 90, 4, 56, 23, -90, 1, 12 };
	
	for(int i=0; i<=sizeof(grados); i++){
		if("%d ",grados[i]%2==0){
			printf("%d",grados[i]);
		}
	}
	
	return 0;
}
