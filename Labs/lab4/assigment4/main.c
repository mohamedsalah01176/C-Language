#include <stdio.h>
#include <stdlib.h>

int main()
{
   char arr[3][20];



    for(int i=0;i<3;i++){
        puts("enter your name");
        gets(arr[i]);
    }
    //long string

    char longest[1000];
    strcpy(longest,arr[0]);
    for(int i=0;i<3;i++){
        if(strlen(arr[i])>strlen(longest)){
            strcpy(longest,arr[i]);
        };
    };

    //short string
    char shortest[20];
    strcpy(shortest,arr[0]);
    for(int i=0;i<3;i++){
        if(strlen(arr[i])<strlen(shortest)){
            strcpy(shortest,arr[i]);
        };
    };

    printf("the long string ");
    puts(longest);

    printf("the short string  ");
    puts(shortest);

    return 0;
}
