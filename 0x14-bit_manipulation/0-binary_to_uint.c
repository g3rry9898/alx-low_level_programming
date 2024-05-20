#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    while (*b) {
        if (*b != '0' && *b != '1')
            return 0; // Invalid character found, return 0
        result = (result << 1) + (*b - '0');
        b++;
    }
    return result;
}

int main() {
    const char *binary_str = "110101"; // Example binary string
    unsigned int decimal_value = binary_to_uint(binary_str);
    printf("Decimal value: %u\n", decimal_value);
    return 0;
}

