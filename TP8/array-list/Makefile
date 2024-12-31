CC = gcc
CFLAGS = -Werror -Wall -Wextra -g

TARGET = tests
SRCS = tests.c array-list.c
OBJS = $(SRCS:.c=.o)
HEADERS = array-list.h tps_unit_test.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)