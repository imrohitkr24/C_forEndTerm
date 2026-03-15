#include<stdio.h>
int main(){
    char ch;
printf("Enter the Operator:");
scanf("%c",&ch);
printf("Enter the 1st Number:");
int a;
scanf("%d",&a);
int b;
printf("Enter the 2nd Number:");
scanf("%d",&b);

switch(ch){
    case '+':
    printf("%d\n",a+b);
    break;
    case '-':
    printf("%d\n",a-b);
    break;
    case '*':
    printf("%d\n",a*b);
    break;
    case '%':
    printf("d\n",a%b);
    break;
}
return 0;
}