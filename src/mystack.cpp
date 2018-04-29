#include "mystack.h"
#include <iostream>

bool Mystack::isEmpty()
{
    return top == 0 ? true : false;
}

void Mystack::push(int key)
{
    if(top < size){
        stack[top++] = key;
    }
    else{
        int *temp = new int[size * 2];
        for(int i = 0; i < top; i++)
            temp[i] = stack[i];
        size *= 2;
        delete []stack;
        stack = temp;
        stack[top++] = key;
    }
}

void Mystack::pop()
{   
    if(isEmpty()){
        std::cout<< "Empty Stack" << std::endl;
    }
    else{
        stack[top--] = 0;
    }
}

int Mystack::getTop()
{
    return stack[top];
}

void Mystack::printStack()
{
    if(isEmpty()){
        std::cout << "Empty Stack" << std::endl;
    }
    else{
        for(int i = 0; i < top; i++)
            std::cout<< stack[i] << " ";
        std::cout << std::endl;
    }
    return;
}