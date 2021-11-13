#include <stdio.h>
int tb(int m, int n);
int main()
{
	char name;
	float m, n;
	printf("Nhap ho va ten cua ban: ");
	scanf("%c", &name);
	printf("nhap diem toan: \n");
	scanf("%f", &m);
	printf("nhap diem ngu van: ");
	scanf("%f", &n);
	float dtb=tb(m,n);
	printf("ho ten: %c", name);
	printf("diem trung binh: %f", dtb);
	
	return 0;
}
int tb(int m, int n)
{
	float trungbinh=(m+n)/2;
	return trungbinh;
}

