#include<stdio.h>
void cfb()
{
	int s;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			s = i * j;
			printf("%d*%d=%d ", i, j, s);
		}
		printf("\n");
	}
}
int main()
{
	cfb();
	return 0;
}