#include<stdio.h>

int main()
{
	int n, m;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	
	while(n != m)
	{
		printf("Yeu cau nhap so hang va so cot bang nhau\n");
		
		printf("Nhap so hang: ");
		scanf("%d", &n);
		printf("Nhap so cot: ");
		scanf("%d", &m);
	}
	
	int arr[n][m];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	return 0;
}
