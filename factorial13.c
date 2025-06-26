#include<stdio.h>
long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}
int main(){
    int num;
    printf("enter a positive integer:");
    scanf("%d", &num);
    if (num<0){
        printf("Factorial is not defined for negative numbers.\n");
    }else{
        printf("factorial of %d = %lld\n", num, factorial(num));
    }
    return 0;
}