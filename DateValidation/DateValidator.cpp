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
			int month;
			int day;
			int year;

			cout<<"Enter numeric values for the current date [mm dd yyyy] -> ";
			cin>> month;
			cin>> day;
			cin>> year;

				if(month <= 12)
				{
					if(month == 1)
						cout<< "January";
					else if(month == 2)
						cout<< "February";
					else if(month == 3)
						cout<< "March";
					else if(month == 4)
						cout<< "April";
					else if(month == 5)
						cout<< "May";
					else if(month == 6)
						cout<< "June";
					else if(month == 7)
						cout<< "July";
					else if(month == 8)
						cout<< "August";
					else if(month == 9)
						cout<< "September";
					else if(month == 10)
						cout<< "October";
					else if(month == 11)
						cout<< "November";
					else if(month == 12)
						cout<< "December";


				{if(day <= 31)
					cout<< day;

				{if(year >= 1583)
					cout<< year;
				}
				}
				cout<<"The date is "<<month<<"/"<<day<<"/"<<year<<".";
				}
				else
					cout<<month<<"/"<<day<<"/"<<year<<"is not a date.";



}


