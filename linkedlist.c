#include "insert.h"
#include "linkedlist.h"
#include <stdio.h>

void display(struct Node * head){
    struct Node * temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("null\n");
}

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