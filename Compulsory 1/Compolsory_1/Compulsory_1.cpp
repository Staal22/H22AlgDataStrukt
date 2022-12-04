#include "DynamicArray.h"
#include "Sorter.h"
#include "Timer.h"



void UseCopyConstructor(DynamicArray<std::string> arr) {
    // do something with copy of array

    // will delete array when we go out of this scope
    // we have to define a custom copy constructor because if we dont, the copy of the array
    // will copy the memory address of the internal_array_ pointer, not the values of the pointer
    // therefore we have to do this manually
}

int main() {

    // testing all constructors
    std::cout << "Starting tests for all constructors\n" << std::endl;
    
    DynamicArray<int> defualtConstructor = DynamicArray<int>();
    DynamicArray<std::string> sizeValueConstructor(10, "HelloDynamicArray");
    DynamicArray<std::string> initializerList = {"first", "second", "third"};
    UseCopyConstructor(initializerList);
    
    std::cout << "All constructors working confirmed" << std::endl << "|" << std::endl;
    

    // creating array and testing all member functions
    
    DynamicArray<int> dyn(6 , -1);
    Sorter<int> sorter;
    
    std::cout << "Starting tests for all member functions of DynamicArray" << std::endl;
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PopulateArrayRandom(0, 100);
    dyn.PopBack();
    dyn.PushBack(1);
    dyn.PushBack(2);
    dyn.PushBack(42);
    dyn.PushBack(64);
    dyn.Expand();
    dyn.TryShrink();
    dyn.At(0) = 46;
    dyn[1] = 5;
    dyn.RemoveAt(3);
    dyn.InsertAt(2, 5);
    dyn.PrintArray();

    std::cout << "All member functions for DynamicArray working confirmed!" << std::endl<< "|" <<std::endl;


    std::cout << "Starting tests for all functions of Sorter" << std::endl;

    // selection sort
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PrintArray(false);
    Timer timerSelection = Timer("SelectionSort");
    sorter.SelectionSort(dyn.GetArray(), dyn.Size());
    timerSelection.Stop();
    dyn.PrintArray(true);
    
    // bubble sort
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PrintArray(false);
    Timer timerBubble = Timer("BubbleSort");
    sorter.BubbleSort(dyn.GetArray(), dyn.Size());
    timerBubble.Stop();
    dyn.PrintArray(true);
    
    // quick sort
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PrintArray(false);
    Timer timerQuick= Timer("QuickSort");
    sorter.QuickSort( 0, dyn.Size() - 1, dyn.GetArray());
    timerQuick.Stop();
    dyn.PrintArray(true);

    // bogo sort
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PrintArray(false);
    Timer timerBogo= Timer("BogoSort");
    sorter.VirginBogoSort(dyn.GetArray(), dyn.Size());
    timerBogo.Stop();
    dyn.PrintArray(true);
    
    // counting sort
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());
    dyn.PrintArray(false);
    Timer timerCounting= Timer("CountingSort");
    sorter.CountingSort(dyn.GetArray(), dyn.Size());
    timerCounting.Stop();
    dyn.PrintArray(true);

    // binary search
    std::cout << "Starting tests for searching algorithms" << std::endl;
    Timer binSearch("BinarySearch");
    sorter.BinarySearch(42, dyn.GetArray(), dyn.Size());
    binSearch.Stop();
    dyn.PrintArray(true);

    //randomize array
    sorter.RandomizeArray(dyn.GetArray(), dyn.Size());

    // linear search
    Timer linSearch("LinearSearch");
    sorter.LinearSearch(42, dyn.GetArray(), dyn.Size());
    linSearch.Stop();
    dyn.PrintArray(true);
}
