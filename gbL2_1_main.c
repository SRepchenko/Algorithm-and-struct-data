// Сергей Репченко
// 1. Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int bin[SIZE] = {0};
int size;
int i;

void fnToBin(long n)
{
    if(n > 0)
    {
        bin[i++] = n%2;
        fnToBin(n/2);
        size++;
    }
}

void fnBinPrint(int a)
{
    a--;
    printf("%d", bin[a]);
    if (a > 0) fnBinPrint(a);
}

int main()
{
    int N;
    do
    {
        printf("Enter positive number or -1 for exit: ");
        scanf("%d", &N);
        if (N == -1) break;
        size = 0;
        i = 0;
        fnToBin(N);
        //printf("%d\n", size);
        fnBinPrint(size);
        printf("\n");
     } while (1);

    return 0;
}
