#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SIZEC 4
#define SIZES 3


void getSum(int []);
void getAVG(int []);
void getMax(int []);
void getMin(int []);
void revirse(int []);
void sortASC(int []);
void sortDESC(int []);
void ddisplayARR(int []);
void search(int []);


int main()
{

   int arrInf[SIZE],input ;




        printf("please fill array to next step, array contain 10 items\n");

        for(int i=0;i<SIZE;i++){
            printf("num %d \t",i+1);
            scanf("%d",&arrInf[i]);
        }

        do{
        printf("\n select one item from menue\n");
        printf("1) get sum\n");
        printf("2) get average\n");
        printf("3) get max\n");
        printf("4) get min\n");
        printf("5) reverse array\n");
        printf("6) sort array \n");

        printf("7) search \n");
        printf("8) EXist \n");

        scanf("%d",&input);
            int sum=0;

        switch(input){
        case 1:
            getSum(arrInf);
            break;
        case 2:
            //int sum=0;
            getAVG(arrInf);
            break;
        case 3:
            getMax(arrInf);
            break;

        case 4:
            getMin(arrInf);
            break;
        case 5:

            revirse(arrInf);
            break;

        case 6:
            int asin;


                int sortedArr[SIZE];
                printf("1)asc\n");
                printf("2)ascd\n");

                //don't write any word in scanf
                scanf("%d",&asin);
                for(int i=0;i<SIZE;i++){
                    sortedArr[i]=arrInf[i];
                }
                if(asin==1){
                   sortASC(sortedArr);
                }else if(asin ==2){
                   sortDESC(sortedArr);
                }else{
                    printf("1)asc\n");
                    printf("2)ascd\n");
                    scanf("select %d",&asin);
                }
                break;

        case 7:
            search(arrInf);
            break;

        default:
            printf("\n select the right choose");
        }
        }while(input != 8);


    return 0;
}


void getSum (int arrInf[]){
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=arrInf[i];
    }
    printf("sum = %d\n", sum);
}

void getAVG (int arrInf[]){
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=arrInf[i];
    }
    printf("avarage = %d \n", sum/SIZE);
}

void getMax (int arrInf[]){
    int great=arrInf[0];
    for(int i=0;i<SIZE;i++){
        if(arrInf[i]>great){
            great=arrInf[i];
        }
    }
    printf("max = %d",great);
}

void getMin (int arrInf[]){
   int small=arrInf[0];
    for(int i=0;i<SIZE;i++){
        if(arrInf[i]<small){
            small=arrInf[i];
        }
    }
    printf("min = %d",small);
}

void revirse (int arrInf[]){
    int newArr[SIZE];
    for(int i=0;i<SIZE;i++){
        newArr[i]=arrInf[SIZE-1-i];
    }
    printf("revese =");
    for(int i=0;i<SIZE;i++){
        printf("%d ",newArr[i]);
    }
}

void sortASC (int sortedArr[]){
        for(int i=0;i<SIZE-1;i++){
            for(int j=0;j<SIZE-i-1;j++){
            if (sortedArr[j] > sortedArr[j + 1]) {
        int temp = sortedArr[j+1];
        sortedArr[j+1] = sortedArr[j ];
        sortedArr[j ] = temp;
    }
        }
    }
        displayARR(sortedArr);

}
void sortDESC (int sortedArr[]){
        for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if (sortedArr[j] < sortedArr[j + 1]) {
        int temp = sortedArr[j];
        sortedArr[j] = sortedArr[j + 1];
        sortedArr[j + 1] = temp;
    }
        }
    }
    displayARR(sortedArr);
}

void displayARR (int sortedArr[]){
    for(int i=0;i<SIZE;i++){
        printf("%d \t",sortedArr[i]);
    }
}

void search (int arrInf[]){
   int searc;
    int isfound=0;
    printf("please enter your item");
    scanf("%d",&searc);
    for(int i=0;i<SIZE;i++){
        if(arrInf[i]== searc){
                isfound=1;
        }
    }
    if(isfound == 1){
        printf(" the value found \n");
    }else{
        printf(" the value not found \n");
    }
}
