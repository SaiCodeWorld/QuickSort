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
    
}