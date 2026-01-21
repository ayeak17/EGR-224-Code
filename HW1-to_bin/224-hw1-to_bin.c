#include <stdio.h>
#include <math.h>


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

    char binary[17];
    char mod;
    int div, i = 0;
    
    while (div > 0)
    {
        mod = (char)(div % 2);
        div = div / 2;
        binary[i] = mod;
        ++i;
    }
    i = 0;
    

    for (int n = 16; n >= 0; n--)
    {
        printf("%c", binary[n]);
    }


    return 0;
}