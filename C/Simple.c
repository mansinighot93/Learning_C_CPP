#include <stdio.h>
#include <stdlib.h>
#include "./Header_Files/Complex.h"
#include "./Header_Files/Greenhouse.h"

int main() {
    struct Complex c1 = {3, 4};
    struct Complex c2 = {5, 7};
    
    printf("Value of c1 = %d + %di\n", c1.real, c1.imag);
    printf("Value of c2 = %d + %di\n", c2.real, c2.imag);

    struct Greenhouse g1 = {"Ajinkya","Pune", {25.6, 45.0, 5000.0}};;
    printf(g1.name,g1.location,g1.currentClimate);
    
    return 0;
}
