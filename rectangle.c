/*given the length and breath of a rectangle write a program to find whether the area of the rectangle is greater than its perimeter*/
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length of the Number:");
    scanf("%d" , &l);
    printf("Enter the breath of the Number: ");
    scanf("%d", &b);
    int area = 2*(l*b);
    int perimeter = 2+(l*b);
    if(area>perimeter){
        printf("Area is greater");
    }else if(area<perimeter){
        printf("perimeter is greater");
    }else{
        printf("Area and perimeter is same");
    }
    return 0;
}