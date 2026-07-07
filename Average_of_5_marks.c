/*Write a C Program to find the average of 5 subject marks*/
#include<stdio.h>
int main()
{
        float m1,m2,m3,m4,m5,avg,s;
        printf("Program to find average of 5 marks\n\n");
        printf("Enter 5 subject marks:");
        scanf("%f,%f,%f,%f,%f",&m1,&m2,&m3,&m4,&m5);
        s=m1+m2+m3+m4+m5;
        avg=s/5;
        printf("Average: %f\n",avg);
        return 0;
}
