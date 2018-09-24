// RSS Feed Creator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <cmath>

#include "Error.h"
#include "UnitConvertison.h"
#include "Equation.h"

int main()
{
	std::string equ("sin pi");
	std::cout << Equation().solve(equ);


	getchar();
    return 0;
}