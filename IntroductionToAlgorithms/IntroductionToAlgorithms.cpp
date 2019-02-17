// IntroductionToAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sort.h"

int main()
{
	int nArray[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	InsertionSort(nArray, 24);
	for (auto v : nArray)
		std::cout << v << ' ';
	std::cout << "\n";
}