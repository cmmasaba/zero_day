#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 * 
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("Value of ccc: %c\n", ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of c before function call: %c\n", c);
	printf("Value of p before function call: %p\n", p);
	modif_my_char_var(p, c);
	printf("Value of c after funtion call: %c\n", c);
	printf("Value of p after funtion call: %p\n", p);
	return (0);
}
