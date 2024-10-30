#include <stdio.h>
#include <stdlib.h>
#include "Complex.h"

int main() {
    struct Complex c1 = {3, 4};
    struct Complex c2 = {5, 7};
    
    printf("Value of c1 = %d + %di\n", c1.real, c1.imag);
    printf("Value of c2 = %d + %di\n", c2.real, c2.imag);

    return 0;
}
