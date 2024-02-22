#include<stdio.h>
int main(){
    int x;
    printf("Enter your marks:");
    scanf("%d", &x);
    if (32 < x)
    {
        printf("Congratulation! You are 'Pass'.");
    }
    else{
        printf("Unfortunately! You are 'Fail'.");
    }
    }