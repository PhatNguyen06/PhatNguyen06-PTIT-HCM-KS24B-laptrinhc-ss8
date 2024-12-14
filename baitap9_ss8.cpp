#include<stdio.h>

int cnt[1000001] = {0};

int main()
{
	int n;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		cnt[arr[i]]++;
	}
	
	int dem = 0, res;
	for(int i = 0; i < n; i++)
	{
		if(dem < cnt[arr[i]])
		{
			dem = cnt[arr[i]];
			res = arr[i];
		}
	}
	
	printf("%d ", res);
	
	return 0;
}
