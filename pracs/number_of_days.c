#include <stdio.h>

/**
 * struct date - struct that stores a date value
 * @days: the day
 * @month: the month
 * @year: the year
 *
 * Description: stores a random date value provided by the user
 * It is defined using typedef
 */
typedef struct date
{
	int days;
	int month;
	int year;
} date;

/**
 * elapsed_days - has the formula used by main function
 * to calculate the number of days between two dates
 * @f: a struct data type that holds a date value
 * there is some ambiguity in the formula regarding what the
 * number of days used in the calculation should be and therefore
 * the result of number of days elapsed in my answer is 4 days less
 * working to resolve that soon
 *
 * Return: a value N
 */
int elapsed_days(date f)
{
	int g, h, i, N;

	if (f.month <= 2)
	{
		g = f.year - 1;
		h = f.month + 13;
		i = f.days;
	}
	else
	{
		g = f.year;
		h = f.month + 1;
		i = f.days;
	}

	N = (1461 * g) / 4 + (153 * h) / 5 + i;

	if ((f.month >= 3 && f.year >= 1800) && (f.month <= 2 
			&& f.year <= 1900))
	{
		N += 1;
	}
	else if ((f.month >= 3 && f.year >= 1700) && (f.month <= 2 
			&& f.year <= 1800))
	{
		N += 2;
	}

	return (N);
}

/**
 * main - asks user to enter two dates and then
 * calculates the difference in number of days
 * between the second date and first date
 *
 * Return: 0 Always success
 */
int main (void)
{
	int elapsed_days(date f);
	int N1, N2, difference;
	date first_date, second_date;

	printf("Enter the first date: {dd mm yyyy} ");
	scanf("%i%i%i", &first_date.days, &first_date.month,
			 &first_date.year);

	N1 = elapsed_days(first_date);

	printf("Enter the second date: {dd mm yyyy} ");
	scanf("%i%i%i", &second_date.days, &second_date.month,
			 &second_date.year);

	N2 = elapsed_days(second_date);

	difference = N2 - N1;

	printf("The number of elapsed days between %i/%i/%.2i and %i/%i/%.2i is %i\n",
		first_date.days, first_date.month, first_date.year % 100,
	       	second_date.days, second_date.month, second_date.year % 100,
		difference);

	return (0);
}
