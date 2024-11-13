#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{

    int size,row,col;
        void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }


    printf("please enter odd size of array \n");
    scanf("%d",&size);
    if(size%2 ==0){
        printf("please enter odd size of array");
        scanf("%d",&size);

    }else{
        row=1;
        col=(size+1)/2;

        for(int i=1;i<=size*size;i++){
            gotoxy1(col*3,row*1);

            if(i%size==0){
                    row++;
            }else{
                row--;
                col--;
            if(col<1){
                    col=size;
                }
                 if(row<1){
                    row=size;
                }
            }
            printf("%d",i);


        }
    }




    //2======

    int sum=0;
    int input;
    while( sum<100){
        printf("\n please enter number");
        scanf("%d",&input);
        sum+=input;
    }
    printf("sum is %d",sum);



    //3===============

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
