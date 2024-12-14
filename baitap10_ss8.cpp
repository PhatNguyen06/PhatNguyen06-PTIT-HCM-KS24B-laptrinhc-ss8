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
	
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(dem < cnt[arr[i]])
		{
			dem = cnt[arr[i]];
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		if(cnt[arr[i]] == dem)
		{
			printf("%d ", arr[i]);
			cnt[arr[i]] = 0;
		}
	}
	
	
	return 0;
}
