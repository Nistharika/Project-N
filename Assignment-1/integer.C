#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0) {
        printf("positive number\n");}
    else if (a<0) {
        printf("negative number\n");}
    else printf("The number is Zero");
}