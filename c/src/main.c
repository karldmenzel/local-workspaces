#include <stdio.h>
#include "my_functions.h"

int main() {
	printf("Hello world from the C language!\n");

	int i = my_add(1, 2);

	printf("My adding function result: %d\n", i);	

	return 0;
}
