// Репченко Сергей
// Урок 5. Задача 1. Реализуйте перевод из десятичной в двоичную 
// систему счисления с использованием стека.

#include <stdio.h>
#include <stdlib.h>

#define T int
#define MaxN 1000

T Stack[MaxN];
int N = -1;

void push(T i)
{
	if (N < MaxN)
	{
		N++;
		Stack[N] = i;
	}
	else
		printf("Stack overflow");
}

T pop()
{
	if(N != -1)
		return Stack[N--];
	else
		printf("Stack is empty");
}
int main(int argc, char *argv[])
{
	T c;
	int n, i = 0;

	printf("Enter Dec-number for transfer to Bin: ");
	scanf("%d", &n);

    while (n > 0)
    {
        push(n%2);
        n /=2;
        i++;
    }

	while (i > 0)
	{
		printf("%d", pop());
		i--;
	}

    return 0;
}