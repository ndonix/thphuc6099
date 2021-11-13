#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("nhap n: "); scanf("%d", &n);
	int tong=sum(n);
	printf("tong = %d", tong);
	return 0;
}
int sum(int n)
{
	int tong=0;
	for(int i=1;i<=n;i++)
		tong+=i;
	return tong;
}
