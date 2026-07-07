/*Write a C Program to calculate the total and percentage of marks obtained by a student*/
#include<stdio.h>
int main()
{
        float m1,m2,m3,m4,m5,s,p;
        printf("Enter 5 subject marks:");
        scanf("%f,%f,%f,%f,%f",&m1,&m2,&m3,&m4,&m5);
        s=m1+m2+m3+m4+m5;
        p=(s/500)*100;
        printf("\nTotal:%f",s);
        printf("\nPercentage:%f\n",p);
        return 0;
}
