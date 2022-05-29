#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * alphabet - checks if a character is alphabet
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 if false
 */
bool alphabet(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (true);
	else
		return (false);
}

/**
 * read - reads a line of text from the terminal
 * @str: buffer where the text will be stored
 *
 */
void read(char str[])
{
	char ch;
	int i = 0;

	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[i - 1] = '\0';
}

/**
 * countWords - counts the number of words in a string
 * @str: the string to  be counted
 * a word is defined as a sequence of one or more alphabetic characters
 * from the occurence of the first alphabetic character all subsequent
 * characters up to the first non alphabteic character are considered to be
 * same word
 *
 * Return: number of words in a string
 */
int countWords(const char str[])
{
	int i, count = 0;
	bool searchingForWord = true, alphabet(const char c);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (alphabet(str[i]))
		{
			if (searchingForWord)
			{
				count++;
				searchingForWord = false;
			}
		}
		else
			searchingForWord = true;
	}
	return (count);
}

/**
 * main - accepts as input a line of text and prints number of words
 * in the text
 *
 * Return: 0 Always success
 */

int main(void)
{
	char text[81];
	int totalwords = 0;
	bool endoftext = false;

	printf("Type in the text.\n");
	printf("Press 'Enter' when done.\n");

	while (!endoftext)
	{
		read(text);
		if (text[0] == '\0')
			endoftext = true;
		else
			totalwords += countWords(text);
	}
	printf("\nThere are %i words in the text.\n", totalwords);

	return (0);
}
