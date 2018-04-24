#ifndef DOUBLELIST_H_
#define DOUBLELIST_H_

class BNode{

friend class DoubleList;

public:
    BNode():key(0),fore(nullptr),next(nullptr) { };

private:
    int key;
    BNode *fore;
    BNode *next;
};

class DoubleList{
public:
    DoubleList():head(new BNode()) { };
    bool isEmpty();
    //在pos前端插入
    void insert(int pos, int key);
    void del(int pos);
    void add(int key);
    BNode *find(int key);
    void printDoubleList();
    ~DoubleList()
    {
  //     if(head->next != nullptr){
            BNode *temp = head;
            while(head->next != nullptr){
                temp = head->next->next;
                delete head->next;
                head->next = temp;
 //             temp->fore = head;
                --head->key;
            }
   //         delete head->next;
   //     }
        delete head;
    }

private:
    BNode *head;

};

#endif