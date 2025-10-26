#include<stdio.h>

int main()

{

int n;

float Bill;

printf("Enter consumed units: ");

scanf("%d",&n);

if (n<=100) {

Bill=n*1.5;}

else if (n<=200){

Bill=(n-100)*2+100*1.5;}

else if (n<=300){

Bill=(n-200)*3+100*2+100*1.5;}

else if (n>=300){

Bill=(n-300)*5+100*3+100*2

+100*1.5; }

printf("Total Bill is %f"

,Bill);

}
