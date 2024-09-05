#include <stdio.h>
#include <math.h>
int main()
{
    // Soal percobaan 1
    printf("Jawaban percobaan 1\n");
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f;
    double var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';
    printf("Nilai var_bulat = %d\n", var_bulat);
    printf("Nilai var_pecahan1 = %f\n", var_pecahan1);
    printf("Nilai var_pecahan2 = %e\n", var_pecahan2);
    printf("Nilai var_karakter = %c\n", var_karakter);
    printf("\n");

    // Soal percobaan 2
    printf("Jawaban percobaan 2\n");
    int a = 12, b = 2, c = 3, d = 4;
    printf("Hasil a % b = %d\n", a % b);
    printf("Hasil a - c = %d\n", a - c);
    printf("Hasil a + b = %d\n", a + b);
    printf("Hasil a / d = %d\n", a / d);
    printf("Hasil a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf("Hasil a %% d / d * a - c = %d\n", a % d / d * a - c);
    printf("\n");

    // Soal Percobaan 3
    printf("Jawaban percobaan 3\n");
    int numa, numb, numc;
    float numd;
    printf("Masukkan nilai a = ");
    scanf("%d", &numa);
    printf("Masukkan nilai b = ");
    scanf("%d", &numb);
    printf("Masukkan nilai c = ");
    scanf("%d", &numc);
    numd = numb * numb - 4 * numa * numc;
    printf("Hasil diskriminan adalah = %f", numd);
    printf("\n");

    // Soal Percobaan 4.1
    printf("Jawaban percobaan 2\n");
    float numA = 12, numB = 2, numC = 3, numD = 4;
    printf("Hasil a %% b = %f\n", fmod(numA, numB));
    printf("Hasil a - c = %f\n", numA - numC);
    printf("Hasil a + b = %f\n", numA + numB);
    printf("Hasil a / d = %f\n", numA / numD);
    printf("Hasil a / d * d + a %% d = %f\n", numA / numD * numD + fmod(numA, numD));
    printf("Hasil a %% d / d * a - c = %f\n", fmod(numA, numD) / numD * numA - numC);
    printf("\n");

    // Soal Percobaan 4.2
    printf("Jawaban percobaan 3\n");
    float bilA, bilB, bilC, bilD;
    printf("Masukkan nilai a = ");
    scanf("%f", &bilA);
    printf("Masukkan nilai b = ");
    scanf("%f", &bilB);
    printf("Masukkan nilai c = ");
    scanf("%f", &bilC);
    bilD = bilB * bilB - 4 * bilA * bilC;
    printf("Hasil diskriminan adalah = %f", bilD);
    printf("\n");
}