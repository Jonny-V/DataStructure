#include"list.h"
#include<iostream>

bool List::isEmpty()
{
    return head->next == nullptr ? true : false;
}

Node *List::findPrevious(int pos)
{
    if(isEmpty()){
 //     std::cout<< "This is empty list" << std::endl;
        return nullptr;
    }
    Node *temp = head->next;
    while( temp->next != nullptr && temp->next->key != pos)
        temp = temp->next;
    return temp;
}

void List::insert(int pos, int key)
{
    Node *temp = findPrevious(pos);
    if(temp == nullptr){
        std::cout<< "insert failed" << std::endl;
        return;
    }
    
    Node *ptr = new Node();
    ptr->key = key;
    ptr->next = temp->next;
    temp->next = ptr;
    ++head->key;
}

void List::del(int pos)
{
    Node *ptr = findPrevious(pos);
    if(ptr == nullptr){
        std::cout<< "Delete failed" << std::endl;
        return;
    }

    Node *temp = ptr->next;
    ptr->next = temp->next;
    --head->key;
    delete temp;
}

void List::add(int key)
{
    Node *ptr = new Node();
    ptr->key = key;

    Node *temp = head;
    if(head->key != 0)
        while( temp->next != nullptr)
            temp = temp->next;
    temp->next = ptr;
    ++head->key;
}

Node *List::find(int key)
{
    if(isEmpty())
        return nullptr;
    Node *temp = head->next;
    while(temp->next != nullptr && temp->next->key != key)
        temp = temp->next;
    if(temp->next == nullptr)
        return nullptr;
    else
        return temp->next;
}

void List::printList()
{
    if(isEmpty())
    {
        std::cout<< "Empty List" << std::endl;
        return;
    }

    Node *temp = head;
    std::cout<< "List Length is:" << temp->key << std::endl;

    temp = temp->next;
    while(temp->next != nullptr)
    {
        std::cout<< temp->key << " ";
        temp = temp->next;
    }
    std::cout<< temp->key << std::endl;
}