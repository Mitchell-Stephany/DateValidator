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
using namespace std;


int main()
{
	cout<<"Enter numeric values for the current date [mm dd yyyy] -> ";
	int month; int day; int year;
	cin >> month; cin >> day; cin >> year;
	int leapYear = 0;
	string newMonth;
	string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	for (int i = 0; i <= 11; i++){
		if ((month - 1) == i){
			newMonth = months[i];
		}
	}
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		leapYear = 1;
	}
	if (month < 1 || month > 12){
		cout << month << "/" << day << "/" << year << " is not a date; " << "The month must be in the interval [1,12].";
	}
	else if (day < 1 || day >31){
		cout << month << "/" << day << "/" << year << " is not a date; " << "The day must be in the interval [1,31].";
	}
	else if (year < 1583){
		cout << month << "/" << day << "/" << year << " is not a date; " << "The year must come after 1582.";
	}
	else if(month == 2 && day > 29){
		cout << month << "/" << day << "/" << year << " is not a date; " << "The day in February cannot be greater than 29.";
	}
	else if (month == 2 && day == 29 && leapYear != 1){
		cout << month << "/" << day << "/" << year << " is not a date; February cannot have 29 days in a common year.";
	}
	else if (month == 2 && day <= 29){
		if (leapYear == 1){
			cout << "The date February " << day << ", " << year << " is in a leap year." << endl;
		}
		else{
			cout  << "The date February " << day << ", " << year << " is in a common year." << endl;
		}
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31)){
		cout << month << "/" << day << "/" << year << " is not a date. The day in " << newMonth << " cannot be 31.";
	}
	else if (leapYear == 1){
		cout << "The date " << newMonth << " " << day << ", " << year << " is in a leap year.";
	}
	else if (leapYear == 0){
		cout << "The date " << newMonth << " " << day << ", " << year << " is in a common year.";
	}
	return 0;
}


















