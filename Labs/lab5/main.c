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


int main()
{

    void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
//assigment1
/*

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



*/


//assignment2

/*
    int x=0;
    struct employee emp[3];
    char ch;

    printf("you have 5 employee \n");

for(int i=0;i<3;i++){
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

    for(int i=0;i<3;i++){
            gotoxy1(1,2+i);
            printf("%s ",emp[i].name);
            int netSalary;
            netSalary=emp[i].salary+emp[i].bouns-emp[i].tax;
            gotoxy1(15,2+i);
            printf("%d ",netSalary);
    }







// assigment 3
    /*struct employee emp[20];
    char ch;
    int arr[20]={0};
    int numEmployee,x;


    printf("%d \n",ch);
    do{
            x=1;
        printf("what index of employee");
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

*/






    return 0;
}
