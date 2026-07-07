/*Write a C program to find profit of a product*/
#include<stdio.h>
int main()
{
        float sp,cp,Profit;
        printf("Enter Selling Price:");
        scanf("%f",&sp);
        printf("Enter Cost Price:");
        scanf("%f",&cp);
        Profit=sp-cp;
        printf("\nProfit=%f\n",Profit);
        return 0;
}
