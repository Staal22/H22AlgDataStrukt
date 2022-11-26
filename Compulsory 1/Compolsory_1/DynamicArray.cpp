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


template <class T>
DynamicArray<T>::DynamicArray() : DynamicArray(1, T()) {
}

template <class T>
DynamicArray<T>::DynamicArray(int size, T value) {
    array_capacity = 1;
    internal_array_ = new T[array_capacity];

    while (array_capacity < size) {
        Expand();
    }

    array_size_ = size;
    for (int i = 0; i < array_size_; ++i) {
        internal_array_[i] = value;
    }
}

/**
 * \brief example DynamicArray<int> arr = {1,2,3,4,5,6,8,1};
 * \param initList list, the list to intilize as values of DynamicArray
 */
template <class T>
DynamicArray<T>::DynamicArray(std::initializer_list<T> initList) : DynamicArray(initList.size(), T()) {
    int count = 0;
    for (T element : initList) {
        internal_array_[count] = element;
        ++count;
    }
    return;
}


template <class T>
DynamicArray<T>::DynamicArray(const DynamicArray& original) {
    array_size_ = original.array_size_;
    array_capacity = original.array_capacity;

    internal_array_ = new T[array_capacity];

    for (int i = 0; i < array_size_; ++i) {
        internal_array_[i] = original.GetArray()[i];
    }

    // cant use memcpy becouse it does not work with complex types like strings
    // memcpy(internal_array_, original.internal_array_, sizeof(T) * array_size_);
}

template <class T>
DynamicArray<T>::~DynamicArray() {
    delete[] internal_array_;
}


template <class T>
void DynamicArray<T>::PopulateArrayRandom(int minInclusive, int maxInclusive) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> intDistribution{minInclusive, maxInclusive};
    for (int i = 0; i < array_size_; ++i) {
        int d = intDistribution(gen);
        At(i) = d;
    }
}

template <class T>
void DynamicArray<T>::InitArray(int size) {
    internal_array_ = new T[size];
    count_items = 0;
    array_size_ = size;
}

template <class T>
void DynamicArray<T>::PrintArray(bool newLine) {
    std::cout << "Stats -> array_size_ " << array_size_ << " | array_capacity " << array_capacity << " || ";
    for (int i = 0; i < array_size_; i++) {
        std::cout << internal_array_[i];
        std::cout << ' ';
    }
    std::cout << std::endl;
    if (newLine) {
        std::cout << "|" << std::endl;
    }
    
}

template <class T>
T& DynamicArray<T>::operator[](const int& input) {
    return At(input);
}

template <class T>
T* DynamicArray<T>::GetArray() const {
    return internal_array_;
}

template <class T>
int DynamicArray<T>::Size() const {
    return array_size_;
}

template <class T>
int DynamicArray<T>::Capacity() const {
    return array_capacity;
}


template <class T>
void DynamicArray<T>::swap(T* a, T* b) {
    T temp = *b;
    *b = *a;
    *a = temp;
}


template <class T>
void DynamicArray<T>::PopBack() {
    if (array_size_ >= 1) {
        // internal_array_[--array_size_] = NULL;
        array_size_--;
        TryShrink();

    }
}

template <class T>
void DynamicArray<T>::PushBack(const T addition) {
    if (array_size_ >= array_capacity) {
        Expand();
        internal_array_[array_size_] = addition;
        array_size_++;
    }
    else {
        internal_array_[array_size_] = addition;
        array_size_++;
    }
}

template <class T>
void DynamicArray<T>::Expand() {
    T* temp;
    array_capacity *= 2;
    temp = new T[array_capacity];
    // array_size_ *= 2;
    for (int i = 0; i < array_size_; i++) {
        temp[i] = internal_array_[i];
    }

    // it's not dangerous to delete null ptr, therefore we can have this here
    delete[] internal_array_;

    internal_array_ = temp;
}

template <class T>
void DynamicArray<T>::TryShrink() {

    if (!(array_size_ < array_capacity / 2))
        return;

    T* temp;
    array_capacity /= 2;
    temp = new T[array_capacity];
    for (int i = 0; i < array_size_; i++) {
        temp[i] = internal_array_[i];
    }

    // it's not dangerous to delete null ptr, therefore we can have this here
    delete[] internal_array_;

    internal_array_ = temp;
}

template <class T>
T& DynamicArray<T>::At(const int& index) {
    if (index < 0 || index >= array_size_) {
        throw std::runtime_error("index was out of range: index " + std::to_string(index) +
            " | arraySize " + std::to_string(array_size_));
    }
    else {
        return internal_array_[index];
    }
}

template <class T>
void DynamicArray<T>::RemoveAt(const int& index) {
    if (index < 0 || index >= array_size_) {
        throw std::runtime_error("Index of RemoveAt() was out of range ");
    }

    int copySize = array_size_ - index - 1;
    T* copy = new T[copySize];

    for (int i = index + 1; i < index + 1 + copySize; ++i) {
        copy[i - index - 1] = internal_array_[i];
    }

    for (int i = 0; i < copySize; ++i) {
        internal_array_[index + i] = copy[i];
    }
    array_size_--;

    // cant use memcpy for complex types
    // memcpy(copy, internal_array_ + index + 1, sizeof(T) * copySize);
    // memcpy(internal_array_ + index, copy, sizeof(T) * copySize);
}

template <class T>
void DynamicArray<T>::InsertAt(const int& index, const T& value) {
    if (index < 0 || index >= array_size_) {
        throw std::runtime_error("Index of InsertAt() was out of range " + std::to_string(index));
    }

    array_size_++;

    if (array_size_ >= array_capacity)
        Expand();

    for (int i = array_size_; i > index; i--) {
        internal_array_[i] = internal_array_[i - 1];
    }
    internal_array_[index] = value;

    // cant use memmove on complex types
    // memmove(internal_array_ + index + 1,
    //         internal_array_ + index,
    //         sizeof(T) * (array_size_ - index - 1));

    At(index) = value;
}
