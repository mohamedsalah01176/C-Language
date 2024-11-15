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
    return 0;
}
