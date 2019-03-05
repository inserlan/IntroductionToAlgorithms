// IntroductionToAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Sort.h"

int main()
{
	std::cout << "insertion sort ===================\n";
	int nArrayIns[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	InsertionSort(nArrayIns, 24);
	for (auto v : nArrayIns)
		std::cout << v << ' ';
	std::cout << "\n";

	std::cout << "selection sort ===================\n";
	int nArraySel[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	SelectionSort(nArraySel, 24);
	for (auto v : nArraySel)
		std::cout << v << ' ';
	std::cout << "\n";

	std::cout << "merge sort ===================\n";
	int nArrayMer[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	MergeSort(nArrayMer, 0, 23);
	for (auto v : nArrayMer)
		std::cout << v << ' ';
	std::cout << "\n";
	
	std::cout << "binary search ===================\n";
	int nArrayBin[] = { 1,2,4,5,7,9,13,15,18,23,28,34,38,45,49,58,65,73 };
	for (auto v : nArrayBin)
		std::cout << v << ' ';
	std::cout << "\n";
	int index = BinarySearchIterative(nArrayBin, 1, 0, 17);
	std::cout << "index of 1: " << index << "\n";
	index = BinarySearchRecursive(nArrayBin, 34, 0, 17);
	std::cout << "index of 34: " << index << "\n";
	index = BinarySearchRecursive(nArrayBin, 88, 0, 17);
	std::cout << "index of 88: " << index << "\n";

	std::cout << "check sum ===================\n";
	int nArrayCks[] = { 1,3,5,6,4,2,5,9,7,4,5,3,32,4,3,2,4,3,32,65,8,7,54,88 };
	for (auto v : nArrayCks)
		std::cout << v << ' ';
	std::cout << "\n";
	bool bCheck = CheckSum(nArrayCks, 12, 0, 23);
	if (bCheck)
		std::cout << "exist two elements in array whose sum is exactly 12\n";
	else
		std::cout << "don't exist two elements in array whose sum is exactly 12\n";
}