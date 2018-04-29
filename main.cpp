#include"list.h"
#include"doublelist.h"
#include"mystack.h"
#include<iostream>

using namespace std;

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
    return 0;
}