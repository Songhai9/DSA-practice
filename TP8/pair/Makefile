# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
TARGET = tests
SRCS = pair.c tests.c
OBJS = $(SRCS:.c=.o)

# Règle par défaut
all: $(TARGET)

# Compilation de l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
