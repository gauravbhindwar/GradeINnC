#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
        float p,c,b,m,comp,percentage;
        printf("Enter The Marks\n");

        printf("Physics :- ");
        scanf("%f",&p);
        printf("\n");

        printf("Chemistry :- ");
        scanf("%f",&c);
        printf("\n");

        printf("Biology :- ");
        scanf("%f",&b);
        printf("\n");

        printf("Mathematics :- ");
        scanf("%f",&m);
        printf("\n");

        printf("Computer :- ");
        scanf("%f",&comp);
        printf("\n");

        percentage = ((p+c+b+m+comp)/500)*100;

        {
            if(percentage>100)
            {
                printf("Error\n");
            }

            else if(percentage>=90)
            {
                printf("Grade A\n");
            }

            else if(percentage>=80)
            {
                printf("Grade B\n");
            }

            else if(percentage>=70)
            {
                printf("Grade C\n");
            }

            else if(percentage>=60)
            {
                printf("Grade D\n");
            }

            else if(percentage>=40)
            {
                printf("Grade E\n");
            }

            else
            {
                printf("Fail\n");
            }

            getch();
        } // End Of Grade
        


    } //End Of Loop



    
} //End Of Main FUnction