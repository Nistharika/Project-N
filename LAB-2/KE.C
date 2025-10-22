#include<stdio.h>
int main(){
    int m,v,KE;
    printf("Enter mass m: ");
    scanf("%d",&m);
    printf("Enter velocity v: ");
    scanf("%d",&v);
    KE=0.5*m*v*v;
    printf("Kinetic Energy KE: %d",KE);
    return 0;
}