#include<stdio.h>
int main()
{
    int m;

    printf("Enter a students marks:");
    scanf("%d",&m);

    if(80<=m && m<=100)printf("\nExcellent");
    else if(70<=m && m<80)printf("\nVery Good");
    else if(60<=m && m<70)printf("\nGood");
    else if(50<=m && m<60)printf("\nAverage");
    else if(0<=m && m<50)printf("\nFail");
    else printf("\nStudents marks should be '0-100'");

    return 0;

}
