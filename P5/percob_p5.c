#include <stdio.h>
#define PI 3.14f

int main()
{
    // Konversi suhu
    float fahr, celc;
    printf("Konversi Suhu\n");
    printf("Masukkan Suhu Celcius\n");
    scanf("%f", &celc);
    fahr = celc * 1.8 + 32;
    printf("Suhu dalam Fahrenheit adalah %.2f\n", fahr);
    printf("\n");

    // Menampilkan satu char
    char c;
    printf("Menampilkan satu karakter\n");
    printf("Masukkan satu karakter\n");
    while (getchar() != '\n')
        ;
    c = getchar();
    printf("Karakter yang dimasukkan adalah %c\n", c);
    printf("\n");

    // Luas lingkaran
    printf("Menghitung Luas Lingkaran\n");
    float r, luas;
    printf("Masukkan jari-jari lingkaran\n");
    scanf("%f", &r);
    luas = PI * r * r;
    printf("Luas lingkaran adalah %.2f\n", luas);

    printf("Mengevaluasi polynominal\n");
    int x, poly;
    printf("Masukkan nilai x \n");
    scanf("%d", &x);
    poly = 3 * x * x - 5 * x + 6;
    printf("Hasil adalah = %d\n", poly);
}