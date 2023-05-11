#include <stdio.h>

float f(float x)
{
    return 1/(1+x);
}

int main()
{
    float a, b, h, luas = 0;
    short n;

	printf("Masukkan a: ");
	scanf("%f", &a);

	printf("Masukkan b: ");
	scanf("%f", &b);

	printf("Masukkan n: ");
	scanf("%d", &n);

    h = (b - a)/(3*n);

    for (int i = 0; i < n; i++)
    {
        b = a + 3*h;
        luas += (3 * h * (f(a) + (3*f(a+h)) + (3*f(a+(2*h))) + f(b)))/8;
        a = b;
    }

    printf("\nLuas : %f\n", luas);

    return 0;
}
