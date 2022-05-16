#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("p = &a;\np: %p\n", p);
	printf("a[0] is: %d\n", *a);
	printf("a[1] is: %d\n", *(a + 1));
	printf("a[2] is: %d\n", *(a + 2));
	printf("a[3] is: %d\n", *(a + 3));
	printf("a[4] is: %d\n", *(a + 4));
	p = a + 1;
	*p = 98;  
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("a[1] after the change is: %d\n", *(a + 1));
	printf("a[3] after the change is: %d\n", *(a + 3));
	return (0);
}
