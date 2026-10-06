#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"C:\Users\raj94\OneDrive\Desktop\4th_year_7th_sem\MJ2(ALGO)\utility.c"
#define max 10

int top = -1;
int arr[max];

int is_empty(){
    if (top == -1)
        return 1;
    else
        return 0;
}

int is_full(){
    if (top == max)
        return 1;
    else
        return 0;
}

void push(int element){
    if(!is_full()){
        top++;
        arr[top] = element;
    }
    else
        printf("overflow\n");
}

int pop(){
    if(!is_empty()){
        top--;
        return arr[top+1];
    }
    else
        printf("underflow\n");
}

int peak(){
    return arr[top];
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
            arr_p(arr,0,top);
            break;
        case 2:
            a = pop();
            printf("%d is popped form the stack\n",a);
            arr_p(arr,0,top);
            break;
        case 3:
            a = peak();
            printf("%d is at the top of the stack\n",a);
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