#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SIZEC 4
#define SIZES 3

int main()
{

   int arrInf[SIZE],input ;




        printf("please fill array to next step, array contain 10 items\n");

        for(int i=0;i<SIZE;i++){
            printf("num %d \t",i+1);
            scanf("%d",&arrInf[i]);
        }

        do{
        printf("select one item from menue\n");
        printf("1) get sum\n");
        printf("2) get average\n");
        printf("3) get max\n");
        printf("4) get min\n");
        printf("5) reverse array\n");
        printf("6) sort array \n");

        printf("7) search \n");
        printf("8) EXist \n");

        scanf("%d",&input);

        switch(input){
        case 1:
            int sum=0;
            for(int i=0;i<SIZE;i++){
                sum+=arrInf[i];
            }
            printf("sum = %d\n", sum);
            break;
        case 2:
            //int sum=0;
            for(int i=0;i<SIZE;i++){
                sum+=arrInf[i];
            }
            printf("avarage = %d \n", sum/SIZE);
            break;
        case 3:
            int great=arrInf[0];
            for(int i=0;i<SIZE;i++){
                if(arrInf[i]>great){
                    great=arrInf[i];
                }
            }
            printf("max = %d",great);
            break;

        case 4:
            int small=arrInf[0];
            for(int i=0;i<SIZE;i++){
                if(arrInf[i]<small){
                    small=arrInf[i];
                }
            }
            printf("min = %d",small);
            break;
        case 5:
            int newArr[SIZE];
            for(int i=0;i<SIZE;i++){
                newArr[i]=arrInf[SIZE-1-i];
            }
            printf("revese =");
            for(int i=0;i<SIZE;i++){
                printf("%d ",newArr[i]);
            }

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
                    for(int i=0;i<SIZE-1;i++){
                        for(int j=0;j<SIZE-1;j++){
                            if (sortedArr[j] > sortedArr[j + 1]) {
                        int temp = sortedArr[j+1];
                        sortedArr[j+1] = sortedArr[j ];
                        sortedArr[j ] = temp;
                    }
                        }
                    }

                }else if(asin ==2){
                    for(int i=0;i<SIZE;i++){
                        for(int j=0;j<SIZE;j++){
                            if (sortedArr[j] < sortedArr[j + 1]) {
                        int temp = sortedArr[j];
                        sortedArr[j] = sortedArr[j + 1];
                        sortedArr[j + 1] = temp;
                    }
                        }
                    }
                }else{
                    printf("1)asc\n");
                    printf("2)ascd\n");
                    scanf("select %d",&asin);
                }
                for(int i=0;i<SIZE;i++){
                    printf("%d \t",sortedArr[i]);
                }
                break;

        case 7:
            int searc;
            int isfound=0;
            printf("please enter your item");
            scanf("%d",&searc);
            for(int i=0;i<SIZE;i++){
                if(arrInf[i]== searc){
                        isfound=1;
                }
            }
            if(isfound==1){
                printf(" the value found \n");
            }else{
                printf(" the value not found \n");
            }

        default:
            printf("\n select the right choose");
        }
        }while(input != 8);


        //task2;

        //int arrCourse[5][4]={{70,80,90,40},{50,40,70,10},{60,10,80,50},{90,100,80,100},{80,10,20,100}};


     /*  int inputUser;
        int arrCourse[SIZES][SIZEC];
        for(int i=0;i<SIZES;i++){
           for(int j=0;j<SIZEC;j++){
                printf("enter degree form 0 to 100 student %d \t",i+1);
                scanf("%d",&inputUser);
               if(inputUser<=100 &&inputUser>=0){
                    arrCourse[i][j]=inputUser;
               }else{
                   printf("please enter  degree form 0 to 100 %d again",i+1);
                    scanf("%d",&inputUser);

               }
            }
        }

        for(int i=0;i<SIZES;i++){
                int sum=0;
             for(int j=0;j<SIZEC;j++){
                sum+=arrCourse[i][j];

            }
            if(sum>=240){
                    printf("sum student%d =%d grade is A \n ",i,sum);
                }else if(sum>=300){
                    printf("sum student%d =%d grade is B \n ",i,sum);
                }else if(sum>=360){
                    printf("sum student%d =%d grade is C \n ",i,sum);
                }else if(sum>=220){
                    printf("sum student%d =%d grade is D \n ",i,sum);
                }
                else{
                    printf("sum student %d =%d grade is F \n ",i,sum);
                }

        }


        for(int i=0;i<SIZEC;i++){
                int sum=0;
             for(int j=0;j<SIZES;j++){
                sum+=arrCourse[j][i];
            }
            float avg= sum/SIZEC;
            printf("avg= %f \n",avg);
        }
*/

    return 0;
}
