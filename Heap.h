//
// Created by nathan on 22/10/15.
//

#ifndef HEAPBUILDER_HEAP_H
#define HEAPBUILDER_HEAP_H


class Heap {

public:

    //constructors and deconstructor
    Heap();
    //virtual ~Heap() { delete mHeap; }


    void insert(int newNum);
    void fillWithRand();
    int *getHeap();
    int *getSortedHeap();

private:

    bool compareToParent(int node);
    int getParent(int node);
    int getLevel(int node);
    void swapWithParent(int node);
    bool bubbleUp(int node);
    bool bubbleDown(int node);

    int mCurrentPos;
    const static int HEAP_SIZE = 25;
    int mHeap[HEAP_SIZE];
    int *mSortedHeap[HEAP_SIZE];




};


#endif //HEAPBUILDER_HEAP_H