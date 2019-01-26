#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
//gobal varibale a and b
int a,b;
//function ram is declared with return a
int ram(void)
{
	a++;
	system("cls");
	printf("\nYour vote is counted.");
	return a;
}
	//function shyam is declared with return type b
int shyam(void)
{
	b++;
	system("cls");
	printf("\nYour vote is counted.");
	return b;
}
//structure define
struct person
{
	int id;
	char name[20];
	int pin;
}p[7];
struct savedata
{
	int id;
	char name[20];
	int pin;
}s[7];
//main function
int main()
{
	//file pointer define, character a and integer a,b,c,d are declared
	FILE * fptr;
//	FILE * fsd;
	char ch;
	int c, d,e,i=1,f,j=1;
	printf("Welcome!!!\n");
	//do while loop is used 
	do{
		printf("\n\nDo you want to vote?\n(type '1' for yes and '0'for no)\n:");
		scanf("%d",&c);
		if(c==1)
		{	
			printf("\nEnter Your ID_no. : ");
			scanf("%d",&p[i].id);
			printf("\nEnter your name : \n(like:Anumol_khanal)\n");
			scanf("%s",&p[i].name);
			printf("\nEnter your four(4) digit pin : ");
			scanf("%d",&p[i].pin);
			
			
			fptr=fopen("F:/sunway/data.txt","r");
			for(j=1;j<=7;j++)
			{  
				fscanf(fptr,"%d %s %d",&s[j].id,&s[j].name,&s[j].pin);
				if(p[i].id==s[j].id)
			 	{ 
			 		if(p[i].name[20]==s[j].name[20])
			 			{ 
			 				if(p[i].pin==s[j].pin)
			 					{
			 						printf("\nChoose your candidate!!!\n");
									printf("a. Ram\n");
									printf("b. Shyam\n\n");
									scanf("%s",&ch);
									//switch case is used

									switch(ch)
									{ 
										//if user choice a
										case 'a':
											{
												printf("\n\nDo you want to confirm your vote?\n(type '1' for yes and '0'for no)\n:");
 												scanf("%d",&d);
												if(d==1)
													{
									//ram function is call
														e=ram();
														break;
													}
												else
													{
														system("cls");
														printf("\nVote to your favourite one!");
														break;
													}
						
											}
									//if user choice b
										case 'b':
											{
												printf("\n\nDo you want to confirm your vote?\n(type '1' for yes and '0'for no)\n:");
 												scanf("%d",&d);
												if(d==1)
													{
												//shyam function is call
														f=shyam();
														break;
													}
												else
													{
														system("cls");
														printf("\nVote to your favourite one!");
														break;
													}
											}
											//if user enter invaild char 		
						 				default:
			 			   					{	
			 	  			 					system("cls");
							 					printf("Error! operator is not correct.");
										 		break;
			           						}
							 		}
								}
							else
						 		{
						 			printf("\nYour pin number is not correct.");
						 			break;
								}
						}
					else
						{
					 		printf("\nYour name doesnot match.");
					 		break;
						}
				}
			//	else
			//		{
			//	 		printf("\nYour id doesnot match");
			//	 		break;
			//		}
			}
		 	i++;   
 		}
	}while(c==1);
	fclose(fptr);
	fptr= fopen("F:/sunway/result.txt","a");
    fprintf(fptr,"ram = %d\n shyam = %d",e,f);
	fclose(fptr);
    printf("Result of this voting is save in the file.\n\nTHANK YOU!!!");
	getch();
	return(0);
}
