#pragma once

// O(lgn)
template<typename T>
void MaxHeapify(T* pArray, int index, int nSize)
{
	int li = index * 2;
	int ri = index * 2 + 1;
	int largest = index;

	// left
	if ((li <= nSize) && (pArray[li - 1] > pArray[index - 1]))
		largest = li;
	else
		largest = index;

	// right
	if ((ri <= nSize) && (pArray[ri - 1] > pArray[largest - 1]))
		largest = ri;

	// exchange
	if (largest != index)
	{
		T temp = pArray[largest - 1];
		pArray[largest - 1] = pArray[index - 1];
		pArray[index - 1] = temp;
		// next
		MaxHeapify(pArray, largest, nSize);
	}
}

// O(n)
template<typename T>
void BuildMaxHeap(T* pArray, int nSize)
{
	// max heapify except leaves
	for (int i = nSize / 2; i >= 1; i--)
	{
		MaxHeapify(pArray, i, nSize);
	}
}

// O(nlgn)
template<typename T>
void HeapSort(T* pArray, int nSize)
{
	BuildMaxHeap(pArray, nSize);
	for (int i = nSize; i >= 2; i--)
	{
		// exchange
		T temp = pArray[i - 1];
		pArray[i - 1] = pArray[0];
		pArray[0] = temp;
		MaxHeapify(pArray, 1, i - 1);
	}
}