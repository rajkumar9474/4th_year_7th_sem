#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}node;



int main(){
    node *head = NULL;
    node *end = NULL;

    node temp,next;
    head;

    for(int i = 0;i<10;i++){
        node *newnode = malloc(sizeof(node));

        newnode->data = i;
        newnode->next = NULL;

        if (head == NULL){
            head = newnode;
            end = newnode;
        }
        else{
            end->next = newnode;
            end = newnode;
        }
    }
}
