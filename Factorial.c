//factorial using recursion
long fact(int n);
int main(){
    int num,res;
    printf("\nEnter any positive number: \n");
    scanf("%d",&num);
    if(num<0){
        printf("Oops!! you entered a negative number!!Enter again");
        main();
    }
    else{
        res=fact(num);
        printf("Factorial of number %d is: %d",num,res);

    }

}
long fact(int n){
    long pro;
    if(n==1 || n==0)
        return 1;
    else{
        pro=n*fact(n-1);
        return pro;
    }
}
