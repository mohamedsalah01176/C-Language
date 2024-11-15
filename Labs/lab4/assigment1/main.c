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

void gotoxy1(int ,int);
void showList(char [],int);
void displayOne(int[], struct employee[]);
void displayAll(int[], struct employee[]);
void createEMP(int, struct employee[],int[]);
/*void CreateEmployee(int,struct employee[], int[]);
void displayEmployee(struct employee[], int);
*/



int main()
{
    //    printf("\033[0m"); // Reset to default color



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
            if(flag== 0 ){
                    if(count <=20){
                        count++;
                       createEMP(count ,emp,arr);
                    }else{
                        printf("\n the limit is 20 employee if you want menue press any button  press Esc to exist \n");
                    }

            }else if(flag == 1){
                displayOne(arr, emp);
            }else if(flag == 2){
                displayAll(arr, emp);

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

    return 0;
}

void showList( char items [],int flag){
    for(int i=0;i<4;i++){
                if(flag ==i ){
                    printf("\033[1;4;36;41m %s \n",items[i]);
                    printf("\033[0m ");
                }else{
                        printf("%s \n",items[i]);
                }
            }
}

void gotoxy1(int x, int y)
        {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
};

void createEMP(int count, struct employee emp[],int arr[]){
        gotoxy1(7,0);
        printf("employee %d",count);
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
        printf("\n if you want menue press any button , press enter to insert employee, press Esc to exist \n");

}


void displayOne(int arr[], struct employee emp[]) {
    int chEmployee;
    printf("Enter index of employee: ");
    scanf("%d", &chEmployee);
    int found = 0;
    for (int i = 0; i < 20; i++) {
        if (arr[i] == chEmployee) {
            gotoxy1(1, 1 + i);
            printf("%d", emp[i].code);
            gotoxy1(7, 1 + i);
            printf("%s", emp[i].name);
            int netSalary;
            netSalary = emp[i].salary + emp[i].bouns - emp[i].tax;
            gotoxy1(17, 1 + i);
            printf("%d \n", netSalary);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Employee not found.\n");
    }
    printf("\nIf you want menu press any button, press Enter to insert employee, press Esc to exit \n");
}

void displayAll(int arr[], struct employee emp[]) {
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
}
