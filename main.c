#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{ 
    int result;
	result = a+b;
	return result;

}
int square(int n)
{
	int result;
	result = n*n;
	return result;
}

int get_max(int x, int y)
{
	int result;
	if (x>y)
		result = x;
	else
		result = y;
	return result;
}

int main (void)
{
	printf("sumTwo result is %i\n", sumTwo(2,7));
	printf("square result is %i\n", square(5));
	printf("get_max result is %i\n", get_max(10,13));
	
	return 0;
}
