/*Write a C program to convert seconds into hours and minutes*/
#include<stdio.h>
#include<math.h>
int main()
{
        int sec,min,h,r,m,s;
        printf("Enter duration in seconds:");
        scanf("%d",&sec);
        min=sec/60;
        printf("\nIn minutes=%d minutes %d seconds",min,sec%60);
        h=sec/3600;
        r=sec%3600;
        m=r/60;
        s=r%60;
        printf("\nIn hours=%d hours %d minutes %d seconds\n",h,m,s);
        return 0;
}
