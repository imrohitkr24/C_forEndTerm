#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Number :");
    scanf("%d",a,b,c);
    if(a+b>c && b+c>a && c+a>b){
        printf("All Okay");
    }else{
        printf("Not Okay");
    }
    return 0;
}