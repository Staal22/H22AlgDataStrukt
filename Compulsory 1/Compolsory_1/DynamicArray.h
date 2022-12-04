#pragma once
#include <cstdlib>
#include <cstring>
#include <future>
#include <iostream>
#include <string>
#include <random>


template <class T>
class DynamicArray {
public:
    DynamicArray();
    DynamicArray(int size, T value);
    DynamicArray(std::initializer_list<T> initList);
    DynamicArray(const DynamicArray& original); // copy constructor
    ~DynamicArray();
    void PopBack();
    void PushBack(const T addition);
    void Expand();
    void TryShrink();
    T& At(const int& index);
    void RemoveAt(const int& index);
    void InsertAt(const int& index, const T& value);

    void PopulateArrayRandom(int minInclusive, int maxInclusive);
    void InitArray(int size);
    void PrintArray(bool newLine = true);

    T& operator[](const int& input);
    //getters and setters
    //-----------------------
    T* GetArray() const;
    int Size() const;
    int Capacity() const;

    // misc
    void swap(T* a, T* b);

private:
    T* internal_array_ = nullptr;
    int array_size_ = 0;
    int array_capacity = 1;
    int count_items = 0;

};

#include "DynamicArray.tpp"