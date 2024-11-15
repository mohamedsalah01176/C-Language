#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define ENTER 13
#define ESC 27
#define TOP 72
#define DWON 80
#define RIGHT 77
#define LEFT 75
#define TAB 9
#define HOME 71
#define END 79

struct employee{
    int code;
    char name[20] ;
    int age,tax,salary,bouns;
};

void gotoxy1(int x, int y);

int main()
{

















struct employee emp[20];
    char ch;
    int arr[20]={0};
    int numEmployee,x;


    printf("%d \n",ch);
    do{
            x=1;
        printf("\n what index of employee");
        scanf("%d",&numEmployee);
        system("cls");
            gotoxy1(10,1);
            printf("employee %d",numEmployee);
            gotoxy1(1,2);
            printf("code: ");
            gotoxy1(20,2);
            printf("name: ");
            gotoxy1(1,4);
            printf("age: ");
            gotoxy1(20,4);
            printf("salary: ");
            gotoxy1(1,6);
            printf("bound: ");
            gotoxy1(20,6);
            printf("tax: ");

            gotoxy1(7,2);
            scanf("%d",&emp[numEmployee-1].code);
            gotoxy1(27,2);
            scanf("%s",emp[numEmployee-1].name);
            gotoxy1(7,4);
            scanf("%d",&emp[numEmployee-1].age);
            gotoxy1(27,4);
            scanf("%d",&emp[numEmployee-1].salary);
            gotoxy1(7,6);
            scanf("%d",&emp[numEmployee-1].bouns);
            gotoxy1(27,6);
            scanf("%d",&emp[numEmployee-1].tax);
            printf("go back menue click any key");
            ch=getch();
            arr[numEmployee-1]=numEmployee;
            if(ch && ch!=48){
                continue;
            }

            if(ch==48){
                x=0;
            }

            //when click 0
    }while(x !=0);
    system("cls");


    int netSalary;
    for(int i=0;i<=20;i++){

            if( arr[i] ){
                gotoxy1(1,2+i);
                printf("%s ",emp[i].name);
                netSalary=emp[i].salary+emp[i].bouns-emp[i].tax;
                gotoxy1(15,2+i);
                printf("%d ",netSalary);

            }
    }








    return 0;
}

void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
