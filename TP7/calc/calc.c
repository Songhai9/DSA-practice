#include "calc-io.h"
#include "parser.h"

int main() {
    char line[100];
    double a;
    double b;
    char op;
    
    fgets(line, sizeof(line), stdin);
    if (parse(line, &a, &b, &op) == PARSE_OK)
        printResult(a, b, op);

    return 0;
}