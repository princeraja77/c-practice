#ifndef INSERT_H_INCLUDE
#define INSERT_H_INCLUDE
struct Node;
struct Node * createNode(int data);
void b_insert(struct Node ** head,int data);
void n_insert(struct Node ** head,int data,int pos);
void e_insert(struct Node ** head,int data);
#endif