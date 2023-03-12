#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));//for genrating a new no. at every single time
    number=rand()%100+1 ; //for genrating random number between 1 to 100
    printf("			follow the instruction enclosed between <<  >>\n\n		");
    printf("		NOW YOU CAN START THE GAME\n		");
    do{ 
         printf("\n");
         printf("\n");
        printf("			-*-*-*-*-*GUESS THE NUMBER BETWEEN 1 TO 100:-*-*-*-*-*::");
        scanf("%d",&guess);
        if(guess > number)
            {
			printf("\n");
         printf("\n");
		 printf("				<<	lower number please	>>");}
        else if(guess<number)
           {printf("\n");
         printf("\n"); 
		   
		   printf("\n				<<	higher number please	>>::");}
        else 
        {  printf("\n");
         printf("\n"); 
             printf("				##	CONGRATULATIONS	 ##		");
             printf("\n");
         printf("\n"); 
            printf("			-*-*-*-*-*YOU GUESSED IT IN ::%d ATTEMTS-*-*-*-*-*\n",nguesses );
        }
        nguesses++;
    }while(guess!=number);

    return 0;
}
