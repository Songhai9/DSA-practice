CC = gcc
CFLAGS = -Werror -Wextra -Wall -g
SRCS = chemin.c pile.c
OBJS = $(SRCS:.c=.o)
HEADERS = pile.h

TARGET = chemin

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

