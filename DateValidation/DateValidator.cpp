/**
 * This program will take 3 inputs of numbers and determine whether or not they are valid dates on the Gregorian calender and whether or not the
 * date occurs during a common or leap year.
 * @author Mitchell Stephany
 * <pre>
 * Date: October 1, 2021
 * File: DateValidator.cpp
 * Course: csc1253 Section 3 <br>>
 * Programming Project#: 1 <br
 * Instructor: Dr. Duncan
 * </pre>
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int month; int day; int year;
	cout<<"Enter numeric values for the current date [mm dd yyyy] -> ";
	cin >> month; cin >> day; cin >> year;
	string newMonth;
	int leapYear;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		leapYear = 1;
	}
	else
	{
		leapYear = 0;
	}
	if(month == 1)
	{
		newMonth = "January";
		}
				else if(month == 3)
				{
					newMonth = "March";
				}
				else if (month == 4)
				{
					newMonth = "April";
				}
				else if(month == 5)
				{
					newMonth = "May";
				}
				else if (month == 6)
				{
					newMonth = "June";
				}
				else if (month == 7)
				{
					newMonth = "July";
				}
				else if (month == 8)
				{
					newMonth = "August";
				}
				else if (month == 9)
				{
					newMonth = "September";
				}
				else if(month == 10)
				{
					newMonth = "October";
				}
				else if (month == 11)
				{
					newMonth = "November";
				}
				else if(month == 12)
				{
					newMonth = "December";
				}










		if (month < 1 || month > 12)
		{
			cout << month << "/" << day << "/" << year << " is not a date; " << "The month must be in the interval [1,12].";
		}

		else if (day < 1 || day >31)
		{
			cout << month << "/" << day << "/" << year << " is not a date; " << "The day must be in the interval [1,31].";
		}

		else if (year < 1583)
		{
			cout << month << "/" << day << "/" << year << " is not a date; " << "The year must come after 1582.";
		}
		else if(month == 2 && day > 29)
		{
			cout << month << "/" << day << "/" << year << " is not a valid date; " << "The day in February cannot be greater than 29.";
		}
		else if (month == 2 && day == 29 && leapYear != 1)
		{
			cout<<"February cannot have 29 days in a common year.";
		}
		else if (month == 2 && day <= 29)
		{
			if (leapYear == 1)
			{
				cout << "February, " << day << ", " << year << " is in a leap year." << endl;
			}
			else
			{
				cout  << "February, " << day << ", " << year << " is in a common year." << endl;
			}
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31))
		{
			cout << "The day in " << newMonth << " cannot be 31.";
		}
		if (leapYear == 1)
		{
			cout << "The date " << newMonth << " " << day << ", " << year << " is in a leap year.";
		}
		else
		{
			cout << "The date " << newMonth << " " << day << ", " << year << " is in a common year.";
		}
		return 0;
		}



















