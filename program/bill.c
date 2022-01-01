// to print bill of restourent

#include <stdio.h>
void main()
{

    int choice, qty = 0;

    printf("_______________MENU______________\n");

    printf("1.item1\n1\n2.item2\n3.item3\n4.item4\n5.item5\n");

    printf("_______________MENU______________\n");

    printf("Enter your choice: \n");
    scanf("%d", &choice);

    if(choice>5){printf("invalid item menu ");
    
    }


    printf("Enter your qty: ");
    scanf("%d",&qty);


    switch (choice)
    {
    case 1:
    qty*=10;
        printf("You orderd item1 and your bill is %d",qty);
        break;
    case 2:
        printf("You orderd item2");
        break;
    case 3:
        printf("You orderd item3");
        break;
    case 4:
        printf("You orderd item4");
        break;
    case 5:
        printf("You orderd item5");
        break;

    }
}