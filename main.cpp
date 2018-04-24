#include"list.h"
#include"doublelist.h"
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
    return 0;
}