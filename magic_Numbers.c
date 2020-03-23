// WHAT ABOUT MAGIC NUMBERS??
#include<stdio.h>
int sumOfDigits(int num);
int reverse(int num);

int main(){
    int n;
    printf("Enter any number: \n");
    scanf("%d",&n);
    int sum;
    sum=sumOfDigits(n);
    int revNum;
    revNum=reverse(sum);
    if(n<10){
        if((sum*revNum)==n)
            printf("Yes!");
        else
            printf("No!");
    }

    if(n>=10)
    {
        if((sum*revNum)==n )
            printf("Yes!");
        else
            printf("No!");
    }

    return 0;

}
int sumOfDigits(int num){
    int sum=0;
    while(num>0){
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}
int reverse(int num){
    int rev=0;
    while(num>0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    return rev;
}
