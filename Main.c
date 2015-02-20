#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{
	unsigned int n=0, i=0, j=0;
	unsigned char *a;
	a = (unsigned char*)malloc(n*sizeof(unsigned char));
	scanf("%d", &n); fflush(stdin);
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]); fflush(stdin);
	}
	for (i = 0; i < n - 1; i++) 
	{
		for (j = 0; j < n - i - 1; j++) 
		{
			if (a[j] > a[j + 1]) 
			{ 
				unsigned char smth = a[j]; 
				a[j] = a[j + 1]; 
				a[j + 1] = smth;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}