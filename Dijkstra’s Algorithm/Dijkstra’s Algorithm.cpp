// Dijkstra’s Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include <Graph.h>


int main()
{
	Graph test(9, 
		{
			{ { 0, 1 }, 4 },{ { 0, 7 }, 8 },{ { 1, 7 }, 11 },
			{ { 1, 2 }, 8 },{ { 7, 8 }, 7 },{ { 7, 6 }, 1 },
			{ { 2, 8 }, 2 },{ { 8, 6 }, 6 },{ { 2, 5 }, 4 },
			{ { 6, 5 }, 2 },{ { 2, 3 }, 7 },{ { 3, 5 }, 14 },
			{ { 3, 4 }, 9 },{ { 5, 4 }, 10 }
		});
	std::cout << test.dijkstra(0, 4) << "\n" << test.dijkstra(1, 7) << "\n" << test.dijkstra(5, 5) << "\n" << std::endl;

	Graph testInf(5,
		{
			{ { 0, 2 }, 4 },{ { 1, 3 }, 7 },{ { 3, 4 }, 10 }
		});
	std::cout << testInf.dijkstra(0, 4) << std::endl;


	getchar();
    return 0;
}