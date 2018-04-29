#ifndef MYQUEUE_H
#define MYQUEUE_H

namespace queue{
    class Node{
    public:
        friend class Myqueue;
        Node():key(0), next(nullptr) { }
    private:
        int key;
        Node *next;
    };

    class Myqueue{
    public:
        Myqueue()
        {
            head = new Node();
            head = tail;
        }
        bool isEmpty();
        void push(int key);
        void pop();
        int getKey();
        void printQueue();
        ~Myqueue()
        {
            if(!isEmpty()){
                Node *ptr = head;
                while(ptr != tail){
                    pop();
                    ptr = ptr->next;
                }
                delete tail;
            }
        }

    private:
        Node *head;
        Node *tail;
    };

}


#endif