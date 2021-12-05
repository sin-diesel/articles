
#include <stdio.h>
#include <colors.h>

int main() {

    int a = 0;

    print_color(YELLOW, "Number: %d, string: %s, pointer: %p,\n", 100, "RT", &a);

    return 0;
}