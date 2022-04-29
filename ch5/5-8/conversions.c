/*
 * Filename:    conversions.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        29-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-8, page 112
 *
 * There is no error checking in day_of_year or month_day.
 * Remedy this defect.
 */
#include <stdio.h>
#include <stdlib.h>

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// day_of_year: set day of year from month & day
int day_of_year(int year, int month, int day)
{
	int i, leap;

	if (year < 1970 || year > 2038) {
 		fprintf(stderr, "There was no time before UNIX epoch - January 1, 1970\n"
				"nor it will be after 19 January 2038\n");
      		exit(EXIT_FAILURE);
	} else if (month < 1 || month > 12) {
 		fprintf(stderr, "We are using 12 month calendar here\n");
      		exit(EXIT_FAILURE);
	}
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	if (day < 1 || day > daytab[leap][month]) {
      		fprintf(stderr, "Input does not make any sense! Exiting...\n");
      		exit(EXIT_FAILURE);
	}
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

// month_day: set month, day from day of year
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i;
	int leap;
	int daytest;
	int j;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

	daytest = 0;
	for (j = 1; j < 13; j++)
		daytest += daytab[leap][j];

	if (yearday < 1 || yearday > daytest) {
		if (leap)
      			fprintf(stderr, "Leap year has 366 days\n");
		else 
      			fprintf(stderr, "Common year has 365 days\n");
      	exit(EXIT_FAILURE);
	}

	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}
// name_month: pointer array to map month name
char *month_name(int n)
{
	static char *name[] = {"Illegal month", "January", "February", 
			       "March", "April", "May", "June", "July", 
			       "August", "September", "October", 
			       "November", "December"};
	
	return (n < 1 || n > 12) ? *name : name[n];
}

int main(void) 
{
	int year = 2038;
	int month = 1;
	int day = 19;
	int *pmonth;
	int *pday; 

	pmonth = &month;
	pday = &day;

	int yearday = day_of_year(year, month, day);
	printf("%d %s %d --> %d day of the year\n", year, month_name(month), day, yearday);


	month_day(year, yearday, pmonth, pday);
	printf("%d %d day of the year --> %s %d\n", year, *pmonth, month_name(*pmonth), *pday);

	return EXIT_SUCCESS;
}
