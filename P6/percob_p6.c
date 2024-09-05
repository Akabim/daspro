#include <stdio.h>

int main()
{
    // Program Ganjil Genap
    printf("Program Ganjil Genap\n");
    int bil;
    printf("Masukkan Bilangan \n");
    scanf("%d", &bil);
    printf("Bilangan yang diinputkan adalah %d\n", bil);
    if (bil % 2 == 0)
    {
        printf("Bilangan %d adalah bilangan genap\n", bil);
    }
    else
    {
        printf("Bilangan %d adalah bilangan ganjil\n", bil);
    }
    printf("\n");

    // Program Diskon
    printf("Program Diskon\n");
    int total_belanja;
    float diskon;
    printf("Masukkan Total Belanja \n");
    scanf("%d", &total_belanja);
    if (total_belanja >= 100000)
    {
        diskon = total_belanja * 0.05;
        printf("Anda mendapatkan diskon sebesar Rp. %.2f\n", diskon);
    }
    else
    {
        printf("Total pembelian adalah Rp. %d\n", total_belanja);
        printf("Anda tidak mendapat diskon!\n");
    }
    printf("\n");

    // Bilangan Prima
    printf("Program Menentukan bilangan prima  \n");

    int num;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &num);

    if (num == 2)
    {
        printf("Angka tersebut adalah bilangan prima\n");
    }
    else if (num % 2 == 0)
    {
        printf("Angka tersebut adalah bilangan non-prima\n");
    }
    else if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
    {
        if (num > 1 && num < 10)
        {
            printf("Angka tersebut adalah bilangan prima\n");
        }
        else
        {
            printf("Angka tersebut adalah bilangan non-prima\n");
        }
    }
    else
    {
        printf("Angka tersebut adalah bilangan prima\n");
    }

    // Membagi bilangan
    printf("Membagi 2 bilangan\n");
    float a, b, hasil;
    printf("Masukkan bilangan pertama\n");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua\n");
    scanf("%f", &b);
    if (b > 0)
    {
        hasil = a / b;
        printf("Hasil dari a / b adalah = %.3f\n", hasil);
    }
    else
    {
        printf("Bilangan tidak valid, karna dibagi dengan 0");
    }
}