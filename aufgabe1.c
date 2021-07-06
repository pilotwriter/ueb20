#include <stdio.h>
#include <limits.h>

void aufgabe_1()
{
    float nettoPrice;
    float bruttoPrice;
    float taxAmount;
    float priceWithDiscount;
    float discount;
    printf("Please give the netto price \n");
    scanf("%f", &nettoPrice);
    taxAmount = nettoPrice * (float)1 / (float)5;
    bruttoPrice = taxAmount + nettoPrice;
    discount = (bruttoPrice * ((float)1 / (float)50));
    priceWithDiscount = bruttoPrice - discount;
    printf("Nettopreis \t\t\t Euro %.2f \n", nettoPrice);
    printf("+ 20%% MwSt \t\t\t Euro %.2f \n", taxAmount);
    printf("=============================================\n");
    printf("Bruttopreis \t\t\t Euro %.2f \n", bruttoPrice);
    printf("- 2%% Skonto \t\t\t Euro %.2f \n", discount);
    printf("=============================================\n");
    printf("Rechnungsbetrag \t\t Euro %.2f \n", priceWithDiscount);
}
void iterative_fibo()
{
    printf("Please give the a number for fibonacci \n");
    int limit;
    scanf("%d", &limit);
    int current = 1;
    int last = 0;
    if (limit > 0)
    {
        printf("%d\n", 0);
        for (int i = 0; i < limit - 1; i++)
        {
            printf("%d\n", current);
            int temp = current;
            current = current + last;
            last = temp;
        }
    }
}
void getMinAndMaxSizes()
{
    char maxChar = 0b01111111;
    char minChar = 0b10000000;
    printf("Max char value %c and max char value from limits.h %c \n", maxChar, CHAR_MAX);
    printf("Min char value %c and min char value from limits.h %c \n", minChar, CHAR_MIN);
    short maxShort = 0x7fff;
    short minShort = 0x8000;
    printf("Max short value %d and max short value from limits.h %d \n", maxShort, SHRT_MAX);
    printf("Min short value %d and min short value from limits.h %d \n", minShort, SHRT_MIN);
    int maxInt = 0x7fffffff;
    int minInt = 0x80000000;
    printf("Max int value %d and max int value from limits.h %d \n", maxInt, INT_MAX);
    printf("Min int value %d and min int value from limits.h %d \n", minInt, INT_MIN);

    unsigned char umaxChar = 0b11111111;
    unsigned char uminChar = 0b00000000;
    printf("Max unsigned char value %cu and max unsigned char value from limits.h %cu \n", umaxChar, UCHAR_MAX);
    printf("Min unsigned char value %cu and min unsigned char value from limits.h %cu \n", uminChar, 0);

    unsigned short umaxShort = 0xffff;
    unsigned short uminShort = 0x0000;
    printf("Max unsigned short value %u and max unsigned short value from limits.h %u \n", umaxShort, USHRT_MAX);
    printf("Min unsigned short value %u and min unsigned short value from limits.h %u \n", uminShort, 0);

    unsigned int umaxInt = 0xffffffff;
    unsigned int uminInt = 0x00000000;
    printf("Max unsigned int value %u and unsigned max int value from limits.h %u \n", umaxInt, UINT_MAX);
    printf("Min unsigned int value %u and unsigned min int value from limits.h %u \n", uminInt, 0);
}
void incrementByValue(int x)
{
    x++;
    printf("The new value is inside of a function %d \n", x);
}

void dialog()
{
    printf("Please choose an option\n");
    printf("1- Price example\n");
    printf("2- Iterativ Fibonacci\n");
    printf("3- Limits\n");
    printf("4- call by value\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        aufgabe_1();
    }
    else if (choice == 2)
    {
        iterative_fibo();
    }
    else if (choice == 3)
    {
        getMinAndMaxSizes();
    }
    else if (choice == 4)
    {
        int val = 199;
        printf("The value in here is : %d \n",val);
        incrementByValue(val);
        printf("The value in here is not incremented %d",val);
    }
    else
    {
        printf("Impossible choice");
    }
}
int main()
{
    dialog();
    return 0;
}