#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Menampilkan 1 - 20

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }

    // Bilangan triangular
    int hasil = 0;
    for (int i = 1; i <= 7; i++)
    {
        hasil += i;
    }
    printf("Hasil penjumlahan bilangan triangular adalah %d\n", hasil);

    char huruf = 'A';
    for (char i = huruf; i <= 'Z'; i++)
    {
        printf("%c\n", i);
    }

    for (char i = 'Z'; i >= 'A'; i--)
    {
        printf("%c\n", i);
    }

        return 0;
}
