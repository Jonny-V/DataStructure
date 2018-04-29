#include"list.h"
#include"doublelist.h"
#include"mystack.h"
#include"myqueue.h"
#include<iostream>

using namespace std;
using namespace queue;

int main()
{
    List testList;
    for(int i = 0; i < 7; i++)
        testList.add(i);
    testList.insert(4,10);
    testList.printList();
    testList.del(10);
    testList.printList();

    DoubleList blist;
    cout<<"\n\n\n";
    for(int i = 15; i < 25; i++)
        blist.add(i);
    blist.printDoubleList();
    blist.insert(21,99);
    blist.printDoubleList();
    blist.del(99);
    blist.printDoubleList();

    Mystack s;
    s.pop();
    for(int i = 0; i<100; i++)
        s.push(i+100);
    s.printStack();
    s.push(11);
    s.push(12);
    s.pop();
    s.printStack();

    Myqueue q;
    q.pop();
    for(int i = 0; i < 10; i++)
        q.push(i);
    q.printQueue();
    q.pop();
    q.printQueue();
    return 0;
}