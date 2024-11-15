#include <stdio.h>
#include <stdlib.h>

void deTObi(int);

int main()
{
    deTObi(8);

    int num=16,dev,rem;
    int array[32],i=0;
    while(num >0){
        dev=num/2;
        rem=num%2;
        num=num/2;
        array[i]=rem;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        printf("%d",array[j]);
    }
    return 0;
}

void deTObi(int n){
    int dev,rem;
     dev=n/2;
     rem=n%2;

    if(n !=0 ){
        deTObi(dev);
        printf("%d",rem);
    }
}
