#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
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
    //    printf("\033[0m"); // Reset to default color

        void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }

    //enter ===>13
    //esc ===>27
    //top ===>-32,72
    //tab ===>9
    //down ===>-32,80
    //right ===>-32,77
    //left ===>-32,75
    //home ===>-32,71
    //end ===>-32,79




    int flag=0;
    int x=2,count=0;
    struct employee emp[20];
    int arr[20]={0};

    do{
        char items[4][20]={"new","display","display all","exist"};
        char ch ,chEmployee;

        if(ch != ENTER){
            printf("Muen \n ");
            for(int i=0;i<4;i++){
                if(flag ==i ){
                    printf("\033[1;4;36;41m %s \n",items[i]);
                    printf("\033[0m ");

                }else{
                        printf("%s \n",items[i]);
                }
            }
        }



        ch=getch();

        if(ch == -32){
            ch=getch();
            system("cls");

            if(ch == DWON){
                if(flag ==3){
                    flag=0;
                }else{
                    flag++;
                }
                system("cls");
            }else if(ch == TOP){
                if(flag ==0){
                        flag=3;
                    }else{
                        flag--;
                    }
                system("cls");
            }else if(ch == HOME){
                flag=0;
                system("cls");
            }else if(ch == END){
                flag=3;
                system("cls");
            }
        }else if(ch == ENTER){
            system("cls");
            if(flag== 0){
                count++;
                gotoxy1(7,0);
                printf("employee %d",count+1);
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
                scanf("%d",&emp[count].code);
                gotoxy1(27,2);
                scanf("%s",emp[count].name);
                gotoxy1(7,4);
                scanf("%d",&emp[count].age);
                gotoxy1(27,4);
                scanf("%d",&emp[count].salary);
                gotoxy1(7,6);
                scanf("%d",&emp[count].bouns);
                gotoxy1(27,6);
                scanf("%d",&emp[count].tax);


                arr[count]=count;
                printf("\n if you want menue press any button dont enter and Esc \n");
            }else if(flag == 1){
                printf("enter index of employee");
                scanf("%d",&chEmployee);
                    for(int i=1;i<20;i++){
                        if(arr[i]== chEmployee){
                            gotoxy1(1,1+i);
                            printf("%d",emp[i].code);
                            gotoxy1(7,1+i);
                            printf("%s",emp[i].name);
                            int netSalary;
                            netSalary=emp[i].salary+emp[i].bouns-emp[i].tax;
                            gotoxy1(17,1+i);
                            printf("%d \n",netSalary);
                        }
                    }
                printf("\n if you want menue press any button dont enter Esc \n");
            }else if(flag == 2){
                for(int i=1;i<20;i++){
                    if(arr[i]){
                        gotoxy1(1,1+i);
                        printf("%d",emp[i].code);
                        gotoxy1(7,1+i);
                        printf("%s",emp[i].name);
                        int netSalary;
                        netSalary=emp[i].salary+emp[i].bouns-emp[i].tax;
                        gotoxy1(17,1+i);
                        printf("%d \n",emp[i].salary);
                    }
                }
                printf("\n if you want menue press any button dont enter Esc \n");
            }else if(flag ==3){
                printf("\n thanks see you later \n");
                x=0;
            }
        }else if( ch == ESC){
            x=0;
        }else if(ch ==TAB){
            if(flag ==3){
                    flag=0;
                }else{
                    flag++;
                }
                system("cls");

        }
    }while(x !=0);





//assiment2
/*

    char arr[100];
    int count=0;
    char ch;
    int x2=0;

   while(ch !=13 && count<=8){
   ch=getche();
   printf("\n");
    arr[count]=ch;
    count++;

   }
    printf("\n %s",arr);


*/

//assiment3


    /* char fname[3][20]={""},lname[3][20]={""},fullname[3][100]={""};


    for(int i=0;i<3;i++){
        printf("please enter frist Name %d",i+1);
        gets(fname[i]);
        printf("please enter last Name %d",i+1);
        gets(lname[i]);
    }

    for(int i=0;i<3;i++){
        strcat(fname[i]," ");
        strcat(fullname[i],fname[i]);
        strcat(fullname[i],lname[i]);
        printf("your full name is \t");
        puts(fullname[i]);
    }
    */



    //assiment 3

/*    char arr[3][20]={""};



    for(int i=0;i<3;i++){
        puts("enter your name");
        gets(arr[i]);
    }
    //long string

    char longest[1000];
    strcpy(longest,arr[0]);
    for(int i=0;i<2;i++){
        if(strlen(arr[i])>strlen(longest)){
            strcpy(longest,arr[i]);
        };
    };

    //short string
    char shortest[20];
    strcpy(shortest,arr[0]);
    for(int i=0;i<2;i++){
        if(strlen(arr[i])<strlen(shortest)){
            strcpy(shortest,arr[i]);
        };
    };

    printf("the long string ");
    puts(longest);

    printf("the bag string  ");
    puts(shortest);

*/




    return 0;
}
