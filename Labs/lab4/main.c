#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


int main()
{
    //    printf("\033[0m"); // Reset to default color


    //enter ===>13
    //esc ===>27
    //top ===>-32,72
    //left ===>9
    //down ===>-32,80
    //right ===>-32,77
    //left ===>-32,75
    //home ===>-32,71
    //end ===>-32,79

       /* printf("press any enter");
        printf("the assci code is %d %d \n",ch,ch);
        */



      /*  int flag=0;
    int x=2;
    do{
        char items[3][20]={"new","display","exist"};
        char ch;

        if(ch != 13){
            printf("Muen \n ");
            for(int i=0;i<3;i++){
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

            if(ch == 80){
                if(flag ==2){
                    flag=0;
                }else{
                    flag++;
                }
                system("cls");
            }else if(ch == 72){
                if(flag ==0){
                        flag=2;
                    }else{
                        flag--;
                    }
                system("cls");
            }else if(ch == 71){
                flag=0;
                system("cls");
            }else if(ch == 79){
                flag=2;
                system("cls");
            }
        }else if(ch == 13){
            system("cls");
            if(flag== 0){
                printf("this is new");
                printf("if you want menue press any button dont enter and Esc");
            }else if(flag == 1){
                printf("this is display");
                printf("if you want menue press any button dont enter Esc");
            }else if(flag ==2){
                printf("thanks see you later");
                x=0;
            }
        }else if( ch == 27){
            x=0;
        }else if(ch ==9){
            if(flag ==2){
                    flag=0;
                }else{
                    flag++;
                }
                system("cls");

        }
    }while(x !=0);

*/



//assiment2


/*    char arr[100];
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

    char arr[3][20]={""};



    for(int i=0;i<3;i++){
        puts("enter your name");
        gets(arr[i]);
    }
    //long string

    char longest[20];
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






    return 0;
}
