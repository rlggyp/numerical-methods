#include <stdio.h>

float f(float x) { return (x*x) - (5*x) - 6; }
float fabs(float x)
{
	if (x > 0)
		return x;
	else
		return -x;
}

int main()
{
	float
		a,
		b;

	printf("Masukkan nilai a: ");
	scanf("%f", &a);

	printf("Masukkan nilai b: ");
	scanf("%f", &b);

	if (f(a) * f(b) > 0)
		printf("Tidak ada akar");
	else
	{
		int n;

		printf("Masukkan nilai n: ");
		scanf("%d", &n);

		float h, fa, fb;

		h = (b - a) / n;

   printf("\nn\ta\tb\tf(a)\tf(b)\tfa*fb\n");
   printf("===================================================\n");

		for (int i = 1; i <= n; i++)
		{
			b = a + h;

			fa = f(a);
			fb = f(b);

  		printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n", i, a, b, fa, fb, fa*fb);
			
			if ((fa * fb) <= 0)
				break;

			a = b;
		}

		if (fabs(fa) < fabs(fb))
			printf("\nakar: %f\n", a);
		else
			printf("\nakar: %f\n", b);
	}

	return 0;
}
