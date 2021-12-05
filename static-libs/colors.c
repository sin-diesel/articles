#include <stdio.h>
#include <stdarg.h>

#include <colors.h>


void set_color(const char* color) {
    printf("%s", color);
}

void reset_color() {
    printf("%s", RESET);
}

void print_color(const char* color, const char* fmt, ...) {

    va_list args;
    char output[MAXLEN] = {0};

    va_start(args, fmt);

    vsnprintf(output, MAXLEN, fmt, args);
    va_end(args);

    printf("%s%s", color, output);
}

