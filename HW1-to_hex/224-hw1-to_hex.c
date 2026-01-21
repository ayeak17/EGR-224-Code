#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int decimal = 0;

    while (1) {
    printf("Enter a base 10 integer between 0 and 65535 (inclusive):\n");
    scanf("%d", &decimal);

    if (decimal > 0 && decimal < 65535)
        break;
    else
        decimal = 0;
    }

    printf("%X", decimal);
    
    return 0;
}