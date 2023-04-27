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
	float a, b;

	printf("Masukkan a: ");
	scanf("%f", &a);

	printf("Masukkan b: ");
	scanf("%f", &b);

	if (f(a) * f(b) > 0)
		printf("Tidak ada akar\n");
	else
	{
		float c, fa, fb, fc, toleransi;

		printf("Masukkan toleransi: ");
		scanf("%f", &toleransi);

		fa = f(a);
		fb = f(b);

		c = (b*fa - a*fb) / (fa - fb);
		fc = f(c);

		while (fabs(fc) >= toleransi)
		{
			if (fa * fc < 0)
				b = c;
			else
				a = c;

			fa = f(a);
			fb = f(b);

			c = (b*fa - a*fb) / (fa - fb);
			fc = f(c);
		}

		printf("Akar: %f\n", c);
	}

	return 0;
}
