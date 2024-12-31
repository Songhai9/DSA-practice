CC = gcc
CFLAGS = -Wextra -Werror -Wall -g
SRCS = chemin.c
OBJS = $(SRCS:.c=.o)
TARGET = chemin

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(TARGET)

.PHONY: all clean