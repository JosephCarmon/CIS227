/*
*
*    Name(s) Joe Carmon
*    Class: CIS227
*    Assignment: Week 1
*    Description: Programming Review code
*
*
 */
#include <iostream>
#include <cstring>

using namespace std;


int CalculateAge();



int main()
{

	string stringName;

	cout << "Please Enter Your Name";

	cin >> stringName;

     cout << endl;
     cout << endl;

     cout << CalculateAge();

	return 0;
}

int CalculateAge()
{
	int intAge, intMultiplier;//, intCalculation;

	intMultiplier = 2;
	intAge = 43;

	//intCalculation = intMultiplier*intAge;

	//return intCalculation;
	return intMultiplier*intAge;
}



