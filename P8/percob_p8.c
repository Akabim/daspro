#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letter = 'A';
    int sum = 1;
    int valid_flag = 0;

    switch (letter)
    {
    case 'X':
        sum = 0;
        break;
    case 'Z':
        valid_flag = 1;
        break;
    case 'A':
        sum = 1;
        break;
    default:
        printf("Unknown letter -->%c\n", letter);
    }

    int valid_operator = 1; // valid_operator diinisialisasi dengan logika 1
    char operator;
    float number1, number2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f", &number1, &operator, & number2);

    switch (operator)
    {
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    default:
        valid_operator = 0;
        break;
    }

    if (valid_operator)
        printf("\n%g %c %g = %g\n", number1, operator, number2, result);
    else
        printf("Invalid operator!\n");

    int pilihan;
    float sisi, jari_jari, tinggi, volume, luas;

    // Menampilkan menu
    printf("Menu:\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Masukkan pilihan Anda (1, 2, atau 3): ");
    scanf("%d", &pilihan);

    // Menggunakan switch-case berdasarkan pilihan user
    switch (pilihan)
    {
    case 1:
        // Menghitung volume kubus
        printf("Masukkan panjang sisi kubus: ");
        scanf("%f", &sisi);
        volume = sisi * sisi * sisi;
        printf("Volume kubus adalah: %.2f\n", volume);
        break;
    case 2:
        // Menghitung luas lingkaran
        printf("Masukkan panjang jari-jari lingkaran: ");
        scanf("%f", &jari_jari);
        luas = 3.14 * jari_jari * jari_jari;
        printf("Luas lingkaran adalah: %.2f\n", luas);
        break;
    case 3:
        // Menghitung volume silinder
        printf("Masukkan panjang jari-jari lingkaran: ");
        scanf("%f", &jari_jari);
        printf("Masukkan tinggi silinder: ");
        scanf("%f", &tinggi);
        volume = 3.14 * jari_jari * jari_jari * tinggi;
        printf("Volume silinder adalah: %.2f\n", volume);
        break;
    default:
        // Jika pilihan selain 1, 2, atau 3
        printf("Pilihan tidak valid! Silakan masukkan 1, 2, atau 3.\n");
        break;
    }

    return 0;
}
