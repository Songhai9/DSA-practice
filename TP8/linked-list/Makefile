# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = tests
SRCS = linked-list.c tests.c
OBJS = $(SRCS:.c=.o)

# Règles
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
