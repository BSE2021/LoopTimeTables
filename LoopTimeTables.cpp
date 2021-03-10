

#include <iostream>
using namespace std;

int main()
{   //declaration should appear in the begining of the main function
	//depending on the data type memory space is allocated
	int i = 0; // i is initialized and declared
	int n; // n is the number of times- declared
	double t; // stores a floating type of value with more precision
	
	// prompting and taking input from the user
	cout << "How many times you want to  print? ";
	cin >> n;

	cout << "Which times table you want? ";
	cin >> t;

	while (i <= n) {
		//cout << "\n Yoobee Colleges \n"; 
		cout << "\n " << t  << " + " << i << " = " << i + t;

		i++; // i = i + 1 means increment and assign to the variable
	}
}

