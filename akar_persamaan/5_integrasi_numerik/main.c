#include <stdio.h>

float fabs(float x)
{
	if (x > 0)
		return x;
	else
		return -x;
}

float f(float x)
{
	return (x*x) - (5*x) - 6;
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

    h = (b - a)/n;

    for (int i = 0; i < n; i++)
    {
        b = a + h;
        luas += (h/2) * ((f(a)+f(b)));
        a = b;
    }

    printf("\nLuas : %f\n", fabs(luas));

    return 0;
}
