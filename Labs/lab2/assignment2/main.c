#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int input;
    while( sum<100){
        printf("\n please enter number");
        scanf("%d",&input);
        sum+=input;
    }
    printf("sum is %d",sum);

    return 0;
}
