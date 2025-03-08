#include <stdio.h>
#include "my_functions.h"

void pointer_guide() {

	printf("Welcome to the guide on pointers!\n");

	int myVariable = 500;

	printf("The value of myVariable is: %d\n", myVariable);

	printf("The memory address of myVariable is: %p\n", &myVariable);

	int *pointerToMyVariable = &myVariable;

	printf("The value of pointerToMyVariable is: %p\n", pointerToMyVariable);

	printf("The value of the memory at the address stored in pointerToMyVariable is: %d\n", *pointerToMyVariable);

	printf("The memory address of pointerToMyVariable is: %p\n", &pointerToMyVariable);

	int **pointerPointer = &pointerToMyVariable;

	printf("The value of pointerPointer is: %p\n", pointerPointer);

	printf("The single dereference of pointerPointer is: %p\n", *pointerPointer);

	printf("The double dereference of pointerPointer is: %d\n", **pointerPointer);

}

int main() {
	printf("Hello world from the C language!\n\n");

	int i = my_add(1, 3);

	printf("My adding function result: %d\n\n", i);

	pointer_guide();

	return 0;
}
