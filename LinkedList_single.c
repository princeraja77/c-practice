#include <stdio.h>
#include <stdlib.h>
struct Node;
struct Node * createNode(int data);
void b_insert(struct Node ** head,int data);
void n_insert(struct Node ** head,int data,int pos);
void e_insert(struct Node ** head,int data);
void display(struct Node * temp);
int main(){
    struct Node *head=NULL;
    int ch,pos,data;
    while(1){
        printf("1. Insert at the Beginning\n");
        printf("2. Insert at the End\n");
        printf("3. Insert at the Nth Position\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter the node val:\n");
                scanf("%d",&data);
                b_insert(&head,data);
                break;
            case 2:
                printf("enter the node val:\n");
                scanf("%d",&data);
                e_insert(&head,data);
                break;
            case 3:
                printf("enter the node val:\n");
                scanf("%d",&data);
                printf("enter the position :\n");
                scanf("%d",&pos);
                n_insert(&head,data,pos);
                break;
            case 4:
                display(head);
                break;
            case 0:
                return 0;
                break;
            default:
                printf("Please enter a valid choice\n");
        }
    }
    return 0;
}
struct Node{
    int data;
    struct Node *next;
};

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
void display(struct Node * head){
    struct Node * temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("null\n");
}

