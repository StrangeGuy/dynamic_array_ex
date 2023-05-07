// dynamic_array_ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int size{ 0 };
	char confirm = 'y';
	do 
	{
		cout << "Please give me a number if elements you want to work with... \n";
		cin >> size;
		double* arr = new double[size];
		cout << "Now, please give me " << size << " numbers. \n";
		for (auto i{ 0 }; i < size; ++i)
		{
			cin >> arr[i];
		}
		for (auto i{ 0 }; i < size; ++i)
		{
			cout << arr[i] << "\t";
		}
		delete[] arr;
		confirm = 'n';
		cout << "\nPlease enter 'y' if you want to try it again, or any other character, if you want to stop. \n";
		cin >> confirm;
	} while (confirm == 'y');
}

