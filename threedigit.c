#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x>99  && x<1000){
        printf("It is a three digit Number: " ,x);
}else {
    printf("Not a three digit Number:",x);
}
return 0;
}