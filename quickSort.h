/*********************
Name: Sai Sivakumar
Quick Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#define ARR_BEGIN 0

#include <iostream>
using std::cout;
using std::cin;

class QuickSort
{
    public:
        QuickSort();
        ~QuickSort();

        bool sorter(int, const int[]);
        void displaySortedArr();

    private:
        int *solvedArr;
        int arraySize;

        void quickSort(int, int);
        int partition(int, int);
        void swap(int, int);
};

#endif //QUICK_SORT_H