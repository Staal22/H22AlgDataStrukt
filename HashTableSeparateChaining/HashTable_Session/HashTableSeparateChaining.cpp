#include <iostream>
#include <vector>
#include "LinkedList.h"


// hash table class that consists of inserting and deleting items 
class HashTableSeparateChain {

public:
    int buckets;
    std::vector<int> table;
    HashTableSeparateChain();
    HashTableSeparateChain(int value);
    
    void insertItem(int key);
    void deleteItem(int key);
    void displayHash();
    void reHash(HashTableSeparateChain& old_table);

    int hashFunction(int x) const;
    float loadFactor();

    std::vector<SingleLinkedList<int>> bucket_list;
    
    float loadLimit = 0.6f;
};

HashTableSeparateChain::HashTableSeparateChain() : buckets(0)
{
    
}

HashTableSeparateChain::HashTableSeparateChain(int value) : buckets(1), bucket_list(value)
{
    this->buckets = value;
    // std::vector<int> table(buckets);
}

void HashTableSeparateChain::insertItem(int key)
{
    const int index = hashFunction(key);
    std::cout << "Inserting at bucket " << index << " | Key: " << key << std::endl;
    bucket_list[index].Add(key);
}

void HashTableSeparateChain::deleteItem(int key)
{
    const int index = hashFunction(key);
    std::cout << "Removing at bucket " << index << " | Key: " << key << std::endl;
    bucket_list[index].RemoveValue(key);
}

int HashTableSeparateChain::hashFunction(int x) const
{
    const int ret = x % buckets;
    return ret;
}

float HashTableSeparateChain::loadFactor()
{
    float count{};
    for (int i = 0; i < buckets; ++i)
    {
        if (bucket_list[i].countNodes() > 0 && bucket_list[i].getAt(0) != 0)
            count++;
    }
    return count/buckets;
}

// display the Hash table
void HashTableSeparateChain::displayHash()
{
    for (int i = 0; i < buckets; i++)
    {
        std::cout << "Bucket "  << i << std::endl;
        bucket_list[i].printData();
        std::cout << std::endl;
    }
}

// increase the size of the hash table when load factor becomes too high,
// and rehash all keys, as the module operation will now give different results
void HashTableSeparateChain::reHash(HashTableSeparateChain& old_table)
{
    std::cout << "--------- Rehashing table ---------" << std::endl;
    HashTableSeparateChain temp_table(old_table.buckets * 2);
    for (int i = 0; i < old_table.buckets; ++i)
    {
        for (int j = 0; j < old_table.bucket_list[i].countNodes(); ++j)
        {
            if (old_table.bucket_list[i].getAt(j) != 0)
                temp_table.insertItem(old_table.bucket_list[i].getAt(j));
        }
    }
    old_table = temp_table;
    std::cout << "--------- Table rehashed ---------" << std::endl;
}

int main()
{
    int keys[] = { 15, 11, 27, 8, 12, 20, 30, 22, 25, 102, 155, 25, 14 }; // want to add these elements to hash table // if there are strings or other types
    //then hash function needs to change and be more dynamic // 

    // constexpr int size = std::size(keys);

    HashTableSeparateChain hash_table(7);   // 7 is count of buckets in // i want to have a bucket of this size, this can change if you have larger dataset 

    for (const auto key : keys)
    {
        if (hash_table.loadFactor() > hash_table.loadLimit)
            hash_table.reHash(hash_table);
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
