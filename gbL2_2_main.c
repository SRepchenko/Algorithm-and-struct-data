// ������ ��������
// 2. ����������� ������� ���������� ����� a � ������� b:
// a. ��� ��������;
// b. ����������;
// c. *����������, ��������� �������� �������� �������.

//  a. ��� ��������;
#include <stdio.h>
#include <stdlib.h>

int fnPower(int a, int b)
{
    int p = 1;
    while (b)
    {
        p = p * a;
        b--;
    }
    return p;
}

int main()
{
    int A, B;
    printf("Enter A for expression \"A power B\" \n");
    scanf("%d", &A);
    printf("Enter B for expression \"A power B\" \n");
    scanf("%d", &B);
    printf("%d", fnPower(A, B));
    return 0;
}

// b. ����������;
int fnPower(int a, int b)
{
    if (b > 0) return a*fnPower(a,--b);
    else return 1;
}

// c. *����������, ��������� �������� �������� �������.
int fnPower(int a, int b)
{
    if (b > 0)
        if (b % 2) return a*fnPower(a,--b);
        else return fnPower(a * a, b/2);
    else return 1;
}
