#include <stdio.h> // pour utilise la Fonction printf
int main()
{

    int a = 9;
    int b = 2;
    int c = a / b; // je prends l'exemple de l'operateur /
    int d = a % b;
    int e;
    float f;

    printf("%d= %d * %d + %d \n", a, b, c, d);

    e = 1;
    printf("la valeur est : %d \n", e);

    e = e + 1; // pour un incrementation de 1
    printf("la valeur est : %d \n", e);
    e -= 3;// pour un decrincrementation de 3
    printf("la valeur est : %d \n", e);
    e++;// pour un incrementation de 1
    printf("la valeur est : %d \n", e);

    return 0;
}