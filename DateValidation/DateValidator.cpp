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
		string monthString = "The month must be in the interval [1,12].";
		string dayString = "The day must be in the interval [1,31].";
		string yearString = "The year must come after 1582.";
		string febString = "The day in February cannot be greater than 29. ";

		cout<<"Enter numeric values for the current date [mm dd yyyy] -> ";
		cin>> month;cin>> day;cin>> year;

		if(month <= 12 && day <= 31 && year > 1583)
			cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is in a "<<"common or leap year code"<<". ";

			else if(month == 2 && day > 28)
				cout<<month<<"/"<<day<<"/"<<year<<" is not a valid date; ";


		if(month < 1 || month >12)
				cout<<monthString;
			else if(day < 1 || day >31)
				cout<<dayString;
			else if(year < 1583)
				cout<<yearString;
			else if(month == 2 && day > 28)
				cout<<febString;
		}




//				else if(month < 1 || month >12)
//				{
//					cout<<"The month must be in the interval [1,12].";
//				}
//				else if(day < 1 || day >31)
//				{
//					cout<<"The day must be in the interval [1,31].";
//					}
//
//				else if(year < 1583)
//				{
//					cout<<"The year must come after 1582.";
//					}
//
//				else if(day < 1 || day >31){
//					cout<<"The day must be in the interval [1,31].";
//				}
//
//				else
//					cout<<month<<"/"<<day<<"/"<<year<<"is not a valid date. ";
//
//
//
//}


