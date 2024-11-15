#include <stdio.h>
#include <stdlib.h>

int power(int,int);

int main()
{




  printf("result is %d",power(5,2));

    int base=5,exp=2;
    int mult=1;
    while(exp>0){
        mult*=base;
        exp--;
    }
    printf("tset %d",mult);
    return 0;
}





int power(int base,int exp){
 if(exp ==0){
        return 1;
    }
    return base * power(base,exp -1);
}
