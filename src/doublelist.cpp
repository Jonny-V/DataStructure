#include "doublelist.h"
#include<iostream>

bool DoubleList::isEmpty()
{
    return head->next == nullptr ? true : false;
}

void DoubleList::insert(int pos, int key)
{
    BNode *temp = find(pos);
    if(temp == nullptr){
        std::cout<< "Can't find the " << pos << std::endl;
        return;
    }

    BNode *ptr = new BNode();
    ptr->key = key;

    ptr->next = temp;
    ptr->fore = temp->fore;
    temp->fore->next = ptr;
    temp->fore = ptr;
    ++head->key;
}

void DoubleList::del(int pos)
{
    BNode *ptr = find(pos);
    if(ptr == nullptr){
        std::cout<< "Can't find the " << pos << std::endl;
        return;
    }

    ptr->fore->next = ptr->next;
    ptr->next->fore = ptr->fore;
    delete ptr;
    --head->key;
}

void DoubleList::add(int key)
{
    BNode *temp = head;
    while(temp->next != nullptr)
        temp = temp->next;

    BNode *ptr = new BNode();
    ptr->key = key;
    ptr->fore = temp;
    temp->next = ptr;
    ++head->key;
}

BNode *DoubleList::find(int key)
{
    BNode *temp = head;
    while(temp->next != nullptr && temp->next->key != key)
        temp = temp->next;
    if(temp->next == nullptr)
        return nullptr;
    else
        return temp->next;
}

void DoubleList::printDoubleList()
{
    BNode *temp = head;
    if(isEmpty()){
        std::cout<< "Empty List" << std::endl;
        return;
    }
    std::cout<< "The doubly linked list's length is " << head->key << std::endl;
    
    while(temp->next != nullptr)
    {
        std::cout<< temp->key << " ";
        temp = temp->next;
    }
    std::cout<< temp->key << std::endl;
}