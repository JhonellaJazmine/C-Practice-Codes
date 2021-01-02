#include <stdio.h>

int GCF(int x1,int x2);

int main()
{
    int num1, num2, holder;

    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);

    if(num1<num2)
    {
        holder=num1;
        num1=num2;
        num2=holder;
    }

    printf("The GCF of %d and %d is %d",num1,num2,GCF(num1,num2));
    return 0;
}

int GCF(int x1,int x2)
{
    int greatest_cf;

    if(x2!=0)
    {
        x1=x1%x2;

        return GCF(x2,x1);
    }
    else
        return x1;

}
