#include<stdio.h>
int main()
{
    int input;
    float kmToMile, inchToFoot, cmToInch, poundToKg, incheTometre;
    printf("press 1 to convert km to mile \n");
    printf("press 2 to convert inches to foot \n");
    printf("press 3 to convert cm to inches \n");
    printf("press 4 to convert pound to kg \n");
    printf("press 5 to convert inches to metre \n");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("enter a km value to convert to mile\n");
        scanf("%f", &kmToMile);
        printf("%f", kmToMile*0.621371);
    }
    if (input == 2)
    {
        printf("enter a inches value to convert to foot\n");
        scanf("%f", &inchToFoot);
        printf("%f", inchToFoot*0.0833333);
    }
    if (input == 3)
    {
        printf("enter a cm value to convert to inches\n");
        scanf("%f", &cmToInch);
        printf("%f", cmToInch*0.393701);
    }
    if (input == 4)
    {
        printf("enter a pound value to convert to kg \n");
        scanf("%f", &poundToKg);
        printf("%f", poundToKg*0.453592);
    }
    if (input == 5)
    {
        printf("enter a inches value to convert to metre\n");
        scanf("%f", &incheTometre);
        printf("%f", incheTometre*0.0254);
    }
}