#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node * temp);
#endif