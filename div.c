#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    if(x%5==0 && x%3==0){
        printf("It is divisible:%d "  ,x);
    }else{
        printf("Not divisible:%d" ,x);
    }
    return 0;
}