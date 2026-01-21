#include <stdio.h>
#include <math.h>

int main()
{
    while (1) {
    printf("Enter a base 10 integer between 0 and 65535 (inclusive):\n");
    int decimal = 0;
    scanf("%d", &decimal);

    if (decimal > 0 && decimal < 65535)
        break;
    }

    

    return 0;
}