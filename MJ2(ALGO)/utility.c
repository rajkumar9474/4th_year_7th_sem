void print(int a);


void arr_p(int arr[],int s,int e){
    /*to print elements of array with the array pointer,start index, ending index
    */
    printf("[");
    for(int i = s;i<=e;i++){
        printf(" %d ,",arr[i]);
    }
    printf("]");
    printf("\n");
}

// void link_print(node *link){
//     node *temp;
//     temp = link;
//     while(temp != NULL){
//         print(temp->data);
//         temp = temp->next;
//     }
// }


int maxi(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if (b>a && b>c) 
        return b;
    else if (c>a & c>b)
        return c;
}

int digit_count(int a){
    if (a == 0)
        return 1;
    int count = 0;
    while(a%10){
        count++;
        a = a/10;
    }
    return count;
}

void print(int a){
    printf("%d\n",a);
}