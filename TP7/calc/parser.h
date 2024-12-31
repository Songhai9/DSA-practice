#include <stdio.h>
#include <stdlib.h>

#define PARSE_OK 0
#define PARSE_ERROR_OPERATION 1
#define PARSE_ERROR_FORMAT 2

int parse(const char * line, double *a, double *b, char *op);