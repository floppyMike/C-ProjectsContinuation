// Reverse a String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::cout << "Enter a string." << std::endl;
	std::string text;
	std::getline(std::cin, text);
	std::reverse(text.begin(), text.end());
	std::cout << text << std::endl;


	getchar();
    return 0;
}