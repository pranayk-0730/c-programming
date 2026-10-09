#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d",&marks);
    if ((marks<0)||(marks>100))
    {
        printf("Invalid Input\n");
    }
    else  if (marks>=90)
    {
        printf("Grade A\n");
    }
    else  if (marks<90 && marks>=75) 
    {
         printf("Grade B\n");
    }
    else  if (marks<75 && marks>=60)
    {
         printf("Grade C\n");
    }
    else  if (marks<60 && marks>=50)
    {
         printf("Grade D\n");
    }
    else
    {
         printf("Grade F\n");
    }
    return 0;
}