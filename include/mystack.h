#ifndef MYSTACK_H
#define MYSTACK_H

const unsigned int STACKSIZE = 100;

class Mystack{

public:
    Mystack(): size(STACKSIZE),top(0)
    {
        stack = new int[STACKSIZE];
        for(int i = 0; i < STACKSIZE; i++)
            stack[i] = 0;
    }
    ~Mystack()
    {
        delete []stack;
    }

    bool isEmpty();
    void push(int key);
    void pop();
    int getTop();
    void printStack();


private:
    unsigned int size;
    unsigned int top;
    int *stack;
};



#endif