#include <stdio.h>

int main (void)
{
	int this_year, birth_year, age;
	this_year =  2020;
	scanf("What was the year you were born? %d\n", &birth_year);
	age = this_year - birth_year; 
	printf("You are %d years old.\n", age);
	return 0;
}

