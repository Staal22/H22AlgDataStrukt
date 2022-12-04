#pragma once

//Time complexity O(log n)
//where n = array length
//Takes a sorted array - returns index of given object to find, if not found returns -1
template <class T>
void Sorter<T>::BinarySearch(T toFind, T arr[], int size) {
    const int foundIndex = binarySearchFunction(toFind, arr, size);
    if (foundIndex != -1) {
        std::cout << toFind << " found at index " << foundIndex << std::endl;
    }
    else {
        std::cout << "Couldn't find element in array" << std::endl;
    }
};

//Time complexity O(n)
//where n = array length
//returns index of given object to find, if not found returns -1
template <class T>
void Sorter<T>::LinearSearch(T toFind, T arr[], int size) {
    const int foundIndex = linearSearchFunction(toFind, arr, size);
    if (foundIndex != -1) {
        std::cout << toFind << " found at index " << foundIndex << std::endl;
    }
    else {
        std::cout << "Couldn't find element in array" << std::endl;
    }
}

template <class T>
void Sorter<T>::SelectionSort(T arr[], int size) {
    int min_index = 0;
    // int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
            if (min_index != i) {
                // swap(&arr[min_index], &arr[i]);
                std::swap(arr[min_index], arr[i]);
            }
        }
    }
}

template <class T>
void Sorter<T>::BubbleSort(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap(arr[j], arr[j + 1]);
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// References
// https://www.youtube.com/watch?v=Hoixgm4-P4M
// https://www.geeksforgeeks.org/quick-sort/
template <class T>
void Sorter<T>::QuickSort(int low, int high, T arr[]) {
    if (low < high) {
        int pivot = QuickSortPartition(low, high, arr);

        QuickSort(low, pivot - 1, arr);
        QuickSort(pivot + 1, high, arr);
    }
}

template <class T>
int Sorter<T>::QuickSortPartition(int low, int high, T arr[]) {
    int firstFromLeft = low;
    int firstFromRight = high;
    T pivot = arr[low];
    while (firstFromLeft < firstFromRight) {

        while (pivot >= arr[firstFromLeft])
            firstFromLeft++;
        while (pivot < arr[firstFromRight])
            firstFromRight--;

        if (firstFromLeft < firstFromRight)
            std::swap(arr[firstFromLeft], arr[firstFromRight]);
    }
    std::swap(arr[low], arr[firstFromRight]);
    return firstFromRight;
}

// int only
template <class T>
void Sorter<T>::ChadRadixSort(T arr[]) {

}


template <class T>
void Sorter<T>::RandomizeArray(T arr[], int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib{0, size - 1};
    for (int i = 0; i < size; i++) {
        std::swap(arr[i], arr[distrib(gen)]);
        // std::cout << distrib(gen);
    }
    std::cout << "Array randomized" << std::endl;
}


// dont expect this to finish in the same day if you give it more than 10 elements...
template <class T>
void Sorter<T>::VirginBogoSort(T arr[], int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib{0, size - 1};

    while (isSorted(arr, size) == false) {
        for (int i = 0; i < size; i++) {
            std::swap(arr[i], arr[distrib(gen)]);
        }
    }
}

// only for ints for now, Template implementation WIP
template <class T>
void Sorter<T>::CountingSort(int arr[], int size) {
    int min = *std::min_element(arr, arr + size);
    int max = *std::max_element(arr, arr + size);
    int range = max - min + 1;
    DynamicArray<int> count(range, 0);
    DynamicArray<int> output(size, 0);

    // counting
    for (int i = 0; i < size; ++i) {
        count[arr[i] - min]++;
    }

    // adding
    for (int i = 1; i < count.Size(); ++i) {
        count[i] = count[i] + count[i - 1];
    }

    // inserting to output
    for (int i = 0; i < size; ++i) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    memcpy(arr, output.GetArray(), sizeof(int) * size);
}

// template <class T>
// void Sorter<T>::CountingSort(T arr[], int size)
// {
//     int min = *std::min_element(arr, arr + size); // why not - 1
//     int max = *std::max_element(arr, arr + size); // why not - 1
//     int range = max - min + 1;
//     Copium count(range, 0);
//     Copium output(size, 0);
//
//     // counting
//     for (int i = 0; i < size; ++i) {
//         count[arr[i] - min]++;
//     }
//
//     // adding
//     for (int i = 1; i < count.Size(); ++i) {
//         count[i] = count[i] + count[i - 1];
//     }
//
//     // inserting to output
//     for (int i = 0; i < size; ++i) {
//         output[count[arr[i] - min] - 1] = arr[i];
//         count[arr[i] - min]--;
//     }
//
//     memcpy(arr, output.arr, sizeof(int) * size);
//     // for (int i = 0; i < size; ++i) {
//     // arr[i] = output[i];
//     // } 
// }

template <class T>
int Sorter<T>::binarySearchFunction(T toFind, T arr[], int size) {
    int leftIndex = 0;
    int rightIndex = size - 1;
    int middleIndex = 0 /*(leftIndex + rightIndex) / 2*/;

    // T left;
    // T right;
    T mid;

    while (leftIndex <= rightIndex) {
        middleIndex = (leftIndex + rightIndex) / 2;

        // left = arr[leftIndex];
        // right = arr[rightIndex];
        mid = arr[middleIndex];

        if (arr[middleIndex] == toFind) {
            return middleIndex;
        }
        if (toFind < mid) {
            rightIndex -= 1;
        }
        else {
            leftIndex += 1;
        }
    }
    return -1;
}

template <class T>
int Sorter<T>::linearSearchFunction(T toFind, T arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == toFind)
            return i;
    }
    return -1;
}


template <class T>
bool Sorter<T>::isSorted(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
};


