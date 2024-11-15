#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SIZEC 4
#define SIZES 3

int main()
{
        //int arrCourse[5][4]={{70,80,90,40},{50,40,70,10},{60,10,80,50},{90,100,80,100},{80,10,20,100}};


      int inputUser;
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


        for(int i=0;i<SIZES;i++){
                int sum=0;
             for(int j=0;j<SIZEC;j++){
                sum+=arrCourse[j][i];
            }
            float avg= sum/SIZEC;
            printf("avg= %f \n",avg);
        }    return 0;
}
