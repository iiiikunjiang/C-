#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int temp, m, n, r;
	scanf("%d%%d", &m, &n);
	if (m < n)
	{
		temp = m; m = n; n = temp;
	}
	while (m%n!=0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d", n);

	return 0;
}
