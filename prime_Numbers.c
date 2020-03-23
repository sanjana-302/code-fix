// a program to find whether a given number is prime or not
//Method : 1 (considering complexity)
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter any positive number");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
        printf("%d is neither a prime number nor a composite number",n);
    else if(n<0)
    {
       printf("Oops! you entered a negative number!!\n");
       main();
    }

    else if(flag==1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
    return 0;
}
