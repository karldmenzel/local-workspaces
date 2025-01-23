CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC_FILE = src/main.c
LIB_FILE = src/my_functions.c
OUTPUT_FILE = build/hello

TEST_FILE = test/my_functions_test.c
TEST_OUTPUT_FILE = build/tests

all: compile run

compile: $(SRC_FILE)
	$(CC) $(CFLAGS) -o $(OUTPUT_FILE) $(SRC_FILE) $(LIB_FILE)

run: compile
	./$(OUTPUT_FILE)

compile-test:
	$(CC) $(CFLAGS) -o ./$(TEST_OUTPUT_FILE) $(TEST_FILE) $(LIB_FILE)

test: compile-test
	./$(TEST_OUTPUT_FILE)

clean:
	rm ./$(OUTPUT_FILE)
	rm ./$(TEST_OUTPUT_FILE)

