#include <stdio.h>
#include <stdlib.h>

// Функция бинарного поиска в отсортированном массиве
int fnBinSearch(int* a, int length, int value)
 {
     int L = 0, R = length - 1;
     int m = L + (R - L)/2;
     // Алгоритм поиска
     while (L <= R && a[m] != value) 
     {
        if (a[m] < value)
            L = m + 1;
        else
            R = m - 1;
        m = L + (R - L)/2;
     }

     if (a[m] == value) return m;
    else return -1;
 }


int main(int argc, const char* argv[])
{
    int SIZE;
    printf("Input SIZE: ");
    scanf("%d", &SIZE);
    int* area = (int*)calloc(SIZE, sizeof(int));

    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Input %d: ", i);
        scanf("%d", &area[i]);
    }

    int value;
    printf("Input value for search:");
    scanf("%d", &value);

    printf("Index: %d", fnBinSearch(area, SIZE, value));

    free(area);

    return 0;
}
