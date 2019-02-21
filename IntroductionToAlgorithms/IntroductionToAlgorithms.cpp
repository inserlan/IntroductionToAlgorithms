// IntroductionToAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sort.h"

int main()
{
	std::cout << "insertion sort ===================\n";
	int nArray1[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	InsertionSort(nArray1, 24);	
	for (auto v : nArray1)
		std::cout << v << ' ';
	std::cout << "\n";

	std::cout << "merge sort ===================\n";
	int nArray2[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	MergeSort(nArray2, 0, 23);
	for (auto v : nArray2)
		std::cout << v << ' ';
	std::cout << "\n";
	
	std::cout << "binary search ===================\n";
	int nArray3[] = { 1,2,4,5,7,9,13,15,18,23,28,34,38,45,49,58,65,73 };
	for (auto v : nArray3)
		std::cout << v << ' ';
	std::cout << "\n";
	int index = BinarySearch(nArray3, 1, 0, 17);
	std::cout << "index of 1: " << index << "\n";
	index = BinarySearch(nArray3, 34, 0, 17);
	std::cout << "index of 34: " << index << "\n";
	index = BinarySearch(nArray3, 88, 0, 17);
	std::cout << "index of 88: " << index << "\n";

	std::cout << "check sum ===================\n";
	int nArray4[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	for (auto v : nArray4)
		std::cout << v << ' ';
	std::cout << "\n";
	bool bCheck = CheckSum(nArray4, 12, 0, 23);
	if (bCheck)
		std::cout << "exist two elements in array whose sum is exactly 12\n";
	else
		std::cout << "don't exist two elements in array whose sum is exactly 12\n";
}