#pragma once

// insertion sort
// O(n^2)
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


// merge sort
// O(n*log(n))
template<typename T>
void Merge(T* pArray, int left, int mid, int right)
{
	T* pTempArray = new T[right - left + 1];
	int pos = 0, lpos = left, rpos = mid + 1;
	// sort and put into temp array
	while ((lpos <= mid) && (rpos <= right))
	{
		if (pArray[lpos] < pArray[rpos])
			pTempArray[pos++] = pArray[lpos++];
		else
			pTempArray[pos++] = pArray[rpos++];
	}
	while (lpos <= mid)
		pTempArray[pos++] = pArray[lpos++];
	while (rpos <= right)
		pTempArray[pos++] = pArray[rpos++];
	// copy
	for (int i = 0; i <= (right - left); i++)
		pArray[left + i] = pTempArray[i];

	delete[] pTempArray;
}

template<typename T>
void MergeSort(T* pArray, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		MergeSort(pArray, left, mid);
		MergeSort(pArray, mid + 1, right);
		Merge(pArray, left, mid, right);
	}
}

// binary search
// O(log(n))
template<typename T>
int BinarySearch(T* pArray, T value, int left, int right)
{
	if (right >= left)
	{
		int mid = (right + left) / 2;
		if (pArray[mid] < value)
			return BinarySearch(pArray, value, mid + 1, right);
		else if (pArray[mid] > value)
			return BinarySearch(pArray, value, left, mid - 1);
		else
			return mid;
	}
	return -1;
}

// check sum
// O(n*log(n))
template<typename T>
bool CheckSum(T* pArray, T value, int left, int right)
{
	MergeSort(pArray, left, right);
	int size = right - left + 1;
	for (int i = 0; i < size; i++)
	{
		if (BinarySearch(pArray, value - pArray[i], i + 1, right) != -1)
		{
			return true;
		}
	}
	return false;
}