#include "print.h"

int main() {
    print_formatted("hello %c\n", 'l');
    print_formatted("hello %s\n", "wow");
    return 0;
}

