#include <iostream>
#include <vector>


// hash table class that consists of inserting and deleting items 
class HashTableOpenAddress {

public:
    static constexpr int buckets = 15;
    std::vector<int> hashTable;
    // HashTableOpenAddress();
    // HashTableOpenAddress(int buckets_value);
    void insertItem(int key, std::string value);
    void deleteItem(int key);
    int hashFunction(int x) const;
    void displayHash();
    void reHash();
    void printBucketData(int index);
    std::pair<int, std::string> bucket_list[buckets];
    // std::vector<std::pair<int, std::pair<std::string, int>>> bucket_list;
};

// HashTableOpenAddress::HashTableOpenAddress() : buckets(0)
// {
//     
// }
//
// HashTableOpenAddress::HashTableOpenAddress(int buckets_value) : buckets(1), bucket_list(buckets_value)
// {
//     this->buckets = buckets_value;
//     // std::vector<int> table(buckets);
// }

void HashTableOpenAddress::insertItem(int key, std::string value)
{
    int index = hashFunction(key);
    int countLoop = 0;
    while (!bucket_list[index].second.empty() && countLoop < buckets) 
    {
        countLoop++;
        index++;
        if (index >= buckets)
        {
            index = 0;
        }
    }
    if (!(index > buckets))
    {
        std::cout << "Inserting at bucket " << index << " | Key: " << key << std::endl;
        bucket_list[index].first = key;
        bucket_list[index].second = value;
    }
    else
    {
        std::cout << "Hash table full, time to expand and rehash" << std::endl;
    }
}

void HashTableOpenAddress::deleteItem(int key)
{
    int index = hashFunction(key);
    if (bucket_list[index].first != key) 
    {
        index++;
    }
    if (!(index > buckets))
    {
        std::cout << "Removing at bucket " << index << " | Key: " << key << std::endl;
        bucket_list[index].first = NULL;
        bucket_list[index].second.clear();
    }
    else
    {
        std::cout << "Key not found anywhere in hash table" << std::endl;
    }
}

int HashTableOpenAddress::hashFunction(int x) const
{
    const int ret = x % buckets;
    return ret;
}

// display the Hash table
void HashTableOpenAddress::displayHash()
{
    for (int i = 0; i < buckets; i++)
    {
        std::cout << "Bucket "  << i << std::endl;
        printBucketData(i);
    }
}

// increase the size of the hash table when load factor becomes too high,
// and rehash all keys, as the module operation will now give different results
void HashTableOpenAddress::reHash()
{
    
}

void HashTableOpenAddress::printBucketData(int index)
{
    std::cout << " Key: " << bucket_list[index].first << " Value: " << bucket_list[index].second << std::endl;
}

int main()
{
    // i want to have a bucket of this size, this can change if you have larger dataset 
    HashTableOpenAddress hash_table;
    
    // want to add these elements to hash table // if there are strings or other types
    //then hash function needs to change and be more dynamic
    hash_table.insertItem(23, "James");
    hash_table.insertItem(15, "Bob");
    hash_table.insertItem(30, "Charles");
    hash_table.insertItem(27, "Mary");
    hash_table.insertItem(59, "Christopher");
    hash_table.insertItem(123, "Mark");
    hash_table.insertItem(6, "Christine");


    // constexpr int size = std::size(keys);



    // for (const auto key : keys)
    // {
    //     hash_table.insertItem(key);
    // }
    // for (int i = 0; i < size; ++i)
    // {
    //     hash_table.insertItem(keys[i]);
    // }
    
    hash_table.displayHash();
    hash_table.deleteItem(30);
    hash_table.displayHash();

    return 0;
}
