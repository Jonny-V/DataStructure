#ifndef LIST_H
#define LIST_H

class Node{

friend class List;

public:
    Node():next(nullptr), key(0) { };

private:
    Node *next;
    int key;
};

class List{

public:
    List():head(new Node()) { }

    bool isEmpty();
    //在pos前端插入
    void insert(int pos, int key);
    void del(int pos);
    void add(int key);
    Node *find(int key);
    void printList();
    ~List()
    {
        if(head->next != nullptr){
            Node *temp = head;
            while( head->next != nullptr)
            {
                temp = head->next->next;
                delete head->next;
                head->next = temp;
                --head->key;
            }
            delete head->next;
        }
        delete head;
    } 
    
private:
    Node *findPrevious(int pos);

    Node *head;
    
};


#endif