#include <stdio.h>

int main()
{
/* Build a new program that prompts a user for data and
 determines a commission using the following formula:
 Commission = Rate * (Sales Price – Cost).
*/
float fRate;
int iSalesPrice;
int iCost;

printf("Enter Rate:");
scanf("%f",&fRate);
printf("Enter Sales Price:");
scanf("%d",&iSalesPrice);
printf("Enter Cost:");
scanf("%d",&iCost);

float fComission=fRate*(iSalesPrice-iCost);

printf("Comission:%.2f",fComission);

    return 0;
}
