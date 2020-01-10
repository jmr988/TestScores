# include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double* scores = nullptr;
	double total = 0.0;
	double average;
	int numTests;

	//Get number of test scores 
	cout << " Enter total number of test scores: ";
	cin >> numTests;

	scores = new double[numTests]; //Allocate memory

	// Get scores for each test
	cout << "Enter test scores: "<< endl;
	for (int count = 0; count < numTests; count++)
	{
		cout << "Test " << (count + 1) << ": ";
		cin >> scores[count];
	}

	// Calculate Total 
	for (int count = 0; count < numTests; count++)
	{
		total += scores[count];
	}

	//Calculate the average of scores 
	average = total / numTests;

	//Display
	cout << setprecision(2) << fixed << showpoint;
	cout << "\n\nTotal test scores: " << total << endl;
	cout << "Average of test scores: " << average << endl;


}