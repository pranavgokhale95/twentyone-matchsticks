#include <stdio.h>
int main()
{
	char choice;
	printf("Instructions for the game: \n User can pick only 1, 2, 3 or 4 matchsticks at a time \n The player which picks up the last matchstick looses! \n");
	do{

		int no=0,temp;
		while(no!=21)
		{
			temp=0;
			if(no==20)
			{
				printf("The number of matchsticks remaining in the pile: %d \n",(21-no));
				int i;
					for(i=1;i<=(21-no);i++)
					{
						printf("0 ");
					}
					printf("\n");
					for(i=1;i<=(21-no);i++)
					{
						printf("| ");
					}
					printf("\n");
					for(i=1;i<=(21-no);i++)
					{
						printf("| ");
					}
					printf("\n");
				printf("Enter the no. of matchsticks you want to pick: \n ");
				scanf("%d",&temp);
				if(temp==1)
				{ 
					no=no+1;
					printf("You picked up the last matchstick! You lose!\n");
				}
				else if(temp==2 || temp==3 || temp==4)
				{
					printf("There is/are only %d matchsticks remaining \n",(21-no));
				}

			}
			else if(no<21)
			{

				printf("Enter the no. of matchsticks you want to pick: \n");
				scanf("%d",&temp);
				if(temp==1 || temp==2 || temp==3 || temp==4)
				{
					printf("You have picked %d matchsticks \n",temp);
					printf("The computer picked %d matchsticks \n",(5-temp));	
					no=no+5;
					printf("There is/are only %d matchsticks remaining \n",(21-no));
					int i;
					for(i=1;i<=(21-no);i++)
					{
						printf("0 ");
					}
					printf("\n");
					for(i=1;i<=(21-no);i++)
					{
						printf("| ");
					}
					printf("\n");
					for(i=1;i<=(21-no);i++)
					{
						printf("| ");
					}
					printf("\n");
								
				}
				else
				{
					printf("Invalid choice! You can only pick 1, 2, 3 and 4 matchsticks. Please pick again! \n");
				}		
			}
			
		}
		
		printf("Do you want to try again? \n Enter y/n \n");
		scanf(" %c",&choice);
	}while(choice=='y' || choice=='Y');
	
	
	return 0;
}

