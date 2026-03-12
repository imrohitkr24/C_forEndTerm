#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Number:");
    scanf("%d",&a);
    printf("Enter the Sec Number:");
    scanf("%d",&b);
    printf("Enter the third Number:");
    scanf("%d",&c);

    if(a>b &&a>c){
        printf("A is greater ");
    }
    else if(b>a &&b>c){
        printf("B is greater ");
    }
     else if(c>b &&c>a){
        printf("C is greater ");
    }else{
        printf("EquAL");
    }
            return 0;
}