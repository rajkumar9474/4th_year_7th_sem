#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"C:\Users\raj94\OneDrive\Desktop\4th_year_7th_sem\MJ2(ALGO)\utility.c"
#define max 5

typedef struct node{
    int data;
    struct node *next;
}node;

void link_print(node *link){
    node *temp;
    temp = link;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
node *head = NULL;
int is_empty(){
    if (head == NULL)
        return 1;
    else
        return 0;
}

int is_full(){
    int count = 0;
    node *temp;
    temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    if (count == max)
        return 1;
    else
        return 0;
}

void push(int element){
    node *new_node = malloc(sizeof(node));
    if(!is_full()){
        new_node->data = element;
        new_node->next = head;
        head = new_node;
    }
    else
        printf("overflow\n");
}

int pop(){
    node *tmp;
    if(!is_empty()){
        tmp = head;
        head = tmp->next;
        int data = tmp->data;
        free(tmp);
        return data;
    }
    else{
        printf("underflow\n");
        return -1;}
}

int peak(){
    if(!is_empty()){
        return head->data;
    }
    else{
        return -1;
    }
}

int main(){
    int ch,a;
    while(true){
        printf("enter choice 1.push 2.pop 3.peak 4.exit:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("enter the element to push:\n");
            scanf("%d",&a);
            push(a);
            link_print(head);
            break;
        case 2:
            a = pop();
            if(a != -1)
                printf("%d is popped form the stack\n",a);
            else
                printf("nothing in the stack\n");
            link_print(head);
            break;
        case 3:
            a = peak();
            if(a != -1)
                printf("%d is at the top of the stack\n",a);
            else
                printf("nothing in the stack\n");
            break;
        case 4:
            exit(1);
            break;

        default:
        printf("wrong choice\n");
            break;
        }
    }
}