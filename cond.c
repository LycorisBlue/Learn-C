#include <stdio.h>

int main()
{
    // Les conditions avec if, else, else if

    int a = 10;
    int b = 5;
    int c = a == b; // False
    int d = a <= b; // False
    int e = a >= b; // True
    int f = a != b;

    //----------------------------Essai des valeurs--------------------------//
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    if (d)
    {
        printf("%d <= %d\n", a, b);
    }
    else if (c)
    {
        printf("%d == %d\n", a, b);
    }
    else
    {
        printf("%d >= %d\n", a, b);
    }

    // les conditions avec swich

    switch (a)
    {
    case 10:
        printf("a = 10\n");
        break;

    case 1:
        printf("a = 10\n");
        break;

    default:
        break;
    }

    return 0;
}