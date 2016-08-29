// Philip Fernandez
// Assignment 01 Question 02

/*
This program calculates the average
of three given scores.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare three varibles to hold scores
	// Declare one variable to hold the sum of the scores
	int score1 = 28,
		score2 = 87,
		score3 = 98,
		sum = score1 + score2 + score3;
	// Declare a double variable to hold the average
	// Use static cast on variable sum to avoid 
	// truncating any fractional value of the average
	double averageScore = static_cast<double>(sum) / 3;

	// Display the average score
	cout << "The average score is " << averageScore << "\n";

	return 0;
}