#include<stdio.h>

int main()
{
	int n, m;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	
	
	int arr[n][m];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n");
	int sum = 0;
	for(int j = 0; j < m; j++)
	{
		sum += arr[0][j];
	}
	
	for(int i = 1; i < n - 1; i++)
	{
		sum += arr[i][m - 1];
	}
	
	for(int j = m - 1; j >= 0; j--)
	{
		sum += arr[n - 1][j];
	}
	
	for(int i = n - 2; i > 0; i--)
	{
		sum += arr[i][0];
	}
	
	printf("%d", sum);
	
	
	return 0;
}
