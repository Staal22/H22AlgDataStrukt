#pragma once
#include <iostream>

template <class T>
class Node
{
public:
    T data;
    Node* next;
    Node<T>()
    {
        next = nullptr;
    }
};

template <class T>
class SingleLinkedList/* : public Node<T> */
{
public:
    Node<T>* head;
    Node<T>* tail;

    bool noInsertions = true;
    
    SingleLinkedList<T>()
    {
        head = new Node<T>();
        tail = new Node<T>();
        head = tail;
    }
    
    void Add(T data)
    {
        if (noInsertions)
        {
            head->data = data;
            noInsertions = false;
        }
        else
        {
            auto* newNode = new Node<T>;
            newNode->data = data;
            newNode->next = nullptr;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printData()
    {
        Node<T>* p = head;
        while (p != nullptr)
        {
            std::cout << p->data << ", ";
            p = p->next;
        }
        std::cout << std::endl;
    }
    void insertAt(int index, T data)
    {
        Node<T>* p = head;
        int i = 0;
        while (p->next != nullptr && i < index - 1)
        {
            p = p->next;
            i++;
        }
        Node<T>* ANewNode = new Node<T>();
        ANewNode->data = data;
        ANewNode->next = p->next;
        p->next = ANewNode;
    }
    void RemoveAt(int index)
    {
        Node<T>* p = head;
        int i = 0;
        while (p->next != nullptr && i < index - 1)
        {
            p = p->next;
            i++;
        }
        Node<T>* tempNode = p->next;
        p->next = p->next->next;
        tempNode->next = nullptr;
        delete tempNode;
    }
    void RemoveValue(int value)
    {
        Node<T>* p = head;
        if (p->data == value)
        {
            head = p->next;
            p->next = nullptr;
            delete p;
        }
        else
        {
            while (p->next != nullptr && p->next->data != value)
            {
                p = p->next;
            }
            if (p->next != nullptr && p->next->data == value)
            {
                Node<T>* tempNode = p->next;
                p->next = p->next->next;
                tempNode->next = nullptr;
                delete tempNode;
            }
            else
            {
                std::cout << "Value not found" << std::endl;
            }
        }
    }
};