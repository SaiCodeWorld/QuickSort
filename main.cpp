/*********************
Name: Sai Sivakumar
Quick Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#include "main.h"

int main(int argc, char **argv)
{
    QuickSort quickTest;
    int testThis[argc-1];
    for (int i = 0; i < argc - 1; i++)
    {
        testThis[i] = atoi(argv[i+1]);
    }

    steady_clock::time_point t1 = steady_clock::now();
    quickTest.sorter(argc-1, testThis);
    steady_clock::time_point t2 = steady_clock::now();

    quickTest.displaySortedArr();
    cout<<endl<<"Milliseconds to Execute: "<<duration_cast<nanoseconds>(t2-t1).count();
    
    return 0;
}