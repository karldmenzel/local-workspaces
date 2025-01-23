#include <stdio.h>
#include <assert.h>
#include "my_functions.h"

void test_my_add() {
	int i = my_add(1, 2);

	assert(i == 3);
}

int main() {
    	printf("Running tests for my functions module...\n");
    	test_my_add();
	printf("... tests passed!\n");
    	return 0;
}
