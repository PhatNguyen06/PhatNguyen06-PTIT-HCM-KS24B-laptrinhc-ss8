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
	
	int arr_max = arr[0][0];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr[i][j] > arr_max)
			{
				arr_max = arr[i][j];
			}
		}
	}
	
	printf("Gia tri lon nhat trong mang la: %d", arr_max);
	
	return 0;
}
