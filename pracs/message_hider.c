#include <stdio.h>
#include "encrypt.h"

/**
 * main - reads input and encrpyts it using XOR
 *
 * Return: 0 Always
 */

int main(void)
{
	char msg[80];

	while (fgets(msg, 80, stdin))
	{
		encrypt(msg);
		printf("%s", msg);
	}
	return (0);
}
