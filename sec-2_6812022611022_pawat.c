#include <stdio.h>

int main () {

    int level;
    char arr[level][1];
    float Total;

    printf("***Transaction Fee Calculator***\n");

    printf("Enter number of transactions (3-12): ");
    scanf("%d",&level);

    for (int i = 0; i < level; i++)
    {
        printf("Enter Chanal Type for TXN %d (O,B,A): ",i+1);
        scanf("%s",arr[i][1]);
    }

    if (arr == O) {
        printf("เก็บค่าบำรุงรักษาระบบเพิ่ม 5%%\n");
    }
    else if (arr == B)
    {
        printf("ได้รับเครคิตคืน 10%%\n");
    }
    else if (arr == A)
    {
         printf("เก็บค่าบริการเพิ่ม 20%%\n");
    }
    
    

    printf("Enter Total Transaction Value : ");
    scanf("%.2f",Total);

    printf("---Fee Summary---");

    printf("Chanel Type : Mixed ");
    for (int i = 0; i < level; i++)
    {
        printf("%s",arr);
    }
    printf("Transations Made (%d): ");

    printf("Total Base Fee : %d THB");

    printf("Ajustment Rate (Net) : ");

    printf("Final Total Fee : %.2f THB");
return 0;
}
