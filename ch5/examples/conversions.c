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

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

// month_day: set month, day from day of year
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}
// name_month:
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
	int year = 1970;
	int month = 1;
	int day = 1;
	int *pmonth;
	int *pday; 

	pmonth = &month;
	pday = &day;

	int yearday = day_of_year(year, month, day);
	printf("1970 January 1st was %d day of the year\n", yearday);

	month_day(year, yearday, pmonth, pday);
	printf("1970 1st day of the year was %s %d\n", month_name(*pmonth), *pday);

	return EXIT_SUCCESS;
}
