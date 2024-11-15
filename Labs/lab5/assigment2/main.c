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
    int x=0;
    struct employee emp[5];
    char ch;

    printf("you have 5 employee \n");

for(int i=0;i<5;i++){
        gotoxy1(10,1);
        printf("employee %d",i+1);
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
        scanf("%d",&emp[i].code);
        gotoxy1(27,2);
        scanf("%s",emp[i].name);
        gotoxy1(7,4);
        scanf("%d",&emp[i].age);
        gotoxy1(27,4);
        scanf("%d",&emp[i].salary);
        gotoxy1(7,6);
        scanf("%d",&emp[i].bouns);
        gotoxy1(27,6);
        scanf("%d",&emp[i].tax);
        printf("to next click enter");
        ch=getch();
        system("cls");
    }

    for(int i=0;i<5;i++){
            gotoxy1(1,2+i);
            printf("%s ",emp[i].name);
            int netSalary;
            netSalary=emp[i].salary+emp[i].bouns-emp[i].tax;
            gotoxy1(15,2+i);
            printf("%d ",netSalary);
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
