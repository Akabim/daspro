#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2;

    // Input nilai a, b, dan c
    printf("Masukkan nilai a, b, dan c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Hitung diskriminan
    D = b * b - 4 * a * c;

    // Periksa nilai diskriminan
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Akar-akar real berbeda: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        printf("Akar-akar real kembar: x1 = x2 = %.2f\n", x1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);
        printf("Akar-akar imajiner: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    float num1, num2, result;
    int choice;

    // Input dua angka
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &num1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &num2);

    // Menampilkan menu pilihan
    printf("Menu Matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &choice);

    // Periksa pilihan
    if (choice == 1)
    {
        result = num1 + num2;
        printf("Hasil penjumlahan: %.2f\n", result);
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        printf("Hasil pengurangan: %.2f\n", result);
    }
    else if (choice == 3)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Hasil pembagian: %.2f\n", result);
        }
        else
        {
            printf("Error! Tidak bisa membagi dengan nol.\n");
        }
    }
    else if (choice == 4)
    {
        result = num1 * num2;
        printf("Hasil perkalian: %.2f\n", result);
    }
    else
    {
        printf("Pilihan tidak valid!\n");
    }

    int nilai_angka;
    char nilai_huruf;

    // Input nilai angka
    printf("Masukkan nilai angka (0-100): ");
    scanf("%d", &nilai_angka);

    // Konversi nilai angka ke nilai huruf
    if (nilai_angka <= 40)
    {
        nilai_huruf = 'E';
    }
    else if (nilai_angka <= 55)
    {
        nilai_huruf = 'D';
    }
    else if (nilai_angka <= 60)
    {
        nilai_huruf = 'C';
    }
    else if (nilai_angka <= 80)
    {
        nilai_huruf = 'B';
    }
    else if (nilai_angka <= 100)
    {
        nilai_huruf = 'A';
    }
    else
    {
        printf("Nilai tidak valid!\n");
        return 1; // Keluar dari program jika nilai tidak valid
    }

    // Output nilai huruf
    printf("Nilai huruf adalah %c\n", nilai_huruf);

    return 0;
}