#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first tensile strength value:");
    scanf("%d",&a);
    printf("Enter the second tensile strength value: ");
    scanf("%d";&b);
    if (a>b){
        printf("the larger tensile strength value is %d",a);
    }
    if (a<b){
        printf("the larger tensile strength value is %d",b);
    }
    else{
        printf("both the tensile value strengths are equal");
    }

}
