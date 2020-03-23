// FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements you want in fibonacci series:\n");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(i=0;i<n;i++){
        printf("%d ",fib[i]);
    }
    int sum=0;

    for(i=0;i<n;i++){
        sum=sum+fib[i]*fib[i]*fib[i];
    }
    printf("%d",sum);
    return 0;

}


