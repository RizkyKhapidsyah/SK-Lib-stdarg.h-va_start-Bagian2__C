#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int add_nums(int count, ...) {
    int result = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }
    
    va_end(args);
    return result;
}

int main(void) {
    printf("%d\n", add_nums(4, 25, 25, 50, 50));
    _getch();
    return 0;
}