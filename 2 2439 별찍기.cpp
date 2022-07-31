#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>

int main_2439()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j < N - i - 1)
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
	return 0;
}