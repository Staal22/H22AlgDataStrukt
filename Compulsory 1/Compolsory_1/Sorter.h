#pragma once
#include "DynamicArray.h"
#include "Random.h"
#include <algorithm>

template <class T>
class Sorter {
public:
    void BinarySearch(T toFind, T arr[], int size);
    void LinearSearch(T toFind, T arr[], int size);

    void RandomizeArray(T arr[], int size);

    void SelectionSort(T arr[], int size);
    void BubbleSort(T arr[], int size);
    void QuickSort(int low, int high, T arr[]);
    // void CountingSort(T arr[], int size);
    void ChadRadixSort(T arr[]);
    void VirginBogoSort(T arr[], int size);

    void CountingSort(int arr[], int size);

private:
    int binarySearchFunction(T toFind, T arr[], int size);
    int linearSearchFunction(T toFind, T arr[], int size);

    int QuickSortPartition(int low, int high, T arr[]);
    bool isSorted(T arr[], int size);
};

#include "Sorter.tpp"