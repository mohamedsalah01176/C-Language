#include <stdio.h>
#include <stdlib.h>

int main()
{
   char arr[100];
    int count=0;
    char ch;
    int x2=0;

    printf("please enter your characters");
   while(ch !=13 && count<=8){
   ch=getche();
    arr[count]=ch;
    count++;

   }
    printf("\n %s",arr);    return 0;
}
