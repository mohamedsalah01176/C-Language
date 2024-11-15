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

void gotoxy1(int , int );

int main()
{




     struct employee emp;
    int flag,x=1;
    char arrString[8][20]={"code","name","age","salary","bound","tax"};
    char ch;

    gotoxy1(20,0);
    printf("employee form");

    do{

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
        scanf("%d",&emp.code);
        gotoxy1(27,2);
        scanf("%s",emp.name);
        gotoxy1(7,4);
        scanf("%d",&emp.age);
        gotoxy1(27,4);
        scanf("%d",&emp.salary);
        gotoxy1(7,6);
        scanf("%d",&emp.bouns);
        gotoxy1(27,6);
        scanf("%d",&emp.tax);


        printf("press any button to show result");
        ch=getch();
        if(ch){
            system("cls");
            int netSalary;
            netSalary=emp.salary+emp.bouns-emp.tax;
            printf("your salary is %d",netSalary);
            printf("to return main pagepress any button ");
            ch=getch();
            system("cls");

        }

    }while(x==1);
    return 0;
}

void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
