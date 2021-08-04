/*********************
Name: Sai Sivakumar
Quick Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#include "quickSort.h"

//Public Methods
QuickSort::QuickSort()
{
    arraySize = 0;
}

QuickSort::~QuickSort() {}

bool QuickSort::sorter(int size, const int fixItUp[])
{
    arraySize = size;

    int copyOrigArr[arraySize];
    solvedArr = copyOrigArr;

    for (int i = 0; i < arraySize; i++)
    {
        copyOrigArr[i] = fixItUp[i];
    }

    quickSort(ARR_BEGIN, arraySize);
}

//Private Methods
void QuickSort::quickSort(int begin, int end)
{
    if (begin < end)
    {
        int p = partition(begin, end);
        quickSort(begin, p-1);
        quickSort(p+1, end);
    }
}

int QuickSort::partition(int start, int finish)
{
    int pivot = solvedArr[finish];
    int pivotIndex = start;
    for(int i = start; i < finish; i++)
    {
        if(solvedArr[i] <= pivot) {
            swap(i, pivotIndex);
            pivotIndex++;
        }
    }
    swap(finish, pivotIndex);
    return pivotIndex;
}

void QuickSort::swap(int currentLocation, int pivotIndex)
{

}