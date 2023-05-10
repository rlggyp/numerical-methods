#include <stdio.h>

int main()
{
    short n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    float x[n], y[n], l[n], x_;
    for (short i = 0; i < n; ++i)
    {
        printf("Masukkan x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Masukkan y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    printf("Masukkan nilai x yang akan dicari: ");
    scanf("%f", &x_);

    for (short i = 0; i < n; ++i)
    {
        float pembilang = 1, penyebut = 1;

        for (short j = 0; j < n; ++j)
        {
            if (i == j)
                continue;

            pembilang *= x_ - x[j];
            penyebut  *= x[i] - x[j];
        }

        l[i] = pembilang/penyebut;
    }

    float y_ = 0;

    for (short i = 0; i < n; ++i)
    {
        y_ += l[i] * y[i];
    }

    printf("nilai y dengan x = %f adalah: %f\ny: %f\n", x_, y_, y_);

    return 0;
}
