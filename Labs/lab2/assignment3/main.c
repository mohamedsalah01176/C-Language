#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cho;
    printf("\n 1.food1");
    printf("\n 2.food2");
    printf("\n 3.food3");
    printf("\n 4.Exsit");

    do{
        printf("choose from menue");
        scanf("%d",&cho);

        switch(cho){
        case 1:
            printf("food1 \n");
            break;
        case 2:
            printf("food2 \n");
            break;
        case 3:
            printf("food3 \n");
            break;
        default:
            printf("not valid");
        }
    }while(cho != 4);

    return 0;
}
