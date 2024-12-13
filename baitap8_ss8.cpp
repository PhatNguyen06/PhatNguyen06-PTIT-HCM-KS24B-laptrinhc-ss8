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
	
	int sum = 0;
	printf("\n");
	printf("Duong cheo phu la: ");
	for(int i = 0; i < n; i++)
	{
		sum += arr[i][n - 1 - i];
		printf("%d ", arr[i][n - 1 - i]);
	}
	
	printf("\nTong duong cheo phu la: %d", sum);
	
	return 0;
}
