#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int x;
	printf("Nhap x muon kiem tra co trong mang khong: ");
	scanf("%d", &x);
	
	for(int i = 0; i < n; i++)
	{
		if(x == arr[i])
		{
			printf("Vi tri cua so %d trong mang la %d\n", x ,i);
		}
	}
	
	return 0;
}
