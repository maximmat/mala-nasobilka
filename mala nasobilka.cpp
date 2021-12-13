#include <stdio.h>

int main(void) {
	for (int j = 0; j <= 10; j++) {
		for (int i = 0; i <= 10; i++) {
			printf("%3d ", i * j);
		}
		printf("\n");
	}
}