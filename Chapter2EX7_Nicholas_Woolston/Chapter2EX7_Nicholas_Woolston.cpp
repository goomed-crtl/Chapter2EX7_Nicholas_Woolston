
/*
Title: Chapter 2 Exerise 7 - Ocean levels rising
File Name: Chapter2EX7_Nick_Woolston.cpp
Programmer: Nicholas Woolston
Date: 30/08/2024
Requirements: Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of millimeters the ocean level rises per year..

Be sure you have posted your code to GitHub and submitted the URL  in Canvas for that project.

Also be sure you have tested your code - I won't grade your submission if it doesn't get

a clean compile.
*/

#include <iostream>
using namespace std;
const double OceanRise = 1.5;  
int main()
{

	double FiveYears = OceanRise * 5;
	double SevenYears = OceanRise * 7;
	double TenYears = OceanRise * 10;
	double UserInput;
	cout << "The Ocean level in 5 years will have risen " << FiveYears << " milimeters.";
	cout << endl;
	cout << "The Ocean level in 7 years will have risen " << SevenYears << " milimeters";
	cout << endl;
	cout << "The Ocean level in 10 years will have risen " << TenYears << " milimeters.";



}

