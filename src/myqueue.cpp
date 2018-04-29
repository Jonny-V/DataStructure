#include "myqueue.h"
#include <iostream>

bool queue::Myqueue::isEmpty()
{
    return head == tail ? true : false ;
}

void queue::Myqueue::push(int key)
{
    Node *ptr = new Node();
    tail->key = key;
    tail->next = ptr;
    tail = ptr;
}

void queue::Myqueue::pop()
{
    if(isEmpty()){
        std::cout<< "Empty Queue" << std::endl;
    }
    else{
        Node *ptr = head;
        head = ptr->next;
        delete ptr;
    }
}

int queue::Myqueue::getKey()
{
    if(isEmpty()){
        std::cout<< "Empty Queue" << std::endl;
        return 0;
    }
    else{
        return head->key;
    }
}

void queue::Myqueue::printQueue()
{
    if(isEmpty()){
        std::cout<< "Empty Queue" << std::endl;
    }
    else{
        Node *ptr = head;
        while(ptr != tail){
            std::cout << ptr->key <<  " ";
            ptr = ptr->next;
        }
        std::cout << std::endl;
    }
}