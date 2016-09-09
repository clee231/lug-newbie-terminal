#include "adder.h"

void myPrintFunction(char* argv) {
    
    printf("I am printing: %s\n", argv);

    exit(0);
}

void myMathFunction(int i, int j) {
	printf ("%d + %d is %d\n", i, j, (i+j));
}
