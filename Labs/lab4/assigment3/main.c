#include <stdio.h>
#include <stdlib.h>

int main()
{
 char fname[3][20]={""},lname[3][20]={""},fullname[3][100]={""};


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

        return 0;
}
