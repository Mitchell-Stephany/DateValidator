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


		int main(){

		int month; int day; int year;
		cout<<"Enter numeric values for the current date [mm dd yyyy] -> ";
		cin >> month; cin >> day; cin >> year;

		if(month < 1 || month >12)
		{
			cout<<month<<"/"<<day<<"/"<<year<<" is not a date; "<<"The month must be in the interval [1,12].";
		}

		else if(day < 1 || day >31)
		{
			cout<<month<<"/"<<day<<"/"<<year<<" is not a date; "<<"The day must be in the interval [1,31].";
		}

		else if(year < 1583)
		{
			cout<<month<<"/"<<day<<"/"<<year<<" is not a date; "<<"The year must come after 1582.";
		}
		else if(month == 2 && day <= 28)
		{	cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is in a";

		}
		else if(month == 2 && day == 29)
		{
			cout<<"February cannot have 29 days in a";
		}
		else if(month == 2 && day > 29)
		{
			cout<<month<<"/"<<day<<"/"<<year<<" is not a valid date; "<<"The day in February cannot be greater than 29. ";
		}
		if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day <= 31) && (year >= 1583))
		{
			cout<<"The date ";
		}
		if(month == 1)
		{
			cout<<"January";
		}
		else if(month == 3)
		{
			cout<< "March";
		}
		else if(month == 5)
		{
			cout<<"May";
		}
		else if(month == 7)
		{
			cout<<"July";
		}
		else if(month == 8)
		{
			cout<<"August";
		}
		else if(month == 10)
		{
			cout<<"October";
		}
		else if(month == 12)
		{
			cout<<"December";
		}

//		cout<<day<<","<<year<<" is in a";

		if((month == 4 || month == 6 || month == 9 || month == 11) && (day <= 30) && (year >= 1583))
		{
			cout<<"The date "<<day<<","<<year<<" is in a";
		}
		else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		{
			cout<<"The day in ";
		}



		if(month == 4)
		{
			cout<< "April cannot be 31.";
		}
		if(month == 6)
		{
			cout<< "June cannot be 31.";
		}
		if(month == 9)
		{
			cout<< "September cannot be 31.";
		}
		if(month == 11)
		{
			cout<< "November cannot be 31.";
		}

		}













