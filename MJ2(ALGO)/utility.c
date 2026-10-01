void arr_p(int arr[],int s,int e){
    printf("[");
    for(int i = s;i<=e;i++){
        printf(" %d ,",arr[i]);
    }
    printf("]");
    printf("\n");
}

int max(int a,int b,int c){
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