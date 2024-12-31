#include "parser.h"
#include <string.h>

int parse(const char *line, double *a, double *b, char *op)
{
    if (sscanf(line, "%lf %c %lf", a, op, b) == 3)
    {
        if ((*op == '+' || *op == '-' || *op == '*' || *op == '^'))
        {
            return PARSE_OK;
        }
        else if (*op == '/') {
            if (b != 0)
                return PARSE_OK;
        }
        else
            return PARSE_ERROR_OPERATION;
    }
    
    return PARSE_ERROR_FORMAT;
}
