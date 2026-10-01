#include<stdio.h>
#include<math.h>

int digit_count(int a){
    if (a == 0)
        return 1;
    int count = 0;
    while(a!=0){
        count++;
        a = a/10;
    }
    return count;
}

int karat_mult(int A, int B)
{
    int a, b, c, d;
    int p1, p2, p3, res;
    int m, power;
    if (A < 10 && B < 10)
    {
        return A * B;
    }
    int digitsA = digit_count(A);
    int digitsB = digit_count(B);
    int n = digitsA > digitsB ? digitsA : digitsB;
    m = n / 2;
    power = 1;
    for (int i = 0; i < m; i++)
    {
        power *= 10;
    }
    a = A / power;
    b = A % power;
    c = B / power;
    d = B % power;
    p1 = karat_mult(a, c);
    p2 = karat_mult(b, d);
    p3 = karat_mult(a + b, c + d) - p1 - p2;
    res = p1 * power * power + p3 * power + p2;
    return res;
}

int main(){
    int A,B,c;
    printf("enter the first number: \n");
    scanf("%d",&A);
    printf("enter the second number: \n");
    scanf("%d",&B);
    int a = karat_mult(A,B);
    printf("%d x %d = %d(%d)",A,B,a,A*B);
}