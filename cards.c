#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to evaluate face values
 *
 * Return: 0 Always successful
 */
int main(void)
{
	char card_name[3];

	puts("Enter the card name: ");
	scanf("%2s", card_name);
	int val = 0;

	if (card_name[0] == 'K')
	{
		val = 10;
	}
	else if (card_name[0] == 'Q')
	{
		val = 10;
	}
	else if (card_name[0] == 'J')
	{
		val = 10;
	}
	else if (card_name[0] == 'A')
	{
		val = 11;
	}
	else
	{
		val = atoi(card_name);
	}
	printf("The card value is: %i\n", val);
	return (0);
}