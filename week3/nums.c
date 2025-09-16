#include <stdio.h>
#include "calc.h"

int main() {
    int decimal = 42;
    int octal = 052;
    int hex = 0x2A;
    int binary = 0b101010; // 42

    printf("Decimal: %d\n", decimal);
    printf("Octal: %o (Prefix: 0%o) = %d\n", octal, octal, octal);
    printf("Hexadecial: %x (Prefix: 0x%x) = %d\n", hex, hex, hex);
    printf("Binary: 0b101010 = %d\n", binary);

    printf("\n----------------------\n");
    printf("|      ~MATH!!~      |");
    printf("\n----------------------\n\n");

    printf("%o + %x = %d\n", octal, hex, Sum(octal, hex)); // Sum()
    printf("%x - %o = %d\n", hex, octal, Sub(hex, octal)); // Sub()
    printf("%o * %x = %d\n", octal, hex, Mul(octal, hex)); // Mul()
    printf("%x / %o = %d\n", hex, octal, Div(hex, octal)); // Div()
    printf("반지름 %x 원주율 %.5f\n", hex, circ_circ(hex)); // circ_circ()
    printf("반지름 %x 넓이 %.5f\n", hex, circ_area(hex)); // circ_area()

    return 0;
}