#include<stdio.h>
int main(){
	double x=0.0,y=0.0;
	printf("Hello, World\n");

	printf("=====\n");
	x = (0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	printf("x: %g\n", x);

	if (x == 1.0) {
		printf("x is exactly 1.0\n");
	} else {
		printf("x is not 1.0\n");
		printf("%g\n", x - 1.0);
	}

	printf("=====\n");

	y = 0.0 ;
	for (int i = 0; i < 10; i++) {
		y += 0.1;
	}

	printf("y: %g\n", y);

	if (y == 1.0) {
		printf("y is exactly 1.0\n");
	} else {
		printf("y is not 1.0\n");
		printf("%g\n", y - 1.0);
	}

	return 0;
}
