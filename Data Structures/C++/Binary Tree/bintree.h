/*
 Name: Arjun Devireddy
 Coding 07
 Purpose: This program holds the declarations for the bintree.cpp file
 */

#ifndef BINTREE_BINTREE_H
#define BINTREE_BINTREE_H
#include <iostream>
#include "data.h"

using std::cout;
using std::endl;

class BinTree{
    public:
        BinTree();
        ~BinTree();
        bool isEmpty();
        int getCount();
        bool getRootData(Data*);
        void displayTree();

        void clear();
        bool addNode(int, const string*);
        bool removeNode(int);
        bool getNode(Data*, int);
        bool contains(int);
        int getHeight();
        void displayPreOrder();
        void displayPostOrder();
        void displayInOrder();

    private:
        int count;
        DataNode* root;

        void clear(DataNode*);
        bool addNode(DataNode*, DataNode**);
        DataNode* removeNode(int, DataNode*);
        bool getNode(Data*, int, DataNode*);
        bool contains(int, DataNode*);
        int getHeight(DataNode*);
        void displayPreOrder(DataNode*);
        void displayPostOrder(DataNode*);
        void displayInOrder(DataNode*);
        DataNode* minValueNode(DataNode*);
};


#endif /* BINTREE_BINTREE_H */

