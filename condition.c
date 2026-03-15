#include<stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if(n > 0 && n % 5 == 0 && n % 3 == 0 && n % 15 != 0) {
        printf("Condition satisfied");
    }
    else {
        printf("Condition not satisfied");
    }

    return 0;
}