#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	FILE *fptr;int choice; int fcb=0;int real=0;int manu=0;int chelsea=0;int manc=0;int mal=0;int n;int i;
	char name[15],cast[15]; int id;
	printf("Enter number of voters:");//Done by authorities
	scanf("%d",&n);
	system("cls");
	for(i=0;i<n;i++)
	{
	printf("Please Enter your username:");
	scanf("%s%s",name,cast);
	printf("Enter your Registration id:\n");
	scanf("%d",&id);
	printf("Welcome %s %s \n Choose your Favourite team\n",name,cast);
    fptr=fopen("Voting.txt","a");
    fprintf(fptr,"\n%s	%s	%d\n\n\n",name,cast,id);
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("1.FC BARCELONA		2.REAL MADRID	3.MANCHESTER UNITED\n");
	printf("4.MANCHESTER CITY	5.CHELSEA		6.MALAGA	");
	  printf("----------------------------------------------------------------------------------------------------------------------");
	printf("\n\n\nEnter your Team's Serial Number:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	{
		printf("THanks for Voting Fc Barcelona.");
		fcb++;
		fprintf(fptr,"fcb 	%d\n",fcb);
		break;
	}
	case 2:
	{
		printf("THanks for Voting Real Madrid.");
		real++;
		fprintf(fptr,"REAL	%d\n",real);
		break;
	}
	case 3:
	{
		printf("THanks for Voting MANCHESTER UNITED		GO RED...");
		manu++;
		fprintf(fptr,"MANU	%d\n",manu);
		break;
	}
	case 4:
	{
		printf("THanks for Voting MANCHESTER CITY.");
		manc++;
		fprintf(fptr,"CITY	%d\n",manc);
		break;
	}
	case 5:
	{
		printf("THanks for Voting CHELSEA.");
		chelsea++;
		fprintf(fptr,"CHELLSEA	%d\n",chelsea);
		break;
	}
	case 6:
	{
		printf("THanks for Voting MALAGA");
		mal++;
		fprintf(fptr,"MALAGA	%d\n",mal);
		break;
	}
	default:
		{
			printf("Invalid");
			break;
		}
		fclose(fptr);
	}
	getch();
	system("cls");
}
printf("Total votes obtained by each team are:\n	BARCELONA= %d\n	REAL= %d\n	MANU= %d\n	chelsea= %d\n	CITY= %d\n	MALAGA= %d\n",fcb,real,manu,chelsea,manc,mal);
	if(fcb>real&&fcb>manu&&fcb>chelsea&&fcb>manc&&fcb>mal)
{
	printf("Barcelona is winner");
}
	else if(real>fcb&&real>manu&&real>chelsea&&real>manc&&real>mal)
{
	printf("Real madrid is winner");
}
else if(manu>real&&manu>fcb&&manu>chelsea&&manu>manc&&manu>mal)
{
	printf("MANCHESTER UNITED is winner");
}
	else if(chelsea>real&&chelsea>manu&&chelsea>fcb&&chelsea>manc&&chelsea>mal)
{
	printf("Chelsea is winner");
}
	else if(manc>manu&&manc>chelsea&&manc>fcb&&manc>mal&&manc>real)
{
	printf("MANCHESTER CITY is winner");
}
	else if(mal>real&&mal>manu&&mal>chelsea&&mal>manc&&mal>fcb)
{
	printf("Malaga is winner");
}
}
	
