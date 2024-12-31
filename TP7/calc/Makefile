# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -lm

# Targets and dependencies
TARGET = calc
TEST_TARGET = tests

# Source files and headers
SRCS = calc.c parser.c calc-io.c
OBJS = $(SRCS:.c=.o)
HEADERS = parser.h calc-io.h

TEST_SRCS = tests.c parser.c calc-io.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

# Default target
all: $(TARGET)

# Build main program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Build tests
$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_OBJS) $(LDFLAGS)

# Pattern rule for object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Run tests
run-tests: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean temporary files
clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)
