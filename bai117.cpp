#include<stdio.h>
#include<math.h>
int tongbn(int x, int n);
int main()
{
	int x, n;
	printf("nhap x= "); scanf("%d", &x);
	printf("nhap n= "); scanf("%d", &n);
	int tong=tongbn(x,n);
	printf("tong = %d", tong);
	return 0;
}
int tongbn(int x, int n)
{
	int tong=pow(x,n);

	return tong;
		
}
