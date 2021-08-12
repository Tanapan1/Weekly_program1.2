#include<stdio.h>
int main()
{
	double input[3];
	int i, k;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%lf", &input[i]);
	}
	double max = input[j];
	for (k = 1; k < 3; k++)
	{
		if (max < input[k]) max = input[k];
	}
	printf("Max = %lf", max);
	return 0;
}