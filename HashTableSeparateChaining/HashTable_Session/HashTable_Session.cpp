#include <iostream>
#include <vector>
#include "LinkedList.h"


// hash table class that consit of instering and deleting items 
class HashTable {

public:
    int buckets;
    std::vector<int> table;
    HashTable();
    HashTable(int value);
    void insertItem(int key);
    void deleteItem(int key);
    int hashFunction(int x) const;
    void displayHash();
    std::vector<SingleLinkedList<int>> bucket_list;
};

HashTable::HashTable() : buckets(0)
{
    
}

HashTable::HashTable(int value) : buckets(1), bucket_list(value)
{
    this->buckets = value;
    // std::vector<int> table(buckets);
}

void HashTable::insertItem(int key)
{
    const int index = hashFunction(key);
    std::cout << "Inserting at bucket " << index << " | Key: " << key << std::endl;
    bucket_list[index].Add(key);
}

void HashTable::deleteItem(int key)
{
    const int index = hashFunction(key);
    std::cout << "Removing at bucket " << index << " | Key: " << key << std::endl;
    bucket_list[index].RemoveValue(key);
}

int HashTable::hashFunction(int x) const
{
    const int ret = x % buckets;
    return ret;
}

// display the Hash table
void HashTable::displayHash()
{
    for (int i = 0; i < buckets; i++)
    {
        std::cout << "Bucket "  << i << std::endl;
        bucket_list[i].printData();
        std::cout << std::endl;
    }
}


int main()
{
    int keys[] = { 15, 11, 27, 8, 12, 20, 30, 22, 25, 102, 155, 25, 14 }; // want to add these elements to hash table // if there are strings or other types
    //then hash function needs to change and be more dynamic // 

    // constexpr int size = std::size(keys);

    HashTable hash_table(7);   // 7 is count of buckets in // i want to have a bucket of this size, this can change if you have larger dataset 

    for (const auto key : keys)
    {
        hash_table.insertItem(key);
    }
    // for (int i = 0; i < size; ++i)
    // {
    //     hash_table.insertItem(keys[i]);
    // }
    
    hash_table.displayHash();
    hash_table.deleteItem(27);
    hash_table.displayHash();

    return 0;
}
