/*
Philip Fernandez
Assignment 01 Question 02
9/1/16


This program calculates the average
of three given scores.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Define three varibles to hold scores
	// Define one variable to hold the sum of the scores
	int score1 = 28,
		score2 = 87,
		score3 = 98,
		sum = score1 + score2 + score3;

	// Define a double variable to hold the average
	// Divide the sum of scores by 3.0 for average
	// Use decimal value for divisor to avoid loss 
	// of potential fractional part in result
	double averageScore = sum / 3.0;

	// Display the average score
	cout << "The average score is " << averageScore << "\n";

	return 0;
}


