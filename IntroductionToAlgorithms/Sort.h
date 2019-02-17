#pragma once

template<typename T>
void InsertionSort(T* pArray, int nSize)
{
	for (int j = 1; j < nSize; j++)
	{
		T curr = pArray[j];
		int i = j - 1;
		while ((i >= 0) && (curr < pArray[i]))
		{
			pArray[i + 1] = pArray[i];
			i--;
		}
		pArray[i + 1] = curr;
	}
}