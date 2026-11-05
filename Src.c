#include<stdio.h>

int main()
{
    int i,n;
    char P[100][50];
    float R[100],Q[100],D,M,Sum=0,Net_Amount, Discount,G,Final,GST;

    printf("Enter Number of distinct Items:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Enter item name:");
        scanf(" %49[^\n]",P[i]);
        printf("Enter Quantity:");
        scanf("%f",&Q[i]);
        printf("Enter Rate:");
        scanf("%f",&R[i]);
        Sum=Sum+(Q[i]*R[i]);
    }
    //Discount
    printf("Enter Discount%% for all once:");
    scanf("%f",&Discount);
    M=Sum*Discount;
    D=(M/100);
    Net_Amount=Sum-D;
    //GST
    printf("Enter GST%%:"); // for user take only number as input not the % sign
    scanf("%f",&G);
    Final=(Net_Amount*G)/100;
    GST=Net_Amount-Final;
    printf("Total Amount Is:%.2f\n", Sum);
    printf("Discounted Amount Is:%.2f\n",D);
    printf("Net Amount To PAY [included GST]:%.2f\n",Net_Amount);


    return 0;
}
