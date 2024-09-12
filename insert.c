#include "linkedlist.h"
#include "insert.h"
#include <stdio.h>
#include <stdlib.h>

struct Node * createNode(int data){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("what the hell\n");
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void b_insert(struct Node ** head,int data){
    struct Node *newNode=createNode(data);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    newNode->next=*head;
    *head=newNode;
}

void e_insert(struct Node ** head,int data){
    struct Node *newNode=createNode(data);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void n_insert(struct Node ** head,int data,int pos){
    struct Node *newNode=createNode(data);
    if(pos==1){
        newNode->next=*head;
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    while(pos>2 && temp!=NULL){
        pos--;
        temp=temp->next;
    }
    if(pos>2){
        printf("Invalid Position to insert\n");
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
