// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	if (str.size() == 0)
	{
		std::cout << "Invalid";

	}
	int q = str.size() - 1;
	for (int i = str.size()-1; i >0; i--)
	{
		if (str[i] == ' ')
		{
			for (int p = i; p <= q; p++)
			{
				if (str[p] != ' ')
				{
					std::cout << str[p];
				}

			}
			std::cout << ' ';
			while (str[i] == ' ')
			{
				i--;
			}
			q = i;
			
		}
	}
	int a = 0;
	while (str[a] == ' ')
	{
		a++;
	}
	for (int a = 0; a <= str.size() - 1; a++)
	{
		if (str[a] != ' ')
		{
			std::cout << str[a];
		}
		else
		{
			break;
		}
		
	}







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
