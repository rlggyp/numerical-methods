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
		short i = 1;

		printf("Masukkan toleransi: ");
		scanf("%f", &toleransi);

		fa = f(a);
		fb = f(b);

		c = (b*fa - a*fb) / (fa - fb);
		fc = f(c);

   	printf("\nn\ta\tb\tc\tf(c)\n");
   	printf("==========================================\n");
  	printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t\n", i, a, b, c, f(c));

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

			++i;
  		printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t\n", i, a, b, c, f(c));
		}

		printf("Akar: %f\n", c);
	}

	return 0;
}
