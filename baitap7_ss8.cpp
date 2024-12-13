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
	printf("Duong cheo chinh la: ");
	for(int i = 0; i < n; i++)
	{
		sum += arr[i][i];
		printf("%d ", arr[i][i]);
	}
	
	printf("\nTong cua duong cheo chinh la: %d\n", sum);
	
	return 0;
}
