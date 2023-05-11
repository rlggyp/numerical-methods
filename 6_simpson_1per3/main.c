#include <stdio.h>

float f(float x)
{
    return 1/(1+x);
}

int main()
{
    float a, b, h, n, luas = 0;

	printf("Masukkan a: ");
	scanf("%f", &a);

	printf("Masukkan b: ");
	scanf("%f", &b);

	printf("Masukkan n: ");
	scanf("%f", &n);

    h = (b - a)/(2*n);

    for (int i = 0; i < n; i++)
    {
        b = a + 2*h;
        luas += (h/3) * (f(a) + (4*f((a+b)/2)) + f(b));
        a = b;
    }

    printf("\nLuas : %f\n", luas);

    return 0;
}
