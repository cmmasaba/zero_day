#include <stdio.h>
#include <unistd.h>

/**
 * main - simulates an application to order pizza
 * it reads options from the command line that direct program execution
 * @argc: number of command line options
 * @argv: array of pointers to the command line options
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0;
	char ch;
	int count;

	/*using the built-in getopt to read user command lineoptions*/
	while ((ch = getopt(argc, argv, "d:t")) != -1)
	{
		switch (ch)
		{
			case 'd':
				delivery = optarg;
				break;
			case 't':
				thick = 1;
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg);
				return (1);
		}
	}

	/*this skips the options that have been checked*/
	argc -= optind;
	argv += optind;

	if (thick)
		puts("Thick crust.");

	if (delivery[0])
		printf("To be delivered %s.\n", delivery);

	puts("Ingredients:");

	/*reads the command line arguments for ingredients*/
	for (count = 0; count < argc; count++)
		puts(argv[count]);
	/**
	 * another way of reading the command line arguments
	 * in this case you don't needargc -= optind and argv += optind
	 *
	 * for (; optind < argc; optind++)
	 * 	puts(argv[optind]);
	 */
	return (0);
}
