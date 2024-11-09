/*
Title: Chapter 5 exercise 11: Population
File Name: Chapter5.ex11/cpp
Programmer: Patrick Maloon
Date: 11/9

Requirements:
Write a program that will predict the size of a population of organisms.

The program should ask the user for the starting number of organisms,

their average daily population increase (as a percentage),

and the number of days they will multiply. A loop should display the size of the population for each day.

Input Validation: Do not accept a number less than 2 for the starting size of the population.

Do not accept a negative number for average daily population increase.

Do not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
using namespace std;


int main() 
{
	float startingPopulation, avgIncrease, dailyPopulation;
	int numDays;

	cout << "Enter the starting population size of the organism: ";
		while (!(cin >> startingPopulation) || startingPopulation < 2)
		{
			cout << "Error! Starting population size must be 2 or greater." << endl;
			cout << "Re-enter starting population size: ";
	
		}

	cout << "What is the average daily population increase (%): ";
		while (!(cin >> avgIncrease) || avgIncrease < 0)
		{
			cout << "Error! Average daily increase must be greater than 0." << endl;
			cout << "Re-enter average population increase" << endl;
		}

	avgIncrease /=100;

	cout << "Enter the number of days the population will multiply: ";
		while (!(cin >> numDays) || numDays < 1)
		{
			cout << "Error! Number of days must be greater than 1." << endl;
			cout << "Re-enter the number of days: " << endl;
		}

	for (int i = 0; i < numDays; i++)
	{
		cout << "Population size for day " << (i + 1);
		cout << ": " << startingPopulation
			<< endl;

		startingPopulation +=
			(startingPopulation * avgIncrease);
	}
	return 0;
}
