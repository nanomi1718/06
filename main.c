#include <stdio.h>

int factorial(int n)
{
	int i;
	int res = 1;
	for (i=1 ; i<=n; i++)
		res = res*i;	
			
	return res;
}

int combination(int n, int r)
{
	int up, down;

	up = factorial(n);
	down = factorial(n-r)*factorial(r);
	return up/down;
}

int main(void)
{
	//variable declare
	int n, r;
	int res;
	
	//input data
	printf("input n and r : ");
	scanf("%d %d", &n, &r);
	
	//compute combination()
	res = combination(n,r);
	//결과출력
	printf("combination result is %d\n", res);
	
	return 0;
}
