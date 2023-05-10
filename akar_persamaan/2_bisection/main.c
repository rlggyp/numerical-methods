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
		printf("Tidak ada akar\n");
	else
	{
		float 
			c,
			toleransi;

		short i = 1;

		printf("Masukkan nilai toleransi: ");
		scanf("%f", &toleransi);

   	printf("\nn\ta\tb\tc\tf(c)\n");
   	printf("==========================================\n");

		do 
		{
			c = (a + b) / 2;

  		printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t\n", i, a, b, c, f(c));

			if (f(a) * f(c) <= 0)
				b = c;
			else
				a = c;

			++i;
		}
		while (fabs(f(c)) >= toleransi);

		printf("\nAkar: %.5f\n", c);
	}

	return 0;
}
