// Lab_1.cpp : Defines the entry point for the console application.
//Carlton O. Wilcox
//Brandon Endsley,James Schuchardt, Jon Caldwell, Matt McMenamin and I worked on this lab together

#include "stdafx.h"
#include <iostream>
#include<string>
#include<fstream>
using std::cout;
using std::cin;
using std::endl;


using std::string;


using std::ifstream;


int main()
{
	string filename;
	double num1 = 0, num2 = 0, numLast1 = 0, numLast2 = 0, temp;
	int count = 0;
	cout << "Would you kindly enter a filename:";
	cin >> filename;
	ifstream inFile;
	inFile.open(filename);
		

		inFile >> num1;
		inFile >> num2;
		inFile >> numLast2;
		
		


		inFile >> temp;
		count = 3;


		while (!inFile.fail())
		{
			numLast1 = numLast2;
			numLast2 = temp;
			inFile >> temp;
			count++;
		}

		cout << "First Number:" << num1 << "\n" << "Second Number:" << num2 << "\n" << "Second to Last Number:" << numLast1 << "\n" << "Last Number:" << numLast2 << "\n" << "Total Count:" << count << "\n";

		inFile.close();


	

	return 0;

}

